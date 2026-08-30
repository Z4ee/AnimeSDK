#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C175D0E687657564_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1D5BC5E0)
#define CLASS_1_C175D0E687657564__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BC9D0)

inline static constexpr unsigned int Class_1_C175D0E687657564_TypeDefinitionIndex = 14350;

class Class_1_C175D0E687657564 : public ::System::Object
{
public:
	::System::String* DEJJGGOABPA; // 0x10
	::System::String* GJMHAJGIHOM; // 0x18
	::System::String* HHIIGAIJEDA; // 0x20
	::RPG::Client::TextID PMNJAKBDNEG; // 0x28
	::RPG::Client::TextID OEPDNGFAKDA; // 0x38
	::System::UInt32 KODCANKFHAO; // 0x48
	::RPG::Client::TextID AGNDDHOLJNL; // 0x50
	::RPG::GameCore::ItemRarity PMIEAEGJNMJ; // 0x60
	::RPG::GameCore::TargetGenderType FJDEIHMGHIF; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C175D0E687657564__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C175D0E687657564*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C175D0E687657564*&))((::PBYTE)hIl2Cpp + CLASS_1_C175D0E687657564_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
