#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityDiceCombatV2BattleTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6403DECDBFD56254_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1C8D9800)
#define CLASS_1_6403DECDBFD56254__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D9A10)

inline static constexpr unsigned int Class_1_6403DECDBFD56254_TypeDefinitionIndex = 11297;

class Class_1_6403DECDBFD56254 : public ::System::Object
{
public:
	::System::String* OOLEAPLDIEA; // 0x10
	::RPG::GameCore::ActivityDiceCombatV2BattleTalkType LLBDOPKHHEB; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x1C
	::RPG::Client::TextID PEPOHJHNFHF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6403DECDBFD56254__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6403DECDBFD56254*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6403DECDBFD56254*&))((::PBYTE)hIl2Cpp + CLASS_1_6403DECDBFD56254_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
