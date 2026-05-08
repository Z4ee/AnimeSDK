#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMechBooPracticeResultPopWindowController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151E2720)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__DELAYRECOVERHP_B__0_OFFSET UNITYSDK_OFFSET(0x151E2730)
#define MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__DELAYRECOVERHP_B__1_OFFSET UNITYSDK_OFFSET(0x151E2830)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticeResultPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 79689;

	class UIMechBooPracticeResultPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* __9__1; // 0x10
		::UnityEngine::Material* hpMat; // 0x18
		::MoleMole::UIMechBooPracticeResultPopWindowController* __4__this; // 0x20
		::System::Int32 maxHP; // 0x28
		::System::Int32 newHP; // 0x2C
		::System::Int32 oldHP; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _DelayRecoverHP_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__DELAYRECOVERHP_B__0_OFFSET))(this);
		}

		::System::Void _DelayRecoverHP_b__1(::System::Int32 intCurHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__DELAYRECOVERHP_B__1_OFFSET))(this, intCurHp);
		}
	};
}
