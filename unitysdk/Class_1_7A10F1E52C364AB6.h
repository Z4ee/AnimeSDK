#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockHint; }

#define CLASS_1_7A10F1E52C364AB6_METHOD_1_83256FEA04416D4A_OFFSET UNITYSDK_OFFSET(0x12CAA790)

inline static constexpr unsigned int Class_1_7A10F1E52C364AB6_TypeDefinitionIndex = 68017;

class Class_1_7A10F1E52C364AB6 : public ::System::Object
{
public:
	static ::System::Void Method_1_83256FEA04416D4A(::RPG::Client::FuncUnlockHint* a1)
	{
		return ((::System::Void(*)(::RPG::Client::FuncUnlockHint*))((::PBYTE)hIl2Cpp + CLASS_1_7A10F1E52C364AB6_METHOD_1_83256FEA04416D4A_OFFSET))(a1);
	}
};
