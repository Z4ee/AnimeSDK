#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141ED3C0)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141ED180)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x141ED200)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_17C19F1FFDE0D888_OFFSET UNITYSDK_OFFSET(0x141ED670)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_2C463ED601F44ECA_OFFSET UNITYSDK_OFFSET(0x141ED610)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x141ED010)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_939448457A24CB1A_OFFSET UNITYSDK_OFFSET(0x141ED740)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x141ED000)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A42B0141BE94FABE_OFFSET UNITYSDK_OFFSET(0x141ED420)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x141ED110)
#define MOLEMOLE_CONFIG_CONFIGDECORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x141ED660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDecorBase_TypeDefinitionIndex = 71963;

	class ConfigDecorBase : public ::System::Object
	{
	public:
		::System::Boolean Export2Server; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_1_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_1_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_2C463ED601F44ECA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_2C463ED601F44ECA_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDecorBase* Method_1_17C19F1FFDE0D888(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_17C19F1FFDE0D888_OFFSET))(a1);
		}

		static ::MoleMole::Config::ConfigDecorBase* Method_1_939448457A24CB1A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_939448457A24CB1A_OFFSET))(a1, a2);
		}

		::System::Boolean Method_1_A42B0141BE94FABE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDECORBASE_METHOD_1_A42B0141BE94FABE_OFFSET))(this, a1, a2);
		}
	};
}
