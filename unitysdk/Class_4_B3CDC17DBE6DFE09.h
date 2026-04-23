#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_B3CDC17DBE6DFE09_METHOD_4_411F5B05FB2FEB16_OFFSET UNITYSDK_OFFSET(0x183870F0)
#define CLASS_4_B3CDC17DBE6DFE09_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x18387210)
#define CLASS_4_B3CDC17DBE6DFE09__CTOR_OFFSET UNITYSDK_OFFSET(0x18387190)

inline static constexpr unsigned int Class_4_B3CDC17DBE6DFE09_TypeDefinitionIndex = 23104;

class Class_4_B3CDC17DBE6DFE09 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* Field_4_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B3CDC17DBE6DFE09__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_411F5B05FB2FEB16(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B3CDC17DBE6DFE09*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B3CDC17DBE6DFE09*&))((::PBYTE)hIl2Cpp + CLASS_4_B3CDC17DBE6DFE09_METHOD_4_411F5B05FB2FEB16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B3CDC17DBE6DFE09* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B3CDC17DBE6DFE09*))((::PBYTE)hIl2Cpp + CLASS_4_B3CDC17DBE6DFE09_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}
};
