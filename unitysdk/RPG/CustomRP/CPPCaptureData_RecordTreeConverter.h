#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x16A60DA0)
#define RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x16A60DE0)
#define RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x16A60E50)
#define RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A611B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPCaptureData_RecordTreeConverter_TypeDefinitionIndex = 29242;

	class CPPCaptureData_RecordTreeConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CPPCAPTUREDATA_RECORDTREECONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}
	};
}
