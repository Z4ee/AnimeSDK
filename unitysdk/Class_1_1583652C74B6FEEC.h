#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStatisticType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_1583652C74B6FEEC_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1B3A41B0)
#define CLASS_1_1583652C74B6FEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A4440)

inline static constexpr unsigned int Class_1_1583652C74B6FEEC_TypeDefinitionIndex = 12004;

class Class_1_1583652C74B6FEEC : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::RPG::GameCore::TeamTowersStatisticType Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::RPG::Client::TextID Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1583652C74B6FEEC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_1583652C74B6FEEC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_1583652C74B6FEEC*&))((::PBYTE)hIl2Cpp + CLASS_1_1583652C74B6FEEC_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
