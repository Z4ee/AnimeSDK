#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class AdjustContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_09124A4A24353C26_OFFSET UNITYSDK_OFFSET(0xDBCC0C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0xDBC75C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xDBCBB70)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_6D006271A1FDA1A1_OFFSET UNITYSDK_OFFSET(0xDBCB030)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_B45A873CFEB6DEE0_OFFSET UNITYSDK_OFFSET(0xDBC7F80)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_B75D122F21CFAD25_OFFSET UNITYSDK_OFFSET(0xDBC6CF0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_B93DCFC57470A0D2_OFFSET UNITYSDK_OFFSET(0xDBC94B0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_C3E4F3CB916E5633_OFFSET UNITYSDK_OFFSET(0xDBC5AA0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0xDBC5410)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_D4248573D6F716B1_OFFSET UNITYSDK_OFFSET(0xDBC9770)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_E79188D2F9F30BB5_OFFSET UNITYSDK_OFFSET(0xDBC6400)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_F026F9F94BAA5E1F_1_OFFSET UNITYSDK_OFFSET(0xDBC95C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0xDBC9560)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDBCC170)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_0_OFFSET UNITYSDK_OFFSET(0xDBCC220)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_1_OFFSET UNITYSDK_OFFSET(0xDBCC230)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerInstance_TypeDefinitionIndex = 77723;

	class AdjustContainer_ContainerInstance : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ContainerRoot; // 0x10
		::UnityEngine::GameObject* ContainerItem; // 0x18
		::System::String* ContainerPrefabAssetPath; // 0x20
		::System::Single ContainerLength; // 0x28
		::System::Single ContainerMoveLength; // 0x2C
		::System::Int32 AdjustRange; // 0x30
		::Il2CppArray<::System::Int32>* ContainerIndexArr; // 0x38
		::System::Single SpeedUpDistance; // 0x40
		::System::Single SpeedUpRatio; // 0x44
		::RPG::Client::Prop::AdjustContainer* OwnerAdjustContainerRef; // 0x48
		::System::Single CurStep; // 0x50
		::System::Boolean IsMoveRight; // 0x54
		::System::Int32 CurrentPosIndex; // 0x58
		::UnityEngine::Vector3 _UnitOffset; // 0x5C
		::UnityEngine::Vector3 _OriginPosition; // 0x68
		::System::Nullable_1<::UnityEngine::Vector3> _NextPosition; // 0x74
		::System::Single _CurSpeed; // 0x84
		::System::Single _SpeedUpStep; // 0x88
		::System::Single _MovedDistance; // 0x8C
		::System::Single _TotalDistance; // 0x90
		::System::Action* _MoveFinishCallback; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _StreamingItem; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B75D122F21CFAD25()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_B75D122F21CFAD25_OFFSET))(this);
		}

		::System::Void Method_1_E79188D2F9F30BB5(::RPG::Client::Prop::AdjustContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdjustContainer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_E79188D2F9F30BB5_OFFSET))(this, a1);
		}

		::System::Void Method_1_D1305BC17A89C222()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_D1305BC17A89C222_OFFSET))(this);
		}

		::System::Void Method_1_D4248573D6F716B1(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_D4248573D6F716B1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B45A873CFEB6DEE0(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_B45A873CFEB6DEE0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_100C37D9D1141569(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_100C37D9D1141569_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_B93DCFC57470A0D2(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_B93DCFC57470A0D2_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_F026F9F94BAA5E1F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
		}

		::System::Int32 Method_1_F026F9F94BAA5E1F_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_F026F9F94BAA5E1F_1_OFFSET))(this);
		}

		::System::Void Method_1_C3E4F3CB916E5633(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_C3E4F3CB916E5633_OFFSET))(this, a1);
		}

		::System::Void Method_1_66CC9828DB1F478F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
		}

		::System::Void Method_1_6D006271A1FDA1A1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_6D006271A1FDA1A1_OFFSET))(this, a1);
		}

		::System::Void Method_1_09124A4A24353C26(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE_METHOD_1_09124A4A24353C26_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__11_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__11_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERINSTANCE___REGENERATENOREUSE_B__11_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
