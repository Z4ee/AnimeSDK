#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_258DC369B7CE2A57_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1CC853D0)
#define CLASS_1_258DC369B7CE2A57__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC85600)

inline static constexpr unsigned int Class_1_258DC369B7CE2A57_TypeDefinitionIndex = 12008;

class Class_1_258DC369B7CE2A57 : public ::System::Object
{
public:
	::System::String* MJPKBIGCFOM; // 0x10
	::Enum_3_96F6662CA3713095 GMPGDEINODK; // 0x18
	::System::Int32 FLBGELFEBCK; // 0x1C
	::RPG::Client::TextID OENAMINOLLF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_258DC369B7CE2A57__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_258DC369B7CE2A57*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_258DC369B7CE2A57*&))((::PBYTE)hIl2Cpp + CLASS_1_258DC369B7CE2A57_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
