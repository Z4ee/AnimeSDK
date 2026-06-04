#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_7CD3BF9E8802CFA3_OFFSET UNITYSDK_OFFSET(0x1950C870)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_9DEC9B4EC62EF529_OFFSET UNITYSDK_OFFSET(0x1950CAB0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_E0F4D6F85200C20B_OFFSET UNITYSDK_OFFSET(0x1950C7A0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_EA1E9608873B75D8_OFFSET UNITYSDK_OFFSET(0x1950CA30)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1950C820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentTeammemberCount_TypeDefinitionIndex = 20461;

	class ByCompareCurrentTeammemberCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 TargetCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0F4D6F85200C20B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_E0F4D6F85200C20B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7CD3BF9E8802CFA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_7CD3BF9E8802CFA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA1E9608873B75D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_EA1E9608873B75D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DEC9B4EC62EF529(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_METHOD_4_9DEC9B4EC62EF529_OFFSET))(a1, a2);
		}
	};
}
