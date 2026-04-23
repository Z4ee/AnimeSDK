#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropDayOfWeekAction.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/Struct_2_83C56BD9A06FA6EA_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class CocoonRow; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB712790)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GETCOCOONPROPOPENSTATE_OFFSET UNITYSDK_OFFSET(0xB718F80)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB71B900)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB7138E0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISACTIVESTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xB71B2C0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKACTIVE_OFFSET UNITYSDK_OFFSET(0xB718CC0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKPROP_OFFSET UNITYSDK_OFFSET(0xB71A700)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SETANIMATIONACTIONPARAM_OFFSET UNITYSDK_OFFSET(0xB71B3E0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SOLVEACTIVESTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xB71B5F0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB71B950)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB71B940)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__GETCOCOONDAYOFWEEKCONFIG_OFFSET UNITYSDK_OFFSET(0xB71B7F0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__ONREFRESHDAILYPROP_OFFSET UNITYSDK_OFFSET(0xB71B880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDayOfWeekComponent_TypeDefinitionIndex = 52900;

	class PropDayOfWeekComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::String** StaticGet_IS_DORMANT_PARAM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropDayOfWeekComponent_TypeDefinitionIndex)->GetStaticField(0x28D80);
		}
		::RPG::GameCore::PropComponent* _parentCmptRef; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropDayOfWeekAction, ::Struct_2_83C56BD9A06FA6EA_1>* _AnimActionParamDict; // 0x20
		::System::Nullable_1<::System::Boolean> _IsActive; // 0x28
		::RPG::GameCore::PropType _PropType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::PropComponent* parentCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_INITCOMPONENT_OFFSET))(this, parentCmpt);
		}

		::System::Boolean IsActiveStatusChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISACTIVESTATUSCHANGE_OFFSET))(this);
		}

		::System::Void SetAnimationActionParam(::RPG::GameCore::PropDayOfWeekAction action, ::System::String* animatorStateName, ::System::Single offset, ::System::Single transitionDuration, ::System::Boolean fixedTransition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropDayOfWeekAction, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SETANIMATIONACTIONPARAM_OFFSET))(this, action, animatorStateName, offset, transitionDuration, fixedTransition);
		}

		::System::Void SolveActiveStatusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SOLVEACTIVESTATUSCHANGE_OFFSET))(this);
		}

		static ::System::Boolean IsCocoonDayOfWeekActive(::System::UInt32 cocoonID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKACTIVE_OFFSET))(cocoonID);
		}

		static ::System::Boolean IsCocoonDayOfWeekProp(::System::UInt32 cocoonID, ::System::UInt32 worldLevel)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKPROP_OFFSET))(cocoonID, worldLevel);
		}

		static ::RPG::GameCore::PropState GetCocoonPropOpenState(::System::UInt32 cocoonID)
		{
			return ((::RPG::GameCore::PropState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GETCOCOONPROPOPENSTATE_OFFSET))(cocoonID);
		}

		static ::RPG::GameCore::CocoonRow* _GetCocoonDayOfWeekConfig(::System::UInt32 cocoonID)
		{
			return ((::RPG::GameCore::CocoonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__GETCOCOONDAYOFWEEKCONFIG_OFFSET))(cocoonID);
		}

		::System::Void _OnRefreshDailyProp(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__ONREFRESHDAILYPROP_OFFSET))(this, param);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GET_ISACTIVE_OFFSET))(this);
		}
	};
}
