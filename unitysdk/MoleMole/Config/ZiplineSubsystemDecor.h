#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x162715B0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16271360)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x162713E0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_16902267D4DA4F5F_OFFSET UNITYSDK_OFFSET(0x16271130)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_2767B6EF6F39BC8E_OFFSET UNITYSDK_OFFSET(0x16271850)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x16271B60)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_3793FC18A670A3B8_OFFSET UNITYSDK_OFFSET(0x16271A00)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0x16271610)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x16271250)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x16271240)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16271350)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x162711D0)
#define MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16271840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZiplineSubsystemDecor_TypeDefinitionIndex = 66850;

	class ZiplineSubsystemDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Boolean EnableSceneAreaOptimization; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_16902267D4DA4F5F(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_16902267D4DA4F5F_OFFSET))(this, a1);
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

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ZiplineSubsystemDecor* Method_2_2767B6EF6F39BC8E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ZiplineSubsystemDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_2767B6EF6F39BC8E_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ZiplineSubsystemDecor* Method_2_3793FC18A670A3B8(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ZiplineSubsystemDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_3793FC18A670A3B8_OFFSET))(a1);
		}

		::System::Boolean Method_2_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_46F5479027C46F32_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINESUBSYSTEMDECOR_METHOD_2_2C463ED601F44ECA_OFFSET))(this, a1);
		}
	};
}
