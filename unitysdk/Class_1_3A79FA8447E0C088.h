#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3A79FA8447E0C088_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1C8856A0)
#define CLASS_1_3A79FA8447E0C088__CTOR_OFFSET UNITYSDK_OFFSET(0x1C885AD0)

inline static constexpr unsigned int Class_1_3A79FA8447E0C088_TypeDefinitionIndex = 11294;

class Class_1_3A79FA8447E0C088 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PGAMJHMNLLN; // 0x10
	::System::String* MJPKBIGCFOM; // 0x18
	::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x20
	::RPG::Client::TextID OENAMINOLLF; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x38
	::RPG::GameCore::TacticsCardType GMPGDEINODK; // 0x3C
	::System::Int32 PMIEAEGJNMJ; // 0x40
	::System::UInt32 DODGNGAGMMG; // 0x44
	::System::UInt32 CCMBLCMCIPD; // 0x48
	::RPG::Client::TextID NMAHGFAPENI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A79FA8447E0C088__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3A79FA8447E0C088*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3A79FA8447E0C088*&))((::PBYTE)hIl2Cpp + CLASS_1_3A79FA8447E0C088_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
