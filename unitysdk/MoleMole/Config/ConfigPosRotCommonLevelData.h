#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigCommonLevelData.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x183C81B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x183C7E30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x183C8210)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x183C7EB0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x183C7C30)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_85C03D244F4D678F_OFFSET UNITYSDK_OFFSET(0x183C8730)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x183C84D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_929BE9BE915F0B43_OFFSET UNITYSDK_OFFSET(0x183C86B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_A07BBB39DCAC48C7_OFFSET UNITYSDK_OFFSET(0x183C8550)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x183C7DC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_C9158580CC3C5ACF_OFFSET UNITYSDK_OFFSET(0x183C7CC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_F2962016E737497B_OFFSET UNITYSDK_OFFSET(0x183C88E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x183C8540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotCommonLevelData_TypeDefinitionIndex = 52806;

	class ConfigPosRotCommonLevelData : public ::MoleMole::Config::ConfigCommonLevelData
	{
	public:
		// static const ::System::String* ConfigTriggerFilterTypeName; // 0x0
		::MoleMole::Config::ConfigPosRot* ConfigPosRot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigCommonLevelData* Method_2_C9158580CC3C5ACF()
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_C9158580CC3C5ACF_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_2_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigPosRotCommonLevelData* Method_2_A07BBB39DCAC48C7(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigPosRotCommonLevelData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_A07BBB39DCAC48C7_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_929BE9BE915F0B43(::System::String* a1, ::MoleMole::Config::ConfigPosRotCommonLevelData*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigPosRotCommonLevelData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_929BE9BE915F0B43_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigPosRotCommonLevelData* Method_2_85C03D244F4D678F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigPosRotCommonLevelData*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_85C03D244F4D678F_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::String* Method_2_F2962016E737497B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTCOMMONLEVELDATA_METHOD_2_F2962016E737497B_OFFSET))(this);
		}
	};
}
