#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_0CF89C403BDFC8C9_OFFSET UNITYSDK_OFFSET(0x1CF56780)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_93B5D70F6E495666_OFFSET UNITYSDK_OFFSET(0x1CF56970)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_A922F8D4C3207214_OFFSET UNITYSDK_OFFSET(0x1CF56740)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_D8F0F9B2629D6DC9_OFFSET UNITYSDK_OFFSET(0x1CF56940)
#define RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF56770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPhotoGraphConditionSuccess_TypeDefinitionIndex = 21388;

	class ByPhotoGraphConditionSuccess : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* PhotoGraphName; // 0x20
		::System::String* CustomEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A922F8D4C3207214(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_A922F8D4C3207214_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CF89C403BDFC8C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_0CF89C403BDFC8C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D8F0F9B2629D6DC9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_D8F0F9B2629D6DC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_93B5D70F6E495666(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPHOTOGRAPHCONDITIONSUCCESS_METHOD_4_93B5D70F6E495666_OFFSET))(a1, a2);
		}
	};
}
