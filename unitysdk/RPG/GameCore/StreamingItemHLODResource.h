#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STREAMINGITEMHLODRESOURCE_METHOD_2_F4DF690BF5E1EDEC_OFFSET UNITYSDK_OFFSET(0x17782470)
#define RPG_GAMECORE_STREAMINGITEMHLODRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17782540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingItemHLODResource_TypeDefinitionIndex = 17520;

	class StreamingItemHLODResource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DefaultHLODPaths; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGITEMHLODRESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F4DF690BF5E1EDEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingItemHLODResource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingItemHLODResource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGITEMHLODRESOURCE_METHOD_2_F4DF690BF5E1EDEC_OFFSET))(a1, a2);
		}
	};
}
