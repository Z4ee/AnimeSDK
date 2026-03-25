#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E656914D5137BD7B.h"
#include "unitysdk/RPG/GameCore/ChessAnimStateType.h"

class Class_1_B229BC73065D28E3_1;

#define CLASS_2_63480B6A4147BE49_1_METHOD_2_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x10B89360)
#define CLASS_2_63480B6A4147BE49_1_METHOD_2_A363F5D53EC4059B_OFFSET UNITYSDK_OFFSET(0x10B89310)
#define CLASS_2_63480B6A4147BE49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B893E0)

inline static constexpr unsigned int Class_2_63480B6A4147BE49_1_TypeDefinitionIndex = 45221;

class Class_2_63480B6A4147BE49_1 : public ::Class_1_E656914D5137BD7B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63480B6A4147BE49_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ChessAnimStateType Method_2_A363F5D53EC4059B()
	{
		return ((::RPG::GameCore::ChessAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63480B6A4147BE49_1_METHOD_2_A363F5D53EC4059B_OFFSET))(this);
	}

	::System::Void Method_2_368884BBCA3D2697(::Class_1_B229BC73065D28E3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B229BC73065D28E3_1*))((::PBYTE)hIl2Cpp + CLASS_2_63480B6A4147BE49_1_METHOD_2_368884BBCA3D2697_OFFSET))(this, a1);
	}
};
