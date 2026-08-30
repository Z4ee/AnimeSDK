#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompetitiveGamePlaySystemPriority.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_694;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E9577BBB4171AB08_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AEE7A0)
#define CLASS_1_E9577BBB4171AB08_METHOD_1_1211D223AFE46110_OFFSET UNITYSDK_OFFSET(0x15AEE590)
#define CLASS_1_E9577BBB4171AB08_METHOD_1_1ACEC9D04C45B82C_OFFSET UNITYSDK_OFFSET(0x15AED690)
#define CLASS_1_E9577BBB4171AB08_METHOD_1_8ED569C4553B5429_OFFSET UNITYSDK_OFFSET(0x15AEDFD0)
#define CLASS_1_E9577BBB4171AB08_METHOD_1_8F13CDD77F488702_OFFSET UNITYSDK_OFFSET(0x15AEE450)
#define CLASS_1_E9577BBB4171AB08_METHOD_1_B4B67F3318997459_OFFSET UNITYSDK_OFFSET(0x15AEDEF0)
#define CLASS_1_E9577BBB4171AB08_METHOD_1_FC127D9E2F913835_OFFSET UNITYSDK_OFFSET(0x15AEDDD0)
#define CLASS_1_E9577BBB4171AB08__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEE8B0)

inline static constexpr unsigned int Class_1_E9577BBB4171AB08_TypeDefinitionIndex = 60735;

class Class_1_E9577BBB4171AB08 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_694* BDPEEAECBDK; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CompetitiveGamePlaySystemPriority, ::System::Int32>* JHGBDLHCBOO; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CompetitiveGamePlaySystemPriority, ::Class_0_16E4307DCC419505_694*>* KAMBJAODFFO; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::CompetitiveGamePlaySystemPriority>* LHIGHMJOGCF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1ACEC9D04C45B82C(::Class_0_16E4307DCC419505_694* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_694*))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_METHOD_1_1ACEC9D04C45B82C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8ED569C4553B5429(::RPG::Client::CompetitiveGamePlaySystemPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_METHOD_1_8ED569C4553B5429_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F13CDD77F488702(::RPG::Client::CompetitiveGamePlaySystemPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_METHOD_1_8F13CDD77F488702_OFFSET))(this, a1);
	}

	::RPG::Client::CompetitiveGamePlaySystemPriority Method_1_FC127D9E2F913835()
	{
		return ((::RPG::Client::CompetitiveGamePlaySystemPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_METHOD_1_FC127D9E2F913835_OFFSET))(this);
	}

	::System::Void Method_1_1211D223AFE46110(::System::Boolean a1, ::RPG::Client::CompetitiveGamePlaySystemPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_METHOD_1_1211D223AFE46110_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B4B67F3318997459(::RPG::Client::CompetitiveGamePlaySystemPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompetitiveGamePlaySystemPriority))((::PBYTE)hIl2Cpp + CLASS_1_E9577BBB4171AB08_METHOD_1_B4B67F3318997459_OFFSET))(this, a1);
	}
};
