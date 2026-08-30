#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_2FF57240EB188F75_OFFSET UNITYSDK_OFFSET(0x1CDBC4C0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_30F9DA37ED1130AC_OFFSET UNITYSDK_OFFSET(0x1CDBC500)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_43E82D25D25D6153_OFFSET UNITYSDK_OFFSET(0x1CDBC700)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_8433860D06B03D9C_OFFSET UNITYSDK_OFFSET(0x1CDBC730)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBC4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphFovLevelRange_TypeDefinitionIndex = 21407;

	class ByPhotoGraphFovLevelRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFovLevel MinLevel; // 0x20
		::RPG::GameCore::PhotoGraphFovLevel MaxLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2FF57240EB188F75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_2FF57240EB188F75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30F9DA37ED1130AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_30F9DA37ED1130AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43E82D25D25D6153(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_43E82D25D25D6153_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8433860D06B03D9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_8433860D06B03D9C_OFFSET))(a1, a2);
		}
	};
}
