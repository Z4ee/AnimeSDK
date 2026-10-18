#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_30A54EB5ABE52F0F_METHOD_3_9AEA5EB872A8ECD8_OFFSET UNITYSDK_OFFSET(0x1DC26CB0)
#define CLASS_3_30A54EB5ABE52F0F_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x1DC26C10)
#define CLASS_3_30A54EB5ABE52F0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC26C70)

inline static constexpr unsigned int Class_3_30A54EB5ABE52F0F_TypeDefinitionIndex = 23197;

class Class_3_30A54EB5ABE52F0F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TurnState>* DIFLOKJFCEO; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::Boolean GEOPPFCKACN; // 0x28
	::System::Boolean ICADPILMFPK; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30A54EB5ABE52F0F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_30A54EB5ABE52F0F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_30A54EB5ABE52F0F*&))((::PBYTE)hIl2Cpp + CLASS_3_30A54EB5ABE52F0F_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9AEA5EB872A8ECD8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_30A54EB5ABE52F0F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_30A54EB5ABE52F0F*))((::PBYTE)hIl2Cpp + CLASS_3_30A54EB5ABE52F0F_METHOD_3_9AEA5EB872A8ECD8_OFFSET))(a1, a2);
	}
};
