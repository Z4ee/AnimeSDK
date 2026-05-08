#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1424F500)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1424F290)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_00CF16A0F9D15E4C_OFFSET UNITYSDK_OFFSET(0x1424F920)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_179D78E38D396340_OFFSET UNITYSDK_OFFSET(0x1424F7E0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1424F050)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x1424FAC0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1424F310)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1424F040)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1424F140)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_D39AAF7777560A81_OFFSET UNITYSDK_OFFSET(0x1424F560)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x1424F1B0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1424F7D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopRewardTrait_TypeDefinitionIndex = 50597;

	class CoopRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_D39AAF7777560A81(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_D39AAF7777560A81_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CoopRewardTrait* Method_2_179D78E38D396340(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_179D78E38D396340_OFFSET))(a1);
		}

		static ::MoleMole::Config::CoopRewardTrait* Method_2_00CF16A0F9D15E4C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_00CF16A0F9D15E4C_OFFSET))(a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}
	};
}
