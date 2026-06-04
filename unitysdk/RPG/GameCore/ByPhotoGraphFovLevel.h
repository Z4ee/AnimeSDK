#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_1225AE6336411FC3_OFFSET UNITYSDK_OFFSET(0x19579BC0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_630C77E49574B7DE_OFFSET UNITYSDK_OFFSET(0x19579C40)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_81926D5C6B276F97_OFFSET UNITYSDK_OFFSET(0x19579A10)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_88842F397F900EA9_OFFSET UNITYSDK_OFFSET(0x19579940)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x195799C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphFovLevel_TypeDefinitionIndex = 20435;

	class ByPhotoGraphFovLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFovLevel Level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88842F397F900EA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_88842F397F900EA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81926D5C6B276F97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_81926D5C6B276F97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1225AE6336411FC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_1225AE6336411FC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_630C77E49574B7DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVEL_METHOD_4_630C77E49574B7DE_OFFSET))(a1, a2);
		}
	};
}
