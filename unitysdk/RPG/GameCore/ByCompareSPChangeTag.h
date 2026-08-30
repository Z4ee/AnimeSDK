#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_1C44BE6D5BBC8506_OFFSET UNITYSDK_OFFSET(0x1BBB6F80)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_49F6B22A9C0E19E7_OFFSET UNITYSDK_OFFSET(0x1BBB6FC0)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_9032E73AB15E3AFD_OFFSET UNITYSDK_OFFSET(0x1BBB7150)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_9B74882A82E692CA_OFFSET UNITYSDK_OFFSET(0x1BBB7180)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB6FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSPChangeTag_TypeDefinitionIndex = 23299;

	class ByCompareSPChangeTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C44BE6D5BBC8506(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSPChangeTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSPChangeTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_1C44BE6D5BBC8506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49F6B22A9C0E19E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_49F6B22A9C0E19E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9032E73AB15E3AFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_9032E73AB15E3AFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B74882A82E692CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_9B74882A82E692CA_OFFSET))(a1, a2);
		}
	};
}
