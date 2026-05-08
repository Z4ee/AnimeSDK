#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6D862098692CC1FC.h"
#include "unitysdk/Enum_3_B25F7485F42A041A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C48A0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x186C4150)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x186C41D0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x186C3E80)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_46B58ADF1ED682FC_OFFSET UNITYSDK_OFFSET(0x186C4900)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x186C4F70)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x186C3E70)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_B56ACCAC55F57E6A_OFFSET UNITYSDK_OFFSET(0x186C4DD0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x186C3F70)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_EE8D15543061B6AA_OFFSET UNITYSDK_OFFSET(0x186C4F80)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x186C3FE0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x186C4DC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKRewardTrait_TypeDefinitionIndex = 66656;

	class ZKRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::Enum_3_6D862098692CC1FC ZKRewardType; // 0x18
		::System::Int32 RewardID; // 0x1C
		::System::Boolean IsMemberDrop; // 0x20
		::Enum_3_B25F7485F42A041A DropTimeType; // 0x24
		::System::Int32 DropVOID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_46B58ADF1ED682FC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_46B58ADF1ED682FC_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ZKRewardTrait* Method_2_B56ACCAC55F57E6A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_B56ACCAC55F57E6A_OFFSET))(a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ZKRewardTrait* Method_2_EE8D15543061B6AA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_METHOD_2_EE8D15543061B6AA_OFFSET))(a1);
		}
	};
}
