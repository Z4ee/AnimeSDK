#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_UIPROFILER_KEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x159CE0)
#define RPG_CLIENT_UIPROFILER_KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x159C40)
#define RPG_CLIENT_UIPROFILER_KEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x159CF0)
#define RPG_CLIENT_UIPROFILER_KEY__CTOR_OFFSET UNITYSDK_OFFSET(0x31FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_Key_TypeDefinitionIndex = 73083;

	struct alignas(8) UIProfiler_Key
	{
		::RPG::Client::UIProfiler_SampleType Type; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor(::RPG::Client::UIProfiler_SampleType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::RPG::Client::UIProfiler_Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIProfiler_Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
