#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_A01784FE9F042E29_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1CA84520)
#define CLASS_3_A01784FE9F042E29_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1CA844C0)
#define CLASS_3_A01784FE9F042E29__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA84510)

inline static constexpr unsigned int Class_3_A01784FE9F042E29_TypeDefinitionIndex = 23111;

class Class_3_A01784FE9F042E29 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FNCNMCEOALF; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x28
	::RPG::GameCore::DynamicFloat* IMKHIDEBGEB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A01784FE9F042E29__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A01784FE9F042E29*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A01784FE9F042E29*&))((::PBYTE)hIl2Cpp + CLASS_3_A01784FE9F042E29_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A01784FE9F042E29* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A01784FE9F042E29*))((::PBYTE)hIl2Cpp + CLASS_3_A01784FE9F042E29_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
