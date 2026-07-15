#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA_METHOD_2_55870CBE328911F8_OFFSET UNITYSDK_OFFSET(0x1BCC4090)
#define RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC4210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePresetCategoryData_TypeDefinitionIndex = 18176;

	class LittleGamePresetCategoryData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CategoryName; // 0x10
		::System::String* Comment; // 0x18
		::RPG::GameCore::LittleGameEntityType EntityType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_55870CBE328911F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGamePresetCategoryData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGamePresetCategoryData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPRESETCATEGORYDATA_METHOD_2_55870CBE328911F8_OFFSET))(a1, a2);
		}
	};
}
