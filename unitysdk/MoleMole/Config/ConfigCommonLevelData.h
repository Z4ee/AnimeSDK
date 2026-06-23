#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12B365D0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12B36350)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_0F9C98D2F5805479_OFFSET UNITYSDK_OFFSET(0x12B369C0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_142140140DE19A6A_OFFSET UNITYSDK_OFFSET(0x12B367C0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x12B36630)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x12B363D0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5EBDB8BDCDAABB87_OFFSET UNITYSDK_OFFSET(0x12B36850)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_84DB1A1A4D6A2661_OFFSET UNITYSDK_OFFSET(0x12B36B10)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x12B36190)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12B362E0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_C9158580CC3C5ACF_OFFSET UNITYSDK_OFFSET(0x12B361E0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B36840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonLevelData_TypeDefinitionIndex = 61223;

	class ConfigCommonLevelData : public ::System::Object
	{
	public:
		::System::String* Identifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigCommonLevelData* Method_1_C9158580CC3C5ACF()
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_C9158580CC3C5ACF_OFFSET))(this);
		}

		::System::Int32 Method_1_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_142140140DE19A6A()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_142140140DE19A6A_OFFSET))(this);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Void Method_1_5EBDB8BDCDAABB87(::System::Collections::Generic::Dictionary_2<::Struct_2_A17F88B27FA91D04<::System::String*, ::System::String*>, ::MoleMole::Config::ConfigCommonLevelData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Struct_2_A17F88B27FA91D04<::System::String*, ::System::String*>, ::MoleMole::Config::ConfigCommonLevelData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5EBDB8BDCDAABB87_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigCommonLevelData* Method_1_0F9C98D2F5805479(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_0F9C98D2F5805479_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigCommonLevelData* Method_1_84DB1A1A4D6A2661(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_84DB1A1A4D6A2661_OFFSET))(a1);
		}

		::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
		}
	};
}
