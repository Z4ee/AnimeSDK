#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IA_TransformAnimHoverDriveScope.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class IA_TransformAnim_HoverBehavior_Class_1_EF8CED4A8A28BF43; }
namespace RPG::Client { class IA_TransformAnim_HoverMonoPlugin; }
namespace RPG::Client { class Scene_InstanceArrayExternalInputBridge; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD3DDDD0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD3DD850)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xD3DD890)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xD3DDCE0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_296B578F799AC8F6_OFFSET UNITYSDK_OFFSET(0xD3DF3C0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xD3DDEF0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_3570E58C2E156B82_OFFSET UNITYSDK_OFFSET(0xD3DE850)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_636140A1D6119369_OFFSET UNITYSDK_OFFSET(0xD3DF610)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xD3DD8F0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_8B1B933BE4636A41_OFFSET UNITYSDK_OFFSET(0xD3DF190)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD3DE7B0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xD3DDAB0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD3DDA10)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_C1CA05DDEB17E436_OFFSET UNITYSDK_OFFSET(0xD3DE190)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_C3B70C7BDD7129EC_OFFSET UNITYSDK_OFFSET(0xD3DF120)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xD3DDB60)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DF700)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverBehavior_TypeDefinitionIndex = 70803;

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

		::System::Void Method_3_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_2B9D478141E0F891()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_2B9D478141E0F891_OFFSET))(this);
		}

		::System::Void Method_3_3570E58C2E156B82(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_3570E58C2E156B82_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_METHOD_3_F7BA13C72A6B3F58_OFFSET))(this);
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
