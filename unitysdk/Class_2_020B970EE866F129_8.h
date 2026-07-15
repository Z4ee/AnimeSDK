#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_0_16E4307DCC419505_1243;
class Class_2_FDB2D140BF0822AD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_020B970EE866F129_8_METHOD_2_079ECBEAA4B9D832_OFFSET UNITYSDK_OFFSET(0x163A6EA0)
#define CLASS_2_020B970EE866F129_8_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x163A73D0)
#define CLASS_2_020B970EE866F129_8_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x163A6E30)
#define CLASS_2_020B970EE866F129_8_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x163A71C0)
#define CLASS_2_020B970EE866F129_8__CTOR_OFFSET UNITYSDK_OFFSET(0x163A6E20)

inline static constexpr unsigned int Class_2_020B970EE866F129_8_TypeDefinitionIndex = 74307;

class Class_2_020B970EE866F129_8 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_FDB2D140BF0822AD* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_1243* Field_2_1; // 0x20

	::System::Void _ctor(::Class_2_FDB2D140BF0822AD* a1, ::Class_0_16E4307DCC419505_1243* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDB2D140BF0822AD*, ::Class_0_16E4307DCC419505_1243*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_079ECBEAA4B9D832(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_079ECBEAA4B9D832_OFFSET))(this, a1);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
