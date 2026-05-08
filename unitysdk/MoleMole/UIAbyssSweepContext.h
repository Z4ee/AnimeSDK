#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1685EC66FBD28897;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIABYSSSWEEPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1631C1B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssSweepContext_TypeDefinitionIndex = 43241;

	class UIAbyssSweepContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* taskName; // 0x28
		::System::String* rewardTitle; // 0x30
		::UnityEngine::Events::UnityAction* closeAction; // 0x38
		::UnityEngine::Events::UnityAction* sweepAction; // 0x40
		::UnityEngine::Events::UnityAction* goGetAction; // 0x48
		::System::String* title; // 0x50
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* rewardList; // 0x58
		::System::Int32 itemConsume; // 0x60
		::System::Boolean canSweep; // 0x64
		::System::Int32 itemID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSSWEEPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
