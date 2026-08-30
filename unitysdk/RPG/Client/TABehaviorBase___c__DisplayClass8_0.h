#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TABehaviorBase; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_TABEHAVIORBASE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F40E0)
#define RPG_CLIENT_TABEHAVIORBASE___C__DISPLAYCLASS8_0__PRELOADDEPENDENTASSET_B__0_OFFSET UNITYSDK_OFFSET(0x1B3F44E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TABehaviorBase___c__DisplayClass8_0_TypeDefinitionIndex = 70732;

	class TABehaviorBase___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* __9__0; // 0x10
		::System::Action* completeCallback; // 0x18
		::RPG::Client::TABehaviorBase* __4__this; // 0x20
		::System::Int32 taskCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _PreloadDependentAsset_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE___C__DISPLAYCLASS8_0__PRELOADDEPENDENTASSET_B__0_OFFSET))(this, a1);
		}
	};
}
