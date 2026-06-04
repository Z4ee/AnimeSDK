#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xC065620)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC065520)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC06ACE0)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xC06AD40)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD__CTOR_OFFSET UNITYSDK_OFFSET(0xC0656A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveObjectLogic_Load_TypeDefinitionIndex = 64121;

	class MonoCurveObjectLogic_Load : public ::System::Object
	{
	public:
		::System::Boolean loadedState; // 0x10
		::System::Boolean targetLoadedState; // 0x11
		::UnityEngine::GameObject* loadGameObject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
