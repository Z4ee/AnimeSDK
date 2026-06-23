#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1920A05BA1489633.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

class Class_1_0EB9C77975304C39;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6B200)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropdownOptionContext_TypeDefinitionIndex = 70095;

	class UIGeneralDropdownOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath iconPath; // 0x28
		::System::String* desc; // 0x38
		::System::Action_1<::System::Int32>* onLockedClick; // 0x40
		::System::String* descKey; // 0x48
		::Foundation::AssetPath redImagePath; // 0x50
		::Struct_2_A47ACAABA9AAFE92 otherInfo; // 0x60
		::Class_1_0EB9C77975304C39* loginParam; // 0x78
		::MoleMole::LanguageType languageType; // 0x80
		::Enum_3_1920A05BA1489633 iconType; // 0x84
		::System::Int32 index; // 0x88
		::System::Boolean isNew; // 0x8C
		::System::Boolean isRed; // 0x8D
		::System::Boolean locked; // 0x8E
		::System::Boolean isDesCenter; // 0x8F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
