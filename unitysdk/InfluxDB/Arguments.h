#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INFLUXDB_ARGUMENTS_CHECKDURATION_OFFSET UNITYSDK_OFFSET(0x1DCC41E0)
#define INFLUXDB_ARGUMENTS_CHECKNONEMPTYSTRING_OFFSET UNITYSDK_OFFSET(0x1DCC4130)
#define INFLUXDB_ARGUMENTS_CHECKNOTNEGATIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1DCC4390)
#define INFLUXDB_ARGUMENTS_CHECKNOTNULL_OFFSET UNITYSDK_OFFSET(0x1DCC4440)
#define INFLUXDB_ARGUMENTS_CHECKPOSITIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1DCC42E0)

namespace InfluxDB
{
	inline static constexpr unsigned int Arguments_TypeDefinitionIndex = 8202;

	class Arguments : public ::System::Object
	{
	public:
		// static const ::System::String* DurationPattern; // 0x0

		static ::System::Void CheckNonEmptyString(::System::String* value, ::System::String* name)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_ARGUMENTS_CHECKNONEMPTYSTRING_OFFSET))(value, name);
		}

		static ::System::Void CheckDuration(::System::String* value, ::System::String* name)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_ARGUMENTS_CHECKDURATION_OFFSET))(value, name);
		}

		static ::System::Void CheckPositiveNumber(::System::Int32 number, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_ARGUMENTS_CHECKPOSITIVENUMBER_OFFSET))(number, name);
		}

		static ::System::Void CheckNotNegativeNumber(::System::Int32 number, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_ARGUMENTS_CHECKNOTNEGATIVENUMBER_OFFSET))(number, name);
		}

		static ::System::Void CheckNotNull(::System::Object* obj, ::System::String* name)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_ARGUMENTS_CHECKNOTNULL_OFFSET))(obj, name);
		}
	};
}
