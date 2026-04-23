#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_A68624B6A8A563B3_METHOD_4_411F5B05FB2FEB16_OFFSET UNITYSDK_OFFSET(0x187A9760)
#define CLASS_4_A68624B6A8A563B3_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x187A9880)
#define CLASS_4_A68624B6A8A563B3__CTOR_OFFSET UNITYSDK_OFFSET(0x187A9800)

inline static constexpr unsigned int Class_4_A68624B6A8A563B3_TypeDefinitionIndex = 23102;

class Class_4_A68624B6A8A563B3 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::ILBattleCharacterLocation>* Field_4_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A68624B6A8A563B3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_411F5B05FB2FEB16(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A68624B6A8A563B3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A68624B6A8A563B3*&))((::PBYTE)hIl2Cpp + CLASS_4_A68624B6A8A563B3_METHOD_4_411F5B05FB2FEB16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_A68624B6A8A563B3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_A68624B6A8A563B3*))((::PBYTE)hIl2Cpp + CLASS_4_A68624B6A8A563B3_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}
};
