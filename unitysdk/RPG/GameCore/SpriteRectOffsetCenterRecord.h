#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpritePresetRecord.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_METHOD_3_50026B0254414332_OFFSET UNITYSDK_OFFSET(0x18E854F0)
#define RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_METHOD_3_75D900A22FD2B78E_OFFSET UNITYSDK_OFFSET(0x18E857D0)
#define RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x18E854E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpriteRectOffsetCenterRecord_TypeDefinitionIndex = 23448;

	class SpriteRectOffsetCenterRecord : public ::RPG::GameCore::SpritePresetRecord
	{
	public:
		::System::Single AnchoredPosX; // 0x10
		::System::Single AnchoredPosY; // 0x14
		::System::Single SizeDeltaX; // 0x18
		::System::Single SizeDeltaY; // 0x1C
		::System::Single RotationZ; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75D900A22FD2B78E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpriteRectOffsetCenterRecord*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpriteRectOffsetCenterRecord*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_METHOD_3_75D900A22FD2B78E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50026B0254414332(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpriteRectOffsetCenterRecord* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpriteRectOffsetCenterRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITERECTOFFSETCENTERRECORD_METHOD_3_50026B0254414332_OFFSET))(a1, a2);
		}
	};
}
