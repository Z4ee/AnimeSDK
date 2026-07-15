#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ElfCell; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFFIELD_INIT_OFFSET UNITYSDK_OFFSET(0x18E20730)
#define RPG_CLIENT_ELFFIELD_UNINIT_OFFSET UNITYSDK_OFFSET(0x18E20AE0)
#define RPG_CLIENT_ELFFIELD_UPDATEFIELD_OFFSET UNITYSDK_OFFSET(0x18E209C0)
#define RPG_CLIENT_ELFFIELD__CLEARCELLS_OFFSET UNITYSDK_OFFSET(0x18E2F5D0)
#define RPG_CLIENT_ELFFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2FAB0)
#define RPG_CLIENT_ELFFIELD__INITCELLS_OFFSET UNITYSDK_OFFSET(0x18E2ED20)
#define RPG_CLIENT_ELFFIELD__INITUNLOCKFIELD_OFFSET UNITYSDK_OFFSET(0x18E2EB80)
#define RPG_CLIENT_ELFFIELD__LOADPROPS_OFFSET UNITYSDK_OFFSET(0x18E2F7F0)
#define RPG_CLIENT_ELFFIELD__UPDATECELLS_OFFSET UNITYSDK_OFFSET(0x18E2F080)
#define RPG_CLIENT_ELFFIELD__UPDATEUNLOCKFIELD_OFFSET UNITYSDK_OFFSET(0x18E2EEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfField_TypeDefinitionIndex = 65614;

	class ElfField : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _ArtField; // 0x18
		::System::Int32 FieldID; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfCell*>* Cells; // 0x28
		::RPG::Client::ElfCell* HugeCell; // 0x30
		::RPG::Client::ElfFarmFieldData* _FieldData; // 0x38
		::System::Boolean _IsPropsLoaded; // 0x40
		::UnityEngine::Transform* UIArchor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ElfFarmFieldData* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateField(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD_UPDATEFIELD_OFFSET))(this, a1);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD_UNINIT_OFFSET))(this);
		}

		::System::Void _InitUnlockField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__INITUNLOCKFIELD_OFFSET))(this);
		}

		::System::Void _LoadProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__LOADPROPS_OFFSET))(this);
		}

		::System::Void _InitCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__INITCELLS_OFFSET))(this);
		}

		::System::Void _UpdateUnlockField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__UPDATEUNLOCKFIELD_OFFSET))(this);
		}

		::System::Void _UpdateCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__UPDATECELLS_OFFSET))(this);
		}

		::System::Void _ClearCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFIELD__CLEARCELLS_OFFSET))(this);
		}
	};
}
