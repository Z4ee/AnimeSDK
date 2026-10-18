#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A03349FE0C87E33D_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1CFF5060)
#define CLASS_1_A03349FE0C87E33D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF5360)

inline static constexpr unsigned int Class_1_A03349FE0C87E33D_TypeDefinitionIndex = 12018;

class Class_1_A03349FE0C87E33D : public ::System::Object
{
public:
	::System::String* OOLEAPLDIEA; // 0x10
	::System::UInt32 BNLCCCCMABF; // 0x18
	::RPG::Client::TextID OENAMINOLLF; // 0x20
	::RPG::Client::TextID JMBJBDDMNLO; // 0x30
	::System::UInt32 PHFMCACHFIJ; // 0x40
	::System::Boolean BEDKAABCNDD; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03349FE0C87E33D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A03349FE0C87E33D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A03349FE0C87E33D*&))((::PBYTE)hIl2Cpp + CLASS_1_A03349FE0C87E33D_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
