#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_1F0CF91729286987_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x16F2FFC0)
#define CLASS_3_1F0CF91729286987_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x16F300C0)
#define CLASS_3_1F0CF91729286987__CTOR_OFFSET UNITYSDK_OFFSET(0x16F30050)

inline static constexpr unsigned int Class_3_1F0CF91729286987_TypeDefinitionIndex = 23919;

class Class_3_1F0CF91729286987 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x18
	::RPG::GameCore::DynamicFloat* LNNLLMKBAGL; // 0x20
	::System::String* IFNAGLOMHBK; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* MAONBNHOPBJ; // 0x30
	::RPG::GameCore::PredicateConfig* IANNCHKLMOD; // 0x38
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x40
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* LGANOFMNOCG; // 0x48
	::RPG::GameCore::TargetEvaluator* NJLICGGKCAB; // 0x50
	::System::Boolean NANPIEIOFLM; // 0x58
	::RPG::GameCore::EnumStatusTypeMask JHGJBDEIJNC; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F0CF91729286987__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F0CF91729286987*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F0CF91729286987*&))((::PBYTE)hIl2Cpp + CLASS_3_1F0CF91729286987_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F0CF91729286987* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F0CF91729286987*))((::PBYTE)hIl2Cpp + CLASS_3_1F0CF91729286987_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};
