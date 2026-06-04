#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_957;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A392F01C781E3108_METHOD_1_86B51A943DBF232B_OFFSET UNITYSDK_OFFSET(0x139381D0)
#define CLASS_1_A392F01C781E3108_METHOD_1_BC9DACFD234216F1_OFFSET UNITYSDK_OFFSET(0x13938310)
#define CLASS_1_A392F01C781E3108_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x13938160)
#define CLASS_1_A392F01C781E3108__CTOR_OFFSET UNITYSDK_OFFSET(0x13938730)

inline static constexpr unsigned int Class_1_A392F01C781E3108_TypeDefinitionIndex = 65226;

class Class_1_A392F01C781E3108 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_957*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_957*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_86B51A943DBF232B(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_957* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_957*))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108_METHOD_1_86B51A943DBF232B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC9DACFD234216F1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108_METHOD_1_BC9DACFD234216F1_OFFSET))(this, a1);
	}
};
