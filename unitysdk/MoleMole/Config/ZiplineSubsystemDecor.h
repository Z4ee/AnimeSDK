#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F44D70)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18F44CC0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x18F451B0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_3793FC18A670A3B8_OFFSET UNITYSDK_OFFSET(0x18F45050)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_57A45300C6E7CC85_OFFSET UNITYSDK_OFFSET(0x18F44E70)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_5E39609B9560941C_OFFSET UNITYSDK_OFFSET(0x18F44A40)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x18F44B50)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0x18F44E00)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x18F44B40)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x18F44C50)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x18F44D40)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x18F44AD0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18F44E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZiplineSubsystemDecor_TypeDefinitionIndex = 81834;

	class ZiplineSubsystemDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_5E39609B9560941C(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_5E39609B9560941C_OFFSET))(this, a1);
		}

		::System::Void Method_2_DC715239B8B98D9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ZiplineSubsystemDecor* Method_2_57A45300C6E7CC85(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ZiplineSubsystemDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_57A45300C6E7CC85_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ZiplineSubsystemDecor* Method_2_3793FC18A670A3B8(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ZiplineSubsystemDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_3793FC18A670A3B8_OFFSET))(a1);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}
	};
}
