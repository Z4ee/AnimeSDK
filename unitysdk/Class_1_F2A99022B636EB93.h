#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_63.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_791;
class Class_0_16E4307DCC419505_801;
class Class_0_16E4307DCC419505_804;
class Class_0_16E4307DCC419505_806;
class Class_0_16E4307DCC419505_807;
class Class_1_2E64892306548DEA;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_F2A99022B636EB93_METHOD_1_194BF38B20A55186_OFFSET UNITYSDK_OFFSET(0x97A8330)
#define CLASS_1_F2A99022B636EB93_METHOD_1_2BF20B42846506FB_OFFSET UNITYSDK_OFFSET(0x97AA7B0)
#define CLASS_1_F2A99022B636EB93_METHOD_1_6A3B841E69238D58_OFFSET UNITYSDK_OFFSET(0x97AAA80)
#define CLASS_1_F2A99022B636EB93_METHOD_1_C46A81C076369750_OFFSET UNITYSDK_OFFSET(0x97AA830)
#define CLASS_1_F2A99022B636EB93_METHOD_1_FDB5508D9FCA627D_OFFSET UNITYSDK_OFFSET(0x97AA900)

inline static constexpr unsigned int Class_1_F2A99022B636EB93_TypeDefinitionIndex = 61862;

class Class_1_F2A99022B636EB93 : public ::System::Object
{
public:
	static ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_791*>* Method_1_194BF38B20A55186(::Class_1_2E64892306548DEA* a1)
	{
		return ((::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_791*>*(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_194BF38B20A55186_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2BF20B42846506FB(::RPG::GameCore::RogueSubMode a1, ::Class_0_16E4307DCC419505_801* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode, ::Class_0_16E4307DCC419505_801*))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_2BF20B42846506FB_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_804* Method_1_C46A81C076369750(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::Class_0_16E4307DCC419505_804*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_C46A81C076369750_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_806* Method_1_FDB5508D9FCA627D(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::Class_0_16E4307DCC419505_806*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_FDB5508D9FCA627D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_807*>* Method_1_6A3B841E69238D58(::RPG::GameCore::RogueSubMode a1, ::Enum_3_0A3761FE34514D6C_63 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_807*>*(*)(::RPG::GameCore::RogueSubMode, ::Enum_3_0A3761FE34514D6C_63))((::PBYTE)hIl2Cpp + CLASS_1_F2A99022B636EB93_METHOD_1_6A3B841E69238D58_OFFSET))(a1, a2);
	}
};
