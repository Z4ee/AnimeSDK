#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_98D78BFF30C4B05E_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1CC58E60)
#define CLASS_1_98D78BFF30C4B05E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC593E0)

inline static constexpr unsigned int Class_1_98D78BFF30C4B05E_TypeDefinitionIndex = 12405;

class Class_1_98D78BFF30C4B05E : public ::System::Object
{
public:
	::System::String* MEIFEJGOLJC; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20
	::System::UInt32 ODEKADIBFAO; // 0x28
	::System::Single CNGOPBADLLP; // 0x2C
	::RPG::GameCore::TeamTowersPlayerSkillType GMPGDEINODK; // 0x30
	::System::Single EJKGHBAGFIB; // 0x34
	::RPG::Client::TextID OENAMINOLLF; // 0x38
	::System::UInt32 PHFMCACHFIJ; // 0x48
	::System::UInt32 AAGKEBFHLMC; // 0x4C
	::RPG::Client::TextID NMAHGFAPENI; // 0x50
	::RPG::Client::TextID HEIHBJEEGPB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D78BFF30C4B05E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_98D78BFF30C4B05E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_98D78BFF30C4B05E*&))((::PBYTE)hIl2Cpp + CLASS_1_98D78BFF30C4B05E_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
