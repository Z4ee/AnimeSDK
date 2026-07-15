#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageItemType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_DA5F2967E1AD1373_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1BF5DB90)
#define CLASS_1_DA5F2967E1AD1373__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5DF50)

inline static constexpr unsigned int Class_1_DA5F2967E1AD1373_TypeDefinitionIndex = 13449;

class Class_1_DA5F2967E1AD1373 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x30
	::System::UInt32 Field_1_4; // 0x40
	::System::UInt32 Field_1_5; // 0x44
	::RPG::GameCore::LimaoNewsMessageItemType Field_1_6; // 0x48
	::System::UInt32 Field_1_7; // 0x4C
	::RPG::GameCore::LimaoNewsMessageSenderType Field_1_8; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA5F2967E1AD1373__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_DA5F2967E1AD1373*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_DA5F2967E1AD1373*&))((::PBYTE)hIl2Cpp + CLASS_1_DA5F2967E1AD1373_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
