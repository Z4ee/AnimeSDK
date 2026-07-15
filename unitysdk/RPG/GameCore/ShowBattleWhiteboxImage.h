#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_METHOD_3_98EF2789A9D22F20_OFFSET UNITYSDK_OFFSET(0x1BE3B720)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_METHOD_3_B8B945CCA5D2DD05_OFFSET UNITYSDK_OFFSET(0x1BE3B760)
#define RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3B750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleWhiteboxImage_TypeDefinitionIndex = 22462;

	class ShowBattleWhiteboxImage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsClearAll; // 0x18
		::System::Boolean IsRemove; // 0x19
		::System::String* ImgPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98EF2789A9D22F20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleWhiteboxImage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleWhiteboxImage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_METHOD_3_98EF2789A9D22F20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8B945CCA5D2DD05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleWhiteboxImage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleWhiteboxImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEWHITEBOXIMAGE_METHOD_3_B8B945CCA5D2DD05_OFFSET))(a1, a2);
		}
	};
}
