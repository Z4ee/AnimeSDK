#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALSUBTITLE05EDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18117AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSubtitle05EDContext_TypeDefinitionIndex = 46980;

	class UIGeneralSubtitle05EDContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::System::String*>* leftTextKeys; // 0x28
		::System::String* leftTopTextKey; // 0x30
		::System::String* middleTextKey; // 0x38
		::System::String* bottomSubtitleKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
