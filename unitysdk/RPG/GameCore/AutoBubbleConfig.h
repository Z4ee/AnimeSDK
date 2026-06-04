#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AUTOBUBBLECONFIG_METHOD_2_E611B61D7202E97D_OFFSET UNITYSDK_OFFSET(0x1948CE50)
#define RPG_GAMECORE_AUTOBUBBLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1948D040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoBubbleConfig_TypeDefinitionIndex = 16087;

	class AutoBubbleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EntityUniqueName; // 0x10
		::System::Single Duration; // 0x18
		::System::Single Offset; // 0x1C
		::System::UInt32 HitTextId; // 0x20
		::System::UInt32 MissTextId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOBUBBLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E611B61D7202E97D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoBubbleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoBubbleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOBUBBLECONFIG_METHOD_2_E611B61D7202E97D_OFFSET))(a1, a2);
		}
	};
}
