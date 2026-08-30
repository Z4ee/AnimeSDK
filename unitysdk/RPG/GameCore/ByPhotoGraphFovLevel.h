#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_1224A3398ACEE87D_OFFSET UNITYSDK_OFFSET(0x1CDBC0B0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_81926D5C6B276F97_OFFSET UNITYSDK_OFFSET(0x1CDBBED0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_8E48E8E35B8D55B6_OFFSET UNITYSDK_OFFSET(0x1CDBBE90)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_C647797784E3EA9A_OFFSET UNITYSDK_OFFSET(0x1CDBC080)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBBEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphFovLevel_TypeDefinitionIndex = 21406;

	class ByPhotoGraphFovLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFovLevel Level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E48E8E35B8D55B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_8E48E8E35B8D55B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81926D5C6B276F97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_81926D5C6B276F97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C647797784E3EA9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_C647797784E3EA9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1224A3398ACEE87D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_1224A3398ACEE87D_OFFSET))(a1, a2);
		}
	};
}
