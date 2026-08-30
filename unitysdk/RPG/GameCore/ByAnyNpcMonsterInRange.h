#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_485C22311D5E4496_OFFSET UNITYSDK_OFFSET(0x1C2F3B90)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_90A929A474B69134_OFFSET UNITYSDK_OFFSET(0x1C2F3970)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_981B7FAF26E5F119_OFFSET UNITYSDK_OFFSET(0x1C2F3930)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_C2C82EC590976789_OFFSET UNITYSDK_OFFSET(0x1C2F3BC0)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F3960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnyNpcMonsterInRange_TypeDefinitionIndex = 20344;

	class ByAnyNpcMonsterInRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ConsiderObstacle; // 0x20
		::System::Single Range; // 0x24
		::System::Single AngleLimit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_981B7FAF26E5F119(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnyNpcMonsterInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_981B7FAF26E5F119_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90A929A474B69134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_90A929A474B69134_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_485C22311D5E4496(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_485C22311D5E4496_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2C82EC590976789(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_C2C82EC590976789_OFFSET))(a1, a2);
		}
	};
}
