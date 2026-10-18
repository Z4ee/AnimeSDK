#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageItemType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_386F69445B9E38D2_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1D9E8E30)
#define CLASS_1_386F69445B9E38D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9290)

inline static constexpr unsigned int Class_1_386F69445B9E38D2_TypeDefinitionIndex = 13949;

class Class_1_386F69445B9E38D2 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BHNIBPKLDKO; // 0x10
	::System::String* FBKAMIHGLFK; // 0x18
	::RPG::GameCore::LimaoNewsMessageSenderType GEFCMECLLIJ; // 0x20
	::RPG::GameCore::LimaoNewsMessageItemType LINLNNHIBAK; // 0x24
	::System::Boolean BGOCHGHFOLJ; // 0x28
	::System::UInt32 IJBDLNLOJKK; // 0x2C
	::System::UInt32 JAKLCIIEDON; // 0x30
	::System::UInt32 NJFABJDCPNC; // 0x34
	::System::UInt32 LDLDCLEIFML; // 0x38
	::RPG::Client::TextID HMGLFJABIII; // 0x40
	::RPG::Client::TextID JGMIOKAJMFB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386F69445B9E38D2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_386F69445B9E38D2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_386F69445B9E38D2*&))((::PBYTE)hIl2Cpp + CLASS_1_386F69445B9E38D2_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
