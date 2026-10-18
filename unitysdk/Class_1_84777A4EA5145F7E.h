#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_84777A4EA5145F7E_METHOD_1_93188C301720DB57_1_OFFSET UNITYSDK_OFFSET(0xC7840B0)
#define CLASS_1_84777A4EA5145F7E_METHOD_1_93188C301720DB57_OFFSET UNITYSDK_OFFSET(0xC784000)
#define CLASS_1_84777A4EA5145F7E__CTOR_OFFSET UNITYSDK_OFFSET(0xC784160)

inline static constexpr unsigned int Class_1_84777A4EA5145F7E_TypeDefinitionIndex = 65839;

class Class_1_84777A4EA5145F7E : public ::System::Object
{
public:
	::UnityEngine::GameObject* MCLLALGABAB; // 0x10
	::System::Single IEHPFADHJFD; // 0x18
	::RPG::Client::TextID KPBHKDHAOLD; // 0x20
	::System::UInt32 ODMPMJCAHPN; // 0x30
	::System::Single NEMDKBKDFDN; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84777A4EA5145F7E__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::TextID Method_1_93188C301720DB57(::System::UInt32 a1)
	{
		return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84777A4EA5145F7E_METHOD_1_93188C301720DB57_OFFSET))(a1);
	}

	static ::RPG::Client::TextID Method_1_93188C301720DB57_1(::System::UInt32 a1)
	{
		return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84777A4EA5145F7E_METHOD_1_93188C301720DB57_1_OFFSET))(a1);
	}
};
