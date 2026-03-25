#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x94A0BF0)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_ISSELFPLAYERFIRST_OFFSET UNITYSDK_OFFSET(0x94A0BD0)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x94A0C00)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_ISSELFPLAYERFIRST_OFFSET UNITYSDK_OFFSET(0x94A0BE0)
#define RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x94A0BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatPlayCoinPerformanceEventParam_TypeDefinitionIndex = 48869;

	class DiceCombatPlayCoinPerformanceEventParam : public ::System::Object
	{
	public:
		::System::Action* _CallBack_k__BackingField; // 0x10
		::System::Boolean _IsSelfPlayerFirst_k__BackingField; // 0x18

		::System::Void _ctor(::System::Boolean isSelfPlayerFirst, ::System::Action* callBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM__CTOR_OFFSET))(this, isSelfPlayerFirst, callBack);
		}

		::System::Boolean get_IsSelfPlayerFirst()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_ISSELFPLAYERFIRST_OFFSET))(this);
		}

		::System::Void set_IsSelfPlayerFirst(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_ISSELFPLAYERFIRST_OFFSET))(this, value);
		}

		::System::Action* get_CallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_CallBack(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATPLAYCOINPERFORMANCEEVENTPARAM_SET_CALLBACK_OFFSET))(this, value);
		}
	};
}
