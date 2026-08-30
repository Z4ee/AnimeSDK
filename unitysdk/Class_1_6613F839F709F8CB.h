#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6613F839F709F8CB_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1CC9F960)
#define CLASS_1_6613F839F709F8CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9FCA0)

inline static constexpr unsigned int Class_1_6613F839F709F8CB_TypeDefinitionIndex = 14801;

class Class_1_6613F839F709F8CB : public ::System::Object
{
public:
	::System::String* LJFOMBOOEIC; // 0x10
	::System::String* ICIDICKIDCB; // 0x18
	::System::String* JLFLCFGCHHC; // 0x20
	::RPG::Client::TextID OPLOPGILKKH; // 0x28
	::RPG::Client::TextID AEEEKGOKJIH; // 0x38
	::RPG::GameCore::RogueTournMarkType HLALFNEDFED; // 0x48
	::RPG::GameCore::RogueTournRoomType LHLKJIDFLIN; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613F839F709F8CB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6613F839F709F8CB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6613F839F709F8CB*&))((::PBYTE)hIl2Cpp + CLASS_1_6613F839F709F8CB_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
