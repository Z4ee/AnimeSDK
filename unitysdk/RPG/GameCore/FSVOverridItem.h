#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FSVOVERRIDITEM_METHOD_2_C24ADD1F0F0D94E3_OFFSET UNITYSDK_OFFSET(0x171BC1D0)
#define RPG_GAMECORE_FSVOVERRIDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x171BC320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FSVOverridItem_TypeDefinitionIndex = 17456;

	class FSVOverridItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Key; // 0x10
		::System::Int32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVOVERRIDITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C24ADD1F0F0D94E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FSVOverridItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FSVOverridItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVOVERRIDITEM_METHOD_2_C24ADD1F0F0D94E3_OFFSET))(a1, a2);
		}
	};
}
