#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_9B395D4E6EEE639B_METHOD_1_A11DA571CFC922B3_OFFSET UNITYSDK_OFFSET(0x1CF94120)
#define CLASS_1_9B395D4E6EEE639B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF942C0)

inline static constexpr unsigned int Class_1_9B395D4E6EEE639B_TypeDefinitionIndex = 13824;

class Class_1_9B395D4E6EEE639B : public ::System::Object
{
public:
	::System::String* MJGHNNBHFML; // 0x10
	::RPG::Client::TextID BCNPCBKGFBK; // 0x18
	::RPG::GameCore::LimaoNewsOfficeSurveyType AAPEGNAHMJB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B395D4E6EEE639B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A11DA571CFC922B3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9B395D4E6EEE639B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9B395D4E6EEE639B*&))((::PBYTE)hIl2Cpp + CLASS_1_9B395D4E6EEE639B_METHOD_1_A11DA571CFC922B3_OFFSET))(a1, a2);
	}
};
