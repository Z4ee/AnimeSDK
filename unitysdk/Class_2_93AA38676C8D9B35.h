#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E656914D5137BD7B.h"
#include "unitysdk/RPG/GameCore/ChessAnimStateType.h"

class Class_1_B229BC73065D28E3_1;

#define CLASS_2_93AA38676C8D9B35_METHOD_2_713FC573919AD9E9_OFFSET UNITYSDK_OFFSET(0xCB20960)
#define CLASS_2_93AA38676C8D9B35_METHOD_2_A363F5D53EC4059B_OFFSET UNITYSDK_OFFSET(0xCB20620)
#define CLASS_2_93AA38676C8D9B35_METHOD_2_B277C2E448894095_OFFSET UNITYSDK_OFFSET(0xCB20840)
#define CLASS_2_93AA38676C8D9B35_METHOD_2_F6E5115FB17B3B4D_OFFSET UNITYSDK_OFFSET(0xCB20670)
#define CLASS_2_93AA38676C8D9B35__CTOR_OFFSET UNITYSDK_OFFSET(0xCB20950)

inline static constexpr unsigned int Class_2_93AA38676C8D9B35_TypeDefinitionIndex = 45222;

class Class_2_93AA38676C8D9B35 : public ::Class_1_E656914D5137BD7B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93AA38676C8D9B35__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ChessAnimStateType Method_2_A363F5D53EC4059B()
	{
		return ((::RPG::GameCore::ChessAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93AA38676C8D9B35_METHOD_2_A363F5D53EC4059B_OFFSET))(this);
	}

	::System::Void Method_2_F6E5115FB17B3B4D(::Class_1_B229BC73065D28E3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B229BC73065D28E3_1*))((::PBYTE)hIl2Cpp + CLASS_2_93AA38676C8D9B35_METHOD_2_F6E5115FB17B3B4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B277C2E448894095(::RPG::GameCore::ChessAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAnimStateType))((::PBYTE)hIl2Cpp + CLASS_2_93AA38676C8D9B35_METHOD_2_B277C2E448894095_OFFSET))(this, a1);
	}

	::System::Void Method_2_713FC573919AD9E9(::RPG::GameCore::ChessAnimStateType P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAnimStateType))((::PBYTE)hIl2Cpp + CLASS_2_93AA38676C8D9B35_METHOD_2_713FC573919AD9E9_OFFSET))(this, P0);
	}
};
