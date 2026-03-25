#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_0_16E4307DCC419505_1012;
class Class_2_FDB2D140BF0822AD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_020B970EE866F129_8_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x884F690)
#define CLASS_2_020B970EE866F129_8_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x884F110)
#define CLASS_2_020B970EE866F129_8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x884F6F0)
#define CLASS_2_020B970EE866F129_8_METHOD_2_72559774F9421165_OFFSET UNITYSDK_OFFSET(0x884F180)
#define CLASS_2_020B970EE866F129_8_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x884F750)
#define CLASS_2_020B970EE866F129_8_METHOD_2_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x884F490)
#define CLASS_2_020B970EE866F129_8__CTOR_OFFSET UNITYSDK_OFFSET(0x884F100)

inline static constexpr unsigned int Class_2_020B970EE866F129_8_TypeDefinitionIndex = 63714;

class Class_2_020B970EE866F129_8 : public ::Class_1_FD611945730E269E
{
public:
	::Class_0_16E4307DCC419505_1012* Field_2_1; // 0x18
	::Class_2_FDB2D140BF0822AD* Field_2_0; // 0x20

	::System::Void _ctor(::Class_2_FDB2D140BF0822AD* a1, ::Class_0_16E4307DCC419505_1012* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDB2D140BF0822AD*, ::Class_0_16E4307DCC419505_1012*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_72559774F9421165(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_72559774F9421165_OFFSET))(this, a1);
	}

	::System::Void Method_2_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_8_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
