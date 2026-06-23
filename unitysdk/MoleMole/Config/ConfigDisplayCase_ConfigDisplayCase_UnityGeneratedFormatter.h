#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayBoundsCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayCaseCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayManualCfg.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigDisplayCase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0646B0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A0646C0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A064AD0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A064D80)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A064D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter_TypeDefinitionIndex = 56742;

	class ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigDisplayCase*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49A98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49AA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49AA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_ConfigDisplayCase_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDisplayCase*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDisplayCase*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigDisplayCase*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDisplayCase*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CONFIGDISPLAYCASE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
