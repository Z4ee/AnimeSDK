#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/MergeArrayHandling.h"
#include "unitysdk/Newtonsoft/Json/Linq/MergeNullValueHandling.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGEARRAYHANDLING_OFFSET UNITYSDK_OFFSET(0x1DF06780)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGENULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1DF06800)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGEARRAYHANDLING_OFFSET UNITYSDK_OFFSET(0x1DF06790)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGENULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x1DF06810)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF06880)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonMergeSettings_TypeDefinitionIndex = 7183;

	class JsonMergeSettings : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Linq::MergeArrayHandling _mergeArrayHandling; // 0x10
		::Newtonsoft::Json::Linq::MergeNullValueHandling _mergeNullValueHandling; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::MergeArrayHandling get_MergeArrayHandling()
		{
			return ((::Newtonsoft::Json::Linq::MergeArrayHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGEARRAYHANDLING_OFFSET))(this);
		}

		::System::Void set_MergeArrayHandling(::Newtonsoft::Json::Linq::MergeArrayHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::MergeArrayHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGEARRAYHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Linq::MergeNullValueHandling get_MergeNullValueHandling()
		{
			return ((::Newtonsoft::Json::Linq::MergeNullValueHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGENULLVALUEHANDLING_OFFSET))(this);
		}

		::System::Void set_MergeNullValueHandling(::Newtonsoft::Json::Linq::MergeNullValueHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::MergeNullValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGENULLVALUEHANDLING_OFFSET))(this, value);
		}
	};
}
