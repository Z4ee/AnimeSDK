#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PolymerAnimationPropertyDatabase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_4B3308289404939B_OFFSET UNITYSDK_OFFSET(0x9FF38A0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_947C1FE4941F3BAA_OFFSET UNITYSDK_OFFSET(0x9FF3A50)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9FF3620)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9FF3A10)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9FF35E0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CB6F6E10453B8642_OFFSET UNITYSDK_OFFSET(0x9FF37C0)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_FD97D2244C0FF5A9_OFFSET UNITYSDK_OFFSET(0x9FF3660)
#define RPG_CLIENT_POLYMERPROPERTYLINKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF3500)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerPropertyLinkBase_TypeDefinitionIndex = 57543;

	class PolymerPropertyLinkBase : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::UnityEngine::Transform* target2; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* prefabPath; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* hierachyPath; // 0x28
		::System::Boolean targetNotInArtPreb; // 0x30
		::UnityEngine::Transform* root; // 0x38
		::UnityEngine::Transform* polymerRoot; // 0x40
		::RPG::Client::PolymerAnimationPropertyDatabase* database; // 0x48
		::System::Boolean EditorFolder; // 0x50

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_FD97D2244C0FF5A9(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_FD97D2244C0FF5A9_OFFSET))(this, a1);
		}

		::System::Void Method_1_4B3308289404939B(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_4B3308289404939B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Int32 Method_1_947C1FE4941F3BAA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_947C1FE4941F3BAA_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_1_CB6F6E10453B8642(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERPROPERTYLINKBASE_METHOD_1_CB6F6E10453B8642_OFFSET))(this, a1);
		}
	};
}
