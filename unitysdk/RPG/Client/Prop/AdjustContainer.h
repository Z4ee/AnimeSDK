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

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1AE26E70)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE25370)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_GETLOD0PATH_OFFSET UNITYSDK_OFFSET(0x1AE27980)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1AE246D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x1AE27F80)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_726932EAFA8D0A43_OFFSET UNITYSDK_OFFSET(0x1AE27A60)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9126C9C94FC0FA6A_OFFSET UNITYSDK_OFFSET(0x1AE265A0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AE26530)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x1AE25040)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_RESET_OFFSET UNITYSDK_OFFSET(0x1AE24770)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_SETALLCONTAINERSACTIVE_OFFSET UNITYSDK_OFFSET(0x1AE27790)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_SETPROPEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1AE26D40)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1AE25310)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATEALLCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x1AE27700)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATECONTROLLERSTATE_OFFSET UNITYSDK_OFFSET(0x1AE27130)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AE25B60)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE28520)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE284A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_TypeDefinitionIndex = 77721;

	class AdjustContainer : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_IAPBJHPPKOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EF80);
		}
		static ::System::String** StaticGet_NKKEEBMOBEH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EF88);
		}
		static ::System::String** StaticGet_IJOKJAOCOND()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EF90);
		}
		static ::System::String** StaticGet_FDPFOCEPKBO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EF98);
		}
		static ::System::String** StaticGet_EDBHFLBEFNC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EFA0);
		}
		static ::System::String** StaticGet_IHDPFADCECH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EFA8);
		}
		static ::System::String** StaticGet_MJACCEBBOOF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AdjustContainer_TypeDefinitionIndex)->GetStaticField(0x5EFB0);
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
		::RPG::Client::AdventurePhase* FKMBMNHCAAE; // 0x98
		::RPG::GameCore::PropComponent* CLGHBANCIDF; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AdjustContainer_ContainerController*>*>* CHMDGMJPJBA; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* KAHCBAKFNOJ; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::MonoMovementPropHandle*>* LAKKINOPEFC; // 0xB8

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

		::System::Void Method_6_655DDB722F1FDE73()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_655DDB722F1FDE73_OFFSET))(this);
		}

		::System::Void Method_6_9F8F6511E8EF1235()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9F8F6511E8EF1235_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_9126C9C94FC0FA6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_METHOD_6_9126C9C94FC0FA6A_OFFSET))(this);
		}
	};
}
