#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_62.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_691;
class Class_0_16E4307DCC419505_701;
class Class_0_16E4307DCC419505_704;
class Class_0_16E4307DCC419505_706;
class Class_0_16E4307DCC419505_707;
class Class_1_DBE1913405A6C120;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_F2A99022B636EB93_METHOD_1_194BF38B20A55186_OFFSET UNITYSDK_OFFSET(0x10C78420)
#define CLASS_1_F2A99022B636EB93_METHOD_1_2BF20B42846506FB_OFFSET UNITYSDK_OFFSET(0x10C7A8A0)
#define CLASS_1_F2A99022B636EB93_METHOD_1_6A3B841E69238D58_OFFSET UNITYSDK_OFFSET(0x10C7AB70)
#define CLASS_1_F2A99022B636EB93_METHOD_1_C46A81C076369750_OFFSET UNITYSDK_OFFSET(0x10C7A920)
#define CLASS_1_F2A99022B636EB93_METHOD_1_FDB5508D9FCA627D_OFFSET UNITYSDK_OFFSET(0x10C7A9F0)

inline static constexpr unsigned int Class_1_F2A99022B636EB93_TypeDefinitionIndex = 54674;

class Class_1_F2A99022B636EB93 : public ::System::Object
{
public:
	static ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_691*>* Method_1_194BF38B20A55186(::Class_1_DBE1913405A6C120* a1)
	{
		return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_691*>*(*)(::Class_1_DBE1913405A6C120*))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_194BF38B20A55186_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2BF20B42846506FB(::RPG::GameCore::RogueSubMode a1, ::Class_0_16E4307DCC419505_701* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode, ::Class_0_16E4307DCC419505_701*))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_2BF20B42846506FB_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_704* Method_1_C46A81C076369750(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::Class_0_16E4307DCC419505_704*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_C46A81C076369750_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_706* Method_1_FDB5508D9FCA627D(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::Class_0_16E4307DCC419505_706*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_FDB5508D9FCA627D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_707*>* Method_1_6A3B841E69238D58(::RPG::GameCore::RogueSubMode a1, ::Enum_3_0A3761FE34514D6C_62 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_707*>*(*)(::RPG::GameCore::RogueSubMode, ::Enum_3_0A3761FE34514D6C_62))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_6A3B841E69238D58_OFFSET))(a1, a2);
	}
};
