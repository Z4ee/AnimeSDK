#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingDescConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_0F724F8EDC601A3C_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1D671100)
#define CLASS_1_0F724F8EDC601A3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D671200)

inline static constexpr unsigned int Class_1_0F724F8EDC601A3C_TypeDefinitionIndex = 13873;

class Class_1_0F724F8EDC601A3C : public ::System::Object
{
public:
	::System::UInt32 NNACKOBKFGE; // 0x10
	::RPG::GameCore::LoadingDescConditionType GMPGDEINODK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F724F8EDC601A3C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0F724F8EDC601A3C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0F724F8EDC601A3C*&))((::PBYTE)hIl2Cpp + CLASS_1_0F724F8EDC601A3C_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
