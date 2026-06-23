#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18F45380)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18F45390)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18F45570)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F45710)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F456D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDynamicOverrideWeather_ConfigDynamicOverrideWeather_UnityGeneratedFormatter_TypeDefinitionIndex = 76942;

	class ConfigDynamicOverrideWeather_ConfigDynamicOverrideWeather_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigDynamicOverrideWeather*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicOverrideWeather_ConfigDynamicOverrideWeather_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicOverrideWeather_ConfigDynamicOverrideWeather_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30478);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigDynamicOverrideWeather*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigDynamicOverrideWeather*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CONFIGDYNAMICOVERRIDEWEATHER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
