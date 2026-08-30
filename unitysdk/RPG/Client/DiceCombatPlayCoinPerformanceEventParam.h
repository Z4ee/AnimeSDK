#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xCD76590)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_ISSELFPLAYERFIRST_OFFSET UNITYSDK_OFFSET(0xCD76570)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xCD765A0)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_ISSELFPLAYERFIRST_OFFSET UNITYSDK_OFFSET(0xCD76580)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD76560)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatPlayCoinPerformanceEventParam_TypeDefinitionIndex = 60447;

	class DiceCombatPlayCoinPerformanceEventParam : public ::System::Object
	{
	public:
		::System::Action* _CallBack_k__BackingField; // 0x10
		::System::Boolean _IsSelfPlayerFirst_k__BackingField; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSelfPlayerFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_ISSELFPLAYERFIRST_OFFSET))(this);
		}

		::System::Void set_IsSelfPlayerFirst(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_ISSELFPLAYERFIRST_OFFSET))(this, a1);
		}

		::System::Action* get_CallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_CallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_CALLBACK_OFFSET))(this, a1);
		}
	};
}
