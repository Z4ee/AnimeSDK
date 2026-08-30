#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_METHOD_3_2CF96140937B1BA3_OFFSET UNITYSDK_OFFSET(0x1D48E890)
#define RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_METHOD_3_AD31CC0D25DB52C0_OFFSET UNITYSDK_OFFSET(0x1D48E850)
#define RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48E880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournSetExhibitionBoothImage_TypeDefinitionIndex = 21869;

	class RogueTournSetExhibitionBoothImage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD31CC0D25DB52C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_METHOD_3_AD31CC0D25DB52C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CF96140937B1BA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournSetExhibitionBoothImage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETEXHIBITIONBOOTHIMAGE_METHOD_3_2CF96140937B1BA3_OFFSET))(a1, a2);
		}
	};
}
