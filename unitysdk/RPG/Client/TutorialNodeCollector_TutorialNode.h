#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE301D00)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xE3028F0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xE301E10)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_A8A8826892D676C1_OFFSET UNITYSDK_OFFSET(0xE302730)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xE301950)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE302940)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialNodeCollector_TutorialNode_TypeDefinitionIndex = 68208;

	class TutorialNodeCollector_TutorialNode : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::UnityEngine::GameObject* Node; // 0x18
		::System::Boolean IsPCOnly; // 0x20
		::System::Boolean IsMobileOnly; // 0x21
		::System::String* _RegisterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
		}

		::System::Void Method_1_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_CLEAR_OFFSET))(this);
		}

		::System::Boolean Method_1_A8A8826892D676C1(::Class_0_16E4307DCC419505_355* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_355*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_A8A8826892D676C1_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_1_38B862BB2192EC08()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TUTORIALNODE_METHOD_1_38B862BB2192EC08_OFFSET))(this);
		}
	};
}
