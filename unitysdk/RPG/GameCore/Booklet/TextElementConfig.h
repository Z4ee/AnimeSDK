#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_METHOD_3_3A25F389BEC46382_OFFSET UNITYSDK_OFFSET(0x16FEC9D0)
#define RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_METHOD_3_F4388EAD3E16B272_OFFSET UNITYSDK_OFFSET(0x16FEE780)
#define RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEC9C0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int TextElementConfig_TypeDefinitionIndex = 22803;

	class TextElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4388EAD3E16B272(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::TextElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::TextElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_METHOD_3_F4388EAD3E16B272_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A25F389BEC46382(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::TextElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::TextElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_METHOD_3_3A25F389BEC46382_OFFSET))(a1, a2);
		}
	};
}
