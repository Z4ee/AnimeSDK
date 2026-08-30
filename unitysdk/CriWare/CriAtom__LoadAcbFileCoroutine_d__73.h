#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcbLoader; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x164A62E0)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164A6A10)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164A6A70)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x164A6A20)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A61A0)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73__CTOR_OFFSET UNITYSDK_OFFSET(0x164A5140)
#define CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x164A6250)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom__LoadAcbFileCoroutine_d__73_TypeDefinitionIndex = 38614;

	class CriAtom__LoadAcbFileCoroutine_d__73 : public ::System::Object
	{
	public:
		::CriWare::CriAtomExAcbLoader* _asyncLoader_5__2; // 0x10
		::CriWare::CriFsBinder* binder; // 0x18
		::System::Object* __2__current; // 0x20
		::CriWare::CriAtomCueSheet* cueSheet; // 0x28
		::System::String* awbPath; // 0x30
		::System::String* acbPath; // 0x38
		::CriWare::CriAtom* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean loadAwbOnMemory; // 0x4C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__LOADACBFILECOROUTINE_D__73_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
