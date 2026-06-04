#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtCusomtEventConfig; }

#define CLASS_3_C83D8EDE8C2D61C1_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x19B6A060)
#define CLASS_3_C83D8EDE8C2D61C1_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x19B6A0E0)
#define CLASS_3_C83D8EDE8C2D61C1__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6A0B0)

inline static constexpr unsigned int Class_3_C83D8EDE8C2D61C1_TypeDefinitionIndex = 22874;

class Class_3_C83D8EDE8C2D61C1 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::RtCusomtEventConfig*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D8EDE8C2D61C1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C83D8EDE8C2D61C1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C83D8EDE8C2D61C1*&))((::PBYTE)hIl2Cpp + CLASS_3_C83D8EDE8C2D61C1_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C83D8EDE8C2D61C1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C83D8EDE8C2D61C1*))((::PBYTE)hIl2Cpp + CLASS_3_C83D8EDE8C2D61C1_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
