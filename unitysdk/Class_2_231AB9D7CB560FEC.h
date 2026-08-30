#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtSummonCharacterExtraDataBase; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_2_231AB9D7CB560FEC_METHOD_2_4D6789FBC58A056F_OFFSET UNITYSDK_OFFSET(0x1C727130)
#define CLASS_2_231AB9D7CB560FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C727470)

inline static constexpr unsigned int Class_2_231AB9D7CB560FEC_TypeDefinitionIndex = 23847;

class Class_2_231AB9D7CB560FEC : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* EPFPKBLIIOI; // 0x10
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* DCLGGMAEMAO; // 0x18
	::RPG::GameCore::DynamicFloat* JIDLKIHJLFL; // 0x20
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x28
	::RPG::GameCore::TargetEvaluator* PPKKOLKCKOI; // 0x30
	::RPG::GameCore::RtSummonCharacterExtraDataBase* PDLNGNHJJEI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_231AB9D7CB560FEC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_4D6789FBC58A056F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_231AB9D7CB560FEC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_231AB9D7CB560FEC*&))((::PBYTE)hIl2Cpp + CLASS_2_231AB9D7CB560FEC_METHOD_2_4D6789FBC58A056F_OFFSET))(a1, a2);
	}
};
