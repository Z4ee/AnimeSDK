#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class Match3GridTagApplyConfig; }
namespace RPG::GameCore::Match3 { class Match3PieceTagApplyConfig; }

#define RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG_METHOD_2_AF2884B2D33C707B_OFFSET UNITYSDK_OFFSET(0x173A99B0)
#define RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173AAB50)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TemplateApplyConfig_TypeDefinitionIndex = 22775;

	class Match3TemplateApplyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3PieceTagApplyConfig*>* PieceTagApplyConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::Match3GridTagApplyConfig*>* GridTagApplyConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AF2884B2D33C707B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TemplateApplyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TemplateApplyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG_METHOD_2_AF2884B2D33C707B_OFFSET))(a1, a2);
		}
	};
}
