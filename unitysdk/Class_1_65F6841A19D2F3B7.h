#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }

#define CLASS_1_65F6841A19D2F3B7_METHOD_1_0FA32075F511D6B2_OFFSET UNITYSDK_OFFSET(0x17112510)
#define CLASS_1_65F6841A19D2F3B7_METHOD_1_667440FE25D6CD87_OFFSET UNITYSDK_OFFSET(0x17112620)
#define CLASS_1_65F6841A19D2F3B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17112500)

inline static constexpr unsigned int Class_1_65F6841A19D2F3B7_TypeDefinitionIndex = 67250;

class Class_1_65F6841A19D2F3B7 : public ::System::Object
{
public:
	::RPG::Client::RogueFormulaData* FPDGGPGNLCI; // 0x10
	::Struct_2_FD0368737CBF6F9B_1 LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_1))((::PBYTE)hIl2Cpp + CLASS_1_65F6841A19D2F3B7__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_0FA32075F511D6B2()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F6841A19D2F3B7_METHOD_1_0FA32075F511D6B2_OFFSET))(this);
	}

	::RPG::Client::RogueFormulaData* Method_1_667440FE25D6CD87()
	{
		return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F6841A19D2F3B7_METHOD_1_667440FE25D6CD87_OFFSET))(this);
	}
};
