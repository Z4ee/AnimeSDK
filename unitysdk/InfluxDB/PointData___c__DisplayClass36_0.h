#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define INFLUXDB_POINTDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF11510)
#define INFLUXDB_POINTDATA___C__DISPLAYCLASS36_0__EQUALS_B__0_OFFSET UNITYSDK_OFFSET(0x1DF11520)
#define INFLUXDB_POINTDATA___C__DISPLAYCLASS36_0__EQUALS_B__1_OFFSET UNITYSDK_OFFSET(0x1DF115E0)

namespace InfluxDB
{
	inline static constexpr unsigned int PointData___c__DisplayClass36_0_TypeDefinitionIndex = 8034;

	class PointData___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::String*>* otherTags; // 0x10
		::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Object*>* otherFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Equals_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA___C__DISPLAYCLASS36_0__EQUALS_B__0_OFFSET))(this, pair);
		}

		::System::Boolean _Equals_b__1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> pair)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA___C__DISPLAYCLASS36_0__EQUALS_B__1_OFFSET))(this, pair);
		}
	};
}
