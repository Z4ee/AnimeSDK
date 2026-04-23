#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightShowRightCutInTraitImgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_METHOD_3_191083B57327F901_OFFSET UNITYSDK_OFFSET(0x189D7D90)
#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_METHOD_3_F68FCB8E0A81DCDB_OFFSET UNITYSDK_OFFSET(0x189D7D10)
#define RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN__CTOR_OFFSET UNITYSDK_OFFSET(0x189D7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowRightCutIn_TypeDefinitionIndex = 22195;

	class GridFightShowRightCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UIPrefabPath; // 0x18
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::String* ImagePath; // 0x30
		::RPG::GameCore::TargetEvaluator* AvatarTargetType; // 0x38
		::System::String* TraitSearchKey; // 0x40
		::RPG::GameCore::DynamicFloat* TraitLv; // 0x48
		::System::Boolean TraitShowAvatarImg; // 0x50
		::RPG::GameCore::GridFightShowRightCutInTraitImgType TraitShowImgType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F68FCB8E0A81DCDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowRightCutIn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowRightCutIn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_METHOD_3_F68FCB8E0A81DCDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_191083B57327F901(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowRightCutIn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowRightCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWRIGHTCUTIN_METHOD_3_191083B57327F901_OFFSET))(a1, a2);
		}
	};
}
