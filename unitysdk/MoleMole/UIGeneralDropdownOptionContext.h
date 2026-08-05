#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1920A05BA1489633.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_0EB9C77975304C39;
class Class_1_1EA8435E138F2E03;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x195F6CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropdownOptionContext_TypeDefinitionIndex = 84982;

	class UIGeneralDropdownOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onLockedClick; // 0x28
		::System::String* descKey; // 0x30
		::Class_1_0EB9C77975304C39* loginParam; // 0x38
		::Class_1_1EA8435E138F2E03* node; // 0x40
		::Foundation::AssetPath iconPath; // 0x48
		::Foundation::AssetPath redImagePath; // 0x58
		::Struct_2_A47ACAABA9AAFE92 otherInfo; // 0x68
		::System::String* desc; // 0x80
		::MoleMole::LanguageType languageType; // 0x88
		::Enum_3_1920A05BA1489633 iconType; // 0x8C
		::System::Boolean isRed; // 0x90
		::System::Boolean locked; // 0x91
		::System::Boolean isNew; // 0x92
		::System::Boolean isDesCenter; // 0x93
		::System::Int32 index; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
