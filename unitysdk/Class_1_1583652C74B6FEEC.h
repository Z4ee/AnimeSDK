#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStatisticType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_1583652C74B6FEEC_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1D1EB200)
#define CLASS_1_1583652C74B6FEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EB490)

inline static constexpr unsigned int Class_1_1583652C74B6FEEC_TypeDefinitionIndex = 12393;

class Class_1_1583652C74B6FEEC : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x18
	::System::Boolean GNLGHALIPLD; // 0x1C
	::RPG::GameCore::TeamTowersStatisticType GMPGDEINODK; // 0x20
	::RPG::Client::TextID NMAHGFAPENI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1583652C74B6FEEC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_1583652C74B6FEEC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_1583652C74B6FEEC*&))((::PBYTE)hIl2Cpp + CLASS_1_1583652C74B6FEEC_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
