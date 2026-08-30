#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEscalatorItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOESCALATORCONFIGURE_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0xD8254C0)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD824930)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_GET_INSTANCEMATRICES_OFFSET UNITYSDK_OFFSET(0xD824970)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_GET_ITEMSORTLENGTH_OFFSET UNITYSDK_OFFSET(0xD824950)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_METHOD_5_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0xD824B00)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_METHOD_5_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0xD8249D0)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xD824A90)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD825100)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_REMOVEALLITEM_OFFSET UNITYSDK_OFFSET(0xD824980)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xD824940)
#define RPG_CLIENT_MONOESCALATORCONFIGURE_SET_ITEMSORTLENGTH_OFFSET UNITYSDK_OFFSET(0xD824960)
#define RPG_CLIENT_MONOESCALATORCONFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8255F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEscalatorConfigure_TypeDefinitionIndex = 68555;

	class MonoEscalatorConfigure : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEscalatorItem* item; // 0x18
		::System::Single itemLength; // 0x20
		::Il2CppArray<::UnityEngine::Transform*>* Points; // 0x28
		::System::Single _Distance_k__BackingField; // 0x30
		::System::Single _ItemSortLength_k__BackingField; // 0x34
		::Il2CppArray<::RPG::Client::MonoEscalatorItem*>* Items; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* PointPositions; // 0x40
		::Il2CppArray<::System::Single>* PointDistances; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GDJKHEEEPJM; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE__CTOR_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_ItemSortLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_GET_ITEMSORTLENGTH_OFFSET))(this);
		}

		::System::Void set_ItemSortLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_SET_ITEMSORTLENGTH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* get_InstanceMatrices()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_GET_INSTANCEMATRICES_OFFSET))(this);
		}

		::System::Void RemoveAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_REMOVEALLITEM_OFFSET))(this);
		}

		::System::Void RefreshItems(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMS_OFFSET))(this, a1);
		}

		::System::Void RefreshItemTransform(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_REFRESHITEMTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EvaluatePosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_EVALUATEPOSITION_OFFSET))(this, a1);
		}

		::System::Void Method_5_5FB0DC4E8DAA3EC5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_METHOD_5_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
		}

		::System::Void Method_5_7443AD94E7275ABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORCONFIGURE_METHOD_5_7443AD94E7275ABA_OFFSET))(this);
		}
	};
}
