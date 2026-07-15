#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_BA267B1408695E90_METHOD_4_18C3FB2E98626E1C_OFFSET UNITYSDK_OFFSET(0x1B592DD0)
#define CLASS_4_BA267B1408695E90_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1B592AF0)
#define CLASS_4_BA267B1408695E90_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B592E20)
#define CLASS_4_BA267B1408695E90_METHOD_4_6D3BD31FF07A4A8E_OFFSET UNITYSDK_OFFSET(0x1B592A80)
#define CLASS_4_BA267B1408695E90__CTOR_OFFSET UNITYSDK_OFFSET(0x1B592AD0)

inline static constexpr unsigned int Class_4_BA267B1408695E90_TypeDefinitionIndex = 23380;

class Class_4_BA267B1408695E90 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::System::Int32 Field_4_1; // 0x28
	::RPG::GameCore::EntityTypeMask Field_4_2; // 0x30
	::RPG::GameCore::TeamTypeMask Field_4_3; // 0x38
	::RPG::GameCore::RtStackSkillTargetRedirectPhase Field_4_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BA267B1408695E90__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6D3BD31FF07A4A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BA267B1408695E90*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BA267B1408695E90*&))((::PBYTE)hIl2Cpp + CLASS_4_BA267B1408695E90_METHOD_4_6D3BD31FF07A4A8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BA267B1408695E90* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BA267B1408695E90*))((::PBYTE)hIl2Cpp + CLASS_4_BA267B1408695E90_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_18C3FB2E98626E1C(::SimpleJSON::JSONNode* a1, ::Class_4_BA267B1408695E90*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BA267B1408695E90*&))((::PBYTE)hIl2Cpp + CLASS_4_BA267B1408695E90_METHOD_4_18C3FB2E98626E1C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_BA267B1408695E90* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_BA267B1408695E90*))((::PBYTE)hIl2Cpp + CLASS_4_BA267B1408695E90_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
