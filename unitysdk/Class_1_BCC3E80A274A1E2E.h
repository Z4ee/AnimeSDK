#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_BCC3E80A274A1E2E_METHOD_1_7A772A33A90355AA_OFFSET UNITYSDK_OFFSET(0x1CD164A0)
#define CLASS_1_BCC3E80A274A1E2E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16670)

inline static constexpr unsigned int Class_1_BCC3E80A274A1E2E_TypeDefinitionIndex = 13931;

class Class_1_BCC3E80A274A1E2E : public ::System::Object
{
public:
	::System::String* MJGHNNBHFML; // 0x10
	::RPG::GameCore::LimaoNewsOfficeSurveyType AAPEGNAHMJB; // 0x18
	::RPG::Client::TextID BCNPCBKGFBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCC3E80A274A1E2E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_7A772A33A90355AA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_BCC3E80A274A1E2E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_BCC3E80A274A1E2E*&))((::PBYTE)hIl2Cpp + CLASS_1_BCC3E80A274A1E2E_METHOD_1_7A772A33A90355AA_OFFSET))(a1, a2);
	}
};
