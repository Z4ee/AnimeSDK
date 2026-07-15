#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_4A96BC8B713D5398_OFFSET UNITYSDK_OFFSET(0x1BC33240)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_82E3CE7CF2179E61_OFFSET UNITYSDK_OFFSET(0x1BC33280)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_E99A890FF7206268_OFFSET UNITYSDK_OFFSET(0x1BC33490)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_F8E37FB5D33FF6EF_OFFSET UNITYSDK_OFFSET(0x1BC33460)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC33270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceByCompareHp_TypeDefinitionIndex = 21030;

	class ConvinceByCompareHp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A96BC8B713D5398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_4A96BC8B713D5398_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82E3CE7CF2179E61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_82E3CE7CF2179E61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8E37FB5D33FF6EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_F8E37FB5D33FF6EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E99A890FF7206268(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_E99A890FF7206268_OFFSET))(a1, a2);
		}
	};
}
