#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_491;
class Class_1_A796F9ED23C6C673;
namespace RPG::Client { class FollowPointMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE109CC0)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE109B90)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xE109A50)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_METHOD_5_0DD61B7EBFB9E6E3_OFFSET UNITYSDK_OFFSET(0xE10A090)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_METHOD_5_F46E56E08575ED2C_OFFSET UNITYSDK_OFFSET(0xE10A010)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0xE109A60)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER_SETSUBOBJECTROTATION_OFFSET UNITYSDK_OFFSET(0xE109DC0)
#define RPG_CLIENT_SUBOBJECTROTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE10A260)

namespace RPG::Client
{
	inline static constexpr unsigned int SubObjectRotateController_TypeDefinitionIndex = 68825;

	class SubObjectRotateController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_A796F9ED23C6C673*>* KKLOCJHGLCM; // 0x18
		::RPG::Client::FollowPointMapping* HKMACMHADLC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_PROCESS_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_491* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_491*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void SetSubObjectRotation(::System::String* a1, ::RPG::Client::FollowPointMapping* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::FollowPointMapping*, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_SETSUBOBJECTROTATION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Transform* Method_5_F46E56E08575ED2C(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_METHOD_5_F46E56E08575ED2C_OFFSET))(this, a1);
		}

		::System::Void Method_5_0DD61B7EBFB9E6E3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBOBJECTROTATECONTROLLER_METHOD_5_0DD61B7EBFB9E6E3_OFFSET))(this, a1);
		}
	};
}
