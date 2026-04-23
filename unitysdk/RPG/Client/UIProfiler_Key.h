#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_UIPROFILER_KEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDFA20)
#define RPG_CLIENT_UIPROFILER_KEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDF980)
#define RPG_CLIENT_UIPROFILER_KEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDFA30)
#define RPG_CLIENT_UIPROFILER_KEY__CTOR_OFFSET UNITYSDK_OFFSET(0x31380)
#define RPG_CLIENT_UIPROFILER_KEY___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDFAF0)
#define RPG_CLIENT_UIPROFILER_KEY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDFB60)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_Key_TypeDefinitionIndex = 67384;

	struct alignas(8) UIProfiler_Key
	{
		::RPG::Client::UIProfiler_SampleType Type; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor(::RPG::Client::UIProfiler_SampleType type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY__CTOR_OFFSET))(this, type, name);
		}

		::System::Boolean Equals(::RPG::Client::UIProfiler_Key other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIProfiler_Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_KEY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
