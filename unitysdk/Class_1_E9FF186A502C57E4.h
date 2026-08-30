#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_E9FF186A502C57E4_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1D5C7860)
#define CLASS_1_E9FF186A502C57E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7C30)

inline static constexpr unsigned int Class_1_E9FF186A502C57E4_TypeDefinitionIndex = 11530;

class Class_1_E9FF186A502C57E4 : public ::System::Object
{
public:
	::RPG::Client::TextID KJGFIMDLFHF; // 0x10
	::RPG::GameCore::FateRinHouguOwnerType LOALOLNACOA; // 0x20
	::System::UInt32 LIPCDDAPHNF; // 0x24
	::RPG::Client::TextID NMPFJBDGGDE; // 0x28
	::System::UInt32 ENKMNJDEMJE; // 0x38
	::System::UInt32 PHFMCACHFIJ; // 0x3C
	::RPG::Client::TextID DHJDDBMCNKJ; // 0x40
	::RPG::Client::TextID NMAHGFAPENI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FF186A502C57E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E9FF186A502C57E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E9FF186A502C57E4*&))((::PBYTE)hIl2Cpp + CLASS_1_E9FF186A502C57E4_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
