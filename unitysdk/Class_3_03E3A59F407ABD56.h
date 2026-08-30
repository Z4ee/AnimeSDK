#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68C34B5C1C40C2FF.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_03E3A59F407ABD56_METHOD_3_4077B7F0C83FF920_OFFSET UNITYSDK_OFFSET(0x1C7C7C20)
#define CLASS_3_03E3A59F407ABD56_METHOD_3_5A30A2F2D7363E37_OFFSET UNITYSDK_OFFSET(0x1C7C7BE0)
#define CLASS_3_03E3A59F407ABD56__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C7C10)

inline static constexpr unsigned int Class_3_03E3A59F407ABD56_TypeDefinitionIndex = 18039;

class Class_3_03E3A59F407ABD56 : public ::Class_2_68C34B5C1C40C2FF
{
public:
	::Il2CppArray<::Class_2_68C34B5C1C40C2FF*>* AAIAEKDKMMK; // 0x10
	::RPG::GameCore::LogicOperation ICLPIKEGNCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03E3A59F407ABD56__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5A30A2F2D7363E37(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_03E3A59F407ABD56*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_03E3A59F407ABD56*&))((::PBYTE)hIl2Cpp + CLASS_3_03E3A59F407ABD56_METHOD_3_5A30A2F2D7363E37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4077B7F0C83FF920(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_03E3A59F407ABD56* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_03E3A59F407ABD56*))((::PBYTE)hIl2Cpp + CLASS_3_03E3A59F407ABD56_METHOD_3_4077B7F0C83FF920_OFFSET))(a1, a2);
	}
};
