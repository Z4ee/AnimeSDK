#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MonoMovementPropHandle; }
namespace RPG::Client { class PropEffect; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerController; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x9FFEB00)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FFD290)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_GETLOD0PATH_OFFSET UNITYSDK_OFFSET(0x9FFF410)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x9FFC6D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x9FFFA10)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_726932EAFA8D0A43_OFFSET UNITYSDK_OFFSET(0x9FFF4F0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_90DAC38E6899C803_OFFSET UNITYSDK_OFFSET(0x9FFE2F0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9FFE280)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x9FFCF30)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_RESET_OFFSET UNITYSDK_OFFSET(0x9FFC770)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_SETALLCONTAINERSACTIVE_OFFSET UNITYSDK_OFFSET(0x9FFF200)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_SETPROPEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x9FFE9D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x9FFD230)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATEALLCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x9FFF160)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATECONTROLLERSTATE_OFFSET UNITYSDK_OFFSET(0x9FFEDE0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FFD8E0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FFFFB0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x9FFFF30)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0000C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA000050)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA000060)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_TypeDefinitionIndex = 63644;

	class AdjustContainer : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x476F0);
		}
		static ::System::String** StaticGet_Field_6_18()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x476F8);
		}
		static ::System::String** StaticGet_Field_6_21()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x47700);
		}
		static ::System::String** StaticGet_Field_6_20()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x47708);
		}
		static ::System::String** StaticGet_Field_6_19()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x47710);
		}
		static ::System::String** StaticGet_Field_6_23()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x47718);
		}
		static ::System::String** StaticGet_Field_6_22()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x47720);
		}
		::Il2CppArray<::RPG::Client::Prop::AdjustContainer_ContainerInstance*>* ContainerInstanceArray; // 0x48
		::Il2CppArray<::RPG::Client::Prop::AdjustContainer_ContainerController*>* ContainerControllerArray; // 0x50
		::RPG::Client::PropEffect* ConveyorBeltEffect; // 0x58
		::Il2CppArray<::RPG::Client::PropEffect*>* CornerBeltEffects; // 0x60
		::System::String* BeltAnimatorStateName; // 0x68
		::System::String* EvConveyorBeltMoving; // 0x70
		::System::String* EvConveyorBeltStop; // 0x78
		::System::String* EvConveyorConsoleSwitch; // 0x80
		::System::UInt32 ConsoleMapIconID; // 0x88
		::System::Boolean IsInGame; // 0x8C
		::System::Single CurStep; // 0x90
		::System::Int32 MoveState; // 0x94
		::RPG::Client::AdventurePhase* Field_6_13; // 0x98
		::RPG::GameCore::PropComponent* Field_6_14; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AdjustContainer_ContainerController*>*>* Field_6_15; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_6_16; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* Field_6_17; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_RESET_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CLEARALL_OFFSET))(this);
		}

		static ::System::Void SetPropEffectActive(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_SETPROPEFFECTACTIVE_OFFSET))(a1, a2);
		}

		::System::Void UpdateControllerState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATECONTROLLERSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateAllControllers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATEALLCONTROLLERS_OFFSET))(this);
		}

		::System::Void SetAllContainersActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_SETALLCONTAINERSACTIVE_OFFSET))(this, a1);
		}

		static ::System::String* GetLod0Path(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_GETLOD0PATH_OFFSET))(a1);
		}

		::System::Void Method_6_726932EAFA8D0A43(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_726932EAFA8D0A43_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_6EECE8924BBFC43C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_6EECE8924BBFC43C_OFFSET))(this);
		}

		::System::Void Method_6_9F8F6511E8EF1235()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9F8F6511E8EF1235_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_90DAC38E6899C803()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_90DAC38E6899C803_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
