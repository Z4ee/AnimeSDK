#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_49F6B22A9C0E19E7_OFFSET UNITYSDK_OFFSET(0x17015A60)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_D6D91B26BD431DA9_OFFSET UNITYSDK_OFFSET(0x17015990)
#define RPG_GAMECORE_BYCOMPARESPCHANGETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17015A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSPChangeTag_TypeDefinitionIndex = 21803;

	class ByCompareSPChangeTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6D91B26BD431DA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSPChangeTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSPChangeTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_D6D91B26BD431DA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49F6B22A9C0E19E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPCHANGETAG_METHOD_4_49F6B22A9C0E19E7_OFFSET))(a1, a2);
		}
	};
}
