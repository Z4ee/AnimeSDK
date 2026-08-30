#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5747B31C537024FC_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1D84EC20)
#define CLASS_1_5747B31C537024FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84EF70)

inline static constexpr unsigned int Class_1_5747B31C537024FC_TypeDefinitionIndex = 12409;

class Class_1_5747B31C537024FC : public ::System::Object
{
public:
	::System::String* PNCFJGFAEMA; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20
	::System::String* GINFOPOAKHK; // 0x28
	::RPG::Client::TextID NMAHGFAPENI; // 0x30
	::RPG::Client::TextID OENAMINOLLF; // 0x40
	::System::UInt32 PHFMCACHFIJ; // 0x50
	::System::UInt32 ODEKADIBFAO; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5747B31C537024FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5747B31C537024FC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5747B31C537024FC*&))((::PBYTE)hIl2Cpp + CLASS_1_5747B31C537024FC_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
