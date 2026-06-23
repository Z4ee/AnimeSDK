#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELABYSSS2ARTIFACTDISAPPEARCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE26C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2ArtifactDisappearContext_TypeDefinitionIndex = 50281;

	class UIInLevelAbyssS2ArtifactDisappearContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnFinish; // 0x28
		::Class_1_0D6706375CDAAE8C* SourceItemData; // 0x30
		::System::Boolean IsNew; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2ARTIFACTDISAPPEARCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
