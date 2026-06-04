#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_82E3CE7CF2179E61_OFFSET UNITYSDK_OFFSET(0x1967AC20)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_B5B1C1E395F4E30F_OFFSET UNITYSDK_OFFSET(0x1967AE80)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_D09A3A6380FC3D39_OFFSET UNITYSDK_OFFSET(0x1967AB50)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_FD05D5B454F327BA_OFFSET UNITYSDK_OFFSET(0x1967AE00)
#define RPG_GAMECORE_CONVINCEBYCOMPAREHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1967ABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceByCompareHp_TypeDefinitionIndex = 20615;

	class ConvinceByCompareHp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D09A3A6380FC3D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_D09A3A6380FC3D39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82E3CE7CF2179E61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_82E3CE7CF2179E61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD05D5B454F327BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_FD05D5B454F327BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5B1C1E395F4E30F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEBYCOMPAREHP_METHOD_4_B5B1C1E395F4E30F_OFFSET))(a1, a2);
		}
	};
}
