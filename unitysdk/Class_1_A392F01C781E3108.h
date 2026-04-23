#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_907;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A392F01C781E3108_METHOD_1_86B51A943DBF232B_OFFSET UNITYSDK_OFFSET(0x9118A20)
#define CLASS_1_A392F01C781E3108_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x91189B0)
#define CLASS_1_A392F01C781E3108_METHOD_1_C274E6C59B4CA004_OFFSET UNITYSDK_OFFSET(0x9118B10)
#define CLASS_1_A392F01C781E3108__CTOR_OFFSET UNITYSDK_OFFSET(0x9118E60)

inline static constexpr unsigned int Class_1_A392F01C781E3108_TypeDefinitionIndex = 64305;

class Class_1_A392F01C781E3108 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_907*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_907*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_86B51A943DBF232B(::RPG::GameCore::GameEntity* a1, ::Class_0_16E4307DCC419505_907* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_0_16E4307DCC419505_907*))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108_METHOD_1_86B51A943DBF232B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C274E6C59B4CA004(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A392F01C781E3108_METHOD_1_C274E6C59B4CA004_OFFSET))(this, a1);
	}
};
