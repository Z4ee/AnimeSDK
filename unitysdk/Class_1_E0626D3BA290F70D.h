#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_66.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_880;
class Class_0_16E4307DCC419505_890;
class Class_0_16E4307DCC419505_893;
class Class_0_16E4307DCC419505_895;
class Class_0_16E4307DCC419505_896;
class Class_1_01C2B9641EF803B2;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_E0626D3BA290F70D_METHOD_1_194BF38B20A55186_OFFSET UNITYSDK_OFFSET(0x16C77510)
#define CLASS_1_E0626D3BA290F70D_METHOD_1_30AC3CEB525A2BEA_OFFSET UNITYSDK_OFFSET(0x16C79EB0)
#define CLASS_1_E0626D3BA290F70D_METHOD_1_5D233F973EFA0823_OFFSET UNITYSDK_OFFSET(0x16C79C80)
#define CLASS_1_E0626D3BA290F70D_METHOD_1_C46A81C076369750_1_OFFSET UNITYSDK_OFFSET(0x16C79DE0)
#define CLASS_1_E0626D3BA290F70D_METHOD_1_C46A81C076369750_OFFSET UNITYSDK_OFFSET(0x16C79D10)

inline static constexpr unsigned int Class_1_E0626D3BA290F70D_TypeDefinitionIndex = 64162;

class Class_1_E0626D3BA290F70D : public ::System::Object
{
public:
	static ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_880*>* Method_1_194BF38B20A55186(::Class_1_01C2B9641EF803B2* a1)
	{
		return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_880*>*(*)(::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D_METHOD_1_194BF38B20A55186_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5D233F973EFA0823(::RPG::GameCore::RogueSubMode a1, ::Class_0_16E4307DCC419505_890* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode, ::Class_0_16E4307DCC419505_890*))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D_METHOD_1_5D233F973EFA0823_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_893* Method_1_C46A81C076369750(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::Class_0_16E4307DCC419505_893*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D_METHOD_1_C46A81C076369750_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_895* Method_1_C46A81C076369750_1(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::Class_0_16E4307DCC419505_895*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D_METHOD_1_C46A81C076369750_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_896*>* Method_1_30AC3CEB525A2BEA(::RPG::GameCore::RogueSubMode a1, ::Enum_3_0A3761FE34514D6C_66 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_896*>*(*)(::RPG::GameCore::RogueSubMode, ::Enum_3_0A3761FE34514D6C_66))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D_METHOD_1_30AC3CEB525A2BEA_OFFSET))(a1, a2);
	}
};
