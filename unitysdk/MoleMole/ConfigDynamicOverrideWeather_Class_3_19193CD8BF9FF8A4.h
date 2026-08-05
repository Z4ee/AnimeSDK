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

#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FF7EC0)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FF7ED0)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4_WRITE_OFFSET UNITYSDK_OFFSET(0x19FF8060)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF81C0)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF8180)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDynamicOverrideWeather_Class_3_19193CD8BF9FF8A4_TypeDefinitionIndex = 50649;

	class ConfigDynamicOverrideWeather_Class_3_19193CD8BF9FF8A4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigDynamicOverrideWeather*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherV2Entry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicOverrideWeather_Class_3_19193CD8BF9FF8A4_TypeDefinitionIndex)->GetStaticField(0x44BF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::DynamicOverrideWeatherEntry>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicOverrideWeather_Class_3_19193CD8BF9FF8A4_TypeDefinitionIndex)->GetStaticField(0x44BF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigDynamicOverrideWeather*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigDynamicOverrideWeather*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_CLASS_3_19193CD8BF9FF8A4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
