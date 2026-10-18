#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B472E603E751534B_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1CC89820)
#define CLASS_1_B472E603E751534B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC89BE0)

inline static constexpr unsigned int Class_1_B472E603E751534B_TypeDefinitionIndex = 11978;

class Class_1_B472E603E751534B : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* IEFAOJFMIJB; // 0x10
	::System::String* CDDCLPHPKNC; // 0x18
	::System::String* GNHGAOHCDNK; // 0x20
	::Il2CppArray<::System::UInt32>* PNEPAFOAEJD; // 0x28
	::Il2CppArray<::System::UInt32>* MGHLJNKMDJJ; // 0x30
	::RPG::Client::TextID OENAMINOLLF; // 0x38
	::System::UInt32 KHIJNANHBFB; // 0x48
	::System::Boolean DFKJCMCDMEI; // 0x4C
	::System::UInt32 PHFMCACHFIJ; // 0x50
	::System::UInt32 GDBJDAOOCOH; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B472E603E751534B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B472E603E751534B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B472E603E751534B*&))((::PBYTE)hIl2Cpp + CLASS_1_B472E603E751534B_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
