#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45.h"
#include "unitysdk/Class_2_E26E60413FE51F20_Enum_3_E0E4BCC5566EC930.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_E26E60413FE51F20;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class SpriteRenderer; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_BUILDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1E682D80)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E6832E0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INITDATA_OFFSET UNITYSDK_OFFSET(0x1E682990)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1E6828E0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_METHOD_5_10E513360D352B03_OFFSET UNITYSDK_OFFSET(0x1E682A60)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_METHOD_5_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x1E683330)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_METHOD_5_EB2EF2323DFB43ED_OFFSET UNITYSDK_OFFSET(0x1E683820)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E682930)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETEXCLAMATIONMARK_OFFSET UNITYSDK_OFFSET(0x1E683070)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETGLODMARK_OFFSET UNITYSDK_OFFSET(0x1E682FB0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETNUM_OFFSET UNITYSDK_OFFSET(0x1E6829E0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETPROPSPRITE_OFFSET UNITYSDK_OFFSET(0x1E683130)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETSYMBOL_OFFSET UNITYSDK_OFFSET(0x1E682E60)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6836A0)

namespace MoleMole::Arcade::CompanionProject::Client
{
	inline static constexpr unsigned int CpNumTipsBehaviour_TypeDefinitionIndex = 90925;

	class CpNumTipsBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::SpriteRenderer*>* numObjs; // 0x18
		::Il2CppArray<::UnityEngine::SpriteRenderer*>* symbols; // 0x20
		::UnityEngine::SpriteRenderer* exclamationMark; // 0x28
		::UnityEngine::SpriteRenderer* goldMark; // 0x30
		::UnityEngine::SpriteRenderer* propSprite; // 0x38
		::System::Boolean Field_5_5; // 0x40
		::System::Int32 Field_5_6; // 0x44
		::System::Boolean Field_5_7; // 0x48
		::System::Boolean Field_5_8; // 0x49
		::System::Boolean Field_5_9; // 0x4A
		::System::Boolean Field_5_10; // 0x4B
		::System::Collections::Generic::Stack_1<::System::Int32>* Nums; // 0x50
		::System::Int32 num; // 0x58
		::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45 numType; // 0x5C
		::Class_2_E26E60413FE51F20* Field_5_14; // 0x60
		::Il2CppArray<::System::Int32>* Field_5_15; // 0x68
		::System::Single deltaWidth; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* Init(::Class_2_E26E60413FE51F20* a1)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::Class_2_E26E60413FE51F20*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INIT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_RELEASE_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* InitData()
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_INITDATA_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetNum(::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45 a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETNUM_OFFSET))(this, a1, a2);
		}

		::System::Void BuildLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_BUILDLAYOUT_OFFSET))(this);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetSymbol(::Class_2_E26E60413FE51F20_Enum_3_E0E4BCC5566EC930 a1)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::Class_2_E26E60413FE51F20_Enum_3_E0E4BCC5566EC930))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETSYMBOL_OFFSET))(this, a1);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetGlodMark(::System::Boolean a1)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETGLODMARK_OFFSET))(this, a1);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetExclamationMark(::System::Boolean a1)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETEXCLAMATIONMARK_OFFSET))(this, a1);
		}

		::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* SetPropSprite(::System::String* a1)
		{
			return ((::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_SETPROPSPRITE_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_FLUSH_OFFSET))(this);
		}

		::UnityEngine::Sprite* Method_5_EB2EF2323DFB43ED(::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_METHOD_5_EB2EF2323DFB43ED_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_9D0688AE2E08E349()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_METHOD_5_9D0688AE2E08E349_OFFSET))(this);
		}

		::System::Void Method_5_10E513360D352B03(::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_CPNUMTIPSBEHAVIOUR_METHOD_5_10E513360D352B03_OFFSET))(this, a1, a2);
		}
	};
}
