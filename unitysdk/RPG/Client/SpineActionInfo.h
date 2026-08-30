#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SPINEACTIONINFO_METHOD_1_241E980AA407A7FB_OFFSET UNITYSDK_OFFSET(0xE0C09D0)
#define RPG_CLIENT_SPINEACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C0AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpineActionInfo_TypeDefinitionIndex = 68985;

	class SpineActionInfo : public ::System::Object
	{
	public:
		::System::String* ActionName; // 0x10
		::System::String* RequiredSkinName; // 0x18
		::System::String* OverrideSkinName; // 0x20
		::System::Int32 TrackIndex; // 0x28
		::System::Boolean IsLoop; // 0x2C
		::System::Boolean IsBasicAction; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPINEACTIONINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SpineActionInfo* Method_1_241E980AA407A7FB(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::RPG::Client::SpineActionInfo*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPINEACTIONINFO_METHOD_1_241E980AA407A7FB_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
