#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_30F9DA37ED1130AC_OFFSET UNITYSDK_OFFSET(0x19579EF0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_390EBE6DD7028446_OFFSET UNITYSDK_OFFSET(0x1957A0F0)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_6948A5DFBF35D8F4_OFFSET UNITYSDK_OFFSET(0x19579E20)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_CDAE78EF5C9D3F53_OFFSET UNITYSDK_OFFSET(0x1957A170)
#define RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19579EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphFovLevelRange_TypeDefinitionIndex = 20436;

	class ByPhotoGraphFovLevelRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PhotoGraphFovLevel MinLevel; // 0x20
		::RPG::GameCore::PhotoGraphFovLevel MaxLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6948A5DFBF35D8F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_6948A5DFBF35D8F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30F9DA37ED1130AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_30F9DA37ED1130AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_390EBE6DD7028446(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_390EBE6DD7028446_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CDAE78EF5C9D3F53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHFOVLEVELRANGE_METHOD_4_CDAE78EF5C9D3F53_OFFSET))(a1, a2);
		}
	};
}
