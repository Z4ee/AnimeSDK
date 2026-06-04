#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/FadeInElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_METHOD_4_0B5CCF8F80C04C09_OFFSET UNITYSDK_OFFSET(0x194E3AF0)
#define RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_METHOD_4_A96E63BD3BDEF9F9_OFFSET UNITYSDK_OFFSET(0x194E2F80)
#define RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194E2F70)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ImageElementConfig_TypeDefinitionIndex = 23610;

	class ImageElementConfig : public ::RPG::GameCore::Booklet::FadeInElementConfig
	{
	public:
		::System::String* ImagePath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B5CCF8F80C04C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ImageElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ImageElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_METHOD_4_0B5CCF8F80C04C09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A96E63BD3BDEF9F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ImageElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ImageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_METHOD_4_A96E63BD3BDEF9F9_OFFSET))(a1, a2);
		}
	};
}
