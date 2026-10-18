#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IA_TransformAnimHoverDriveScope.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43; }
namespace RPG::Client { class IA_TransformAnim_HoverMonoPlugin; }
namespace RPG::Client { class Scene_InstanceArrayExternalInputBridge; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD32AC90)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD32A5C0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xD32A640)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_063DCFE51D518879_OFFSET UNITYSDK_OFFSET(0xD32B860)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xD32ABA0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_296B578F799AC8F6_OFFSET UNITYSDK_OFFSET(0xD32C5F0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xD32A900)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD32A830)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_636140A1D6119369_OFFSET UNITYSDK_OFFSET(0xD32C840)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xD32ADE0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_8B1B933BE4636A41_OFFSET UNITYSDK_OFFSET(0xD32C3C0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD32B7A0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_C1CA05DDEB17E436_OFFSET UNITYSDK_OFFSET(0xD32B110)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_C3B70C7BDD7129EC_OFFSET UNITYSDK_OFFSET(0xD32C350)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0xD32A6A0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xD32A9D0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD32C930)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverBehavior_TypeDefinitionIndex = 70841;

	class IA_TransformAnim_HoverBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		// static const ::System::Single k_PushEpsSqr; // 0x0
		// static const ::System::Single k_PushRotEpsDeg; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43*>* _childEntries; // 0x38
		::System::Boolean _entriesBuilt; // 0x40
		::System::Boolean _hasAnySnapshot; // 0x41
		::RPG::Client::IA_TransformAnimHoverDriveScope _resolvedDriveScope; // 0x44
		::RPG::Client::Scene_InstanceArrayExternalInputBridge* _cachedBridge; // 0x48
		::System::Boolean _bridgeLookupDone; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::RPG::Client::IA_TransformAnim_HoverMonoPlugin* get_Owner()
		{
			return ((::RPG::Client::IA_TransformAnim_HoverMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_OWNER_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Target()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_TARGET_OFFSET))(this);
		}

		::System::Void Method_3_D87A7D8243E04FD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_30D1209326FA87FC_1_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_3_063DCFE51D518879(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_063DCFE51D518879_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_FD3B916300F77FDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_FD3B916300F77FDA_OFFSET))(this);
		}

		static ::System::Boolean Method_3_C3B70C7BDD7129EC(::RPG::Client::IA_TransformAnim_HoverMonoPlugin* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IA_TransformAnim_HoverMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_C3B70C7BDD7129EC_OFFSET))(a1);
		}

		::System::Void Method_3_C1CA05DDEB17E436(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_C1CA05DDEB17E436_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_3_296B578F799AC8F6(::RPG::Client::IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_296B578F799AC8F6_OFFSET))(a1, a2);
		}

		::System::Void Method_3_8B1B933BE4636A41(::RPG::Client::IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_8B1B933BE4636A41_OFFSET))(this, a1);
		}

		::System::Void Method_3_1293CB739F1151A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_1293CB739F1151A1_OFFSET))(this);
		}

		static ::RPG::Client::Scene_InstanceArrayExternalInputBridge* Method_3_636140A1D6119369(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::Scene_InstanceArrayExternalInputBridge*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_636140A1D6119369_OFFSET))(a1);
		}
	};
}
