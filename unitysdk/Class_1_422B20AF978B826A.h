#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9876AE41D0DC17C7;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define CLASS_1_422B20AF978B826A_METHOD_1_EC1D01F08BDDBD6F_OFFSET UNITYSDK_OFFSET(0x12293CE0)

inline static constexpr unsigned int Class_1_422B20AF978B826A_TypeDefinitionIndex = 75321;

class Class_1_422B20AF978B826A : public ::System::Object
{
public:
	static ::Class_1_9876AE41D0DC17C7* Method_1_EC1D01F08BDDBD6F(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::String* a2)
	{
		return ((::Class_1_9876AE41D0DC17C7*(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_422B20AF978B826A_METHOD_1_EC1D01F08BDDBD6F_OFFSET))(a1, a2);
	}
};
