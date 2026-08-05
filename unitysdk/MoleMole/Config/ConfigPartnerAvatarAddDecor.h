#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B912340)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B911F70)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x1B9123A0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x1B9127D0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_39F50C378BB4FA60_OFFSET UNITYSDK_OFFSET(0x1B912700)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1B911E60)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_B1E9A48DECC8E612_OFFSET UNITYSDK_OFFSET(0x1B9129C0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1B911E10)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B911F60)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_DABB3DBC802BA80C_OFFSET UNITYSDK_OFFSET(0x1B912860)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1B911FF0)
#define MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9127C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPartnerAvatarAddDecor_TypeDefinitionIndex = 71084;

	class ConfigPartnerAvatarAddDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PartnerRobotIds; // 0x18
		::System::Boolean ExcludeMainTeam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39F50C378BB4FA60(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_39F50C378BB4FA60_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigPartnerAvatarAddDecor* Method_2_DABB3DBC802BA80C(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigPartnerAvatarAddDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_DABB3DBC802BA80C_OFFSET))(a1);
		}

		::System::Boolean Method_2_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_020D79381203C043_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigPartnerAvatarAddDecor* Method_2_B1E9A48DECC8E612(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigPartnerAvatarAddDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_B1E9A48DECC8E612_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPARTNERAVATARADDDECOR_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
