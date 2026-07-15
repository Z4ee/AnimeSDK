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

#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127C1D50)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GETCOCOONPROPOPENSTATE_OFFSET UNITYSDK_OFFSET(0x127BEE90)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x127C24F0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x127C1DE0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISACTIVESTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x127C1EA0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKACTIVE_OFFSET UNITYSDK_OFFSET(0x127BEBD0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKPROP_OFFSET UNITYSDK_OFFSET(0x127C0FD0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SETANIMATIONACTIONPARAM_OFFSET UNITYSDK_OFFSET(0x127C1FE0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SOLVEACTIVESTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x127C21F0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x127C2540)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x127C2530)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__GETCOCOONDAYOFWEEKCONFIG_OFFSET UNITYSDK_OFFSET(0x127C23E0)
#define RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__ONREFRESHDAILYPROP_OFFSET UNITYSDK_OFFSET(0x127C2470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDayOfWeekComponent_TypeDefinitionIndex = 54828;

	class PropDayOfWeekComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::String** StaticGet_IS_DORMANT_PARAM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropDayOfWeekComponent_TypeDefinitionIndex)->GetStaticField(0x4120);
		}
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropDayOfWeekAction, ::Struct_2_83C56BD9A06FA6EA_1>* _AnimActionParamDict; // 0x18
		::RPG::GameCore::PropComponent* _parentCmptRef; // 0x20
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

		::System::Void InitComponent(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean IsActiveStatusChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISACTIVESTATUSCHANGE_OFFSET))(this);
		}

		::System::Void SetAnimationActionParam(::RPG::GameCore::PropDayOfWeekAction a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropDayOfWeekAction, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SETANIMATIONACTIONPARAM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SolveActiveStatusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_SOLVEACTIVESTATUSCHANGE_OFFSET))(this);
		}

		static ::System::Boolean IsCocoonDayOfWeekActive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKACTIVE_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoonDayOfWeekProp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_ISCOCOONDAYOFWEEKPROP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::PropState GetCocoonPropOpenState(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GETCOCOONPROPOPENSTATE_OFFSET))(a1);
		}

		static ::RPG::GameCore::CocoonRow* _GetCocoonDayOfWeekConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CocoonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__GETCOCOONDAYOFWEEKCONFIG_OFFSET))(a1);
		}

		::System::Void _OnRefreshDailyProp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT__ONREFRESHDAILYPROP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDAYOFWEEKCOMPONENT_GET_ISACTIVE_OFFSET))(this);
		}
	};
}
