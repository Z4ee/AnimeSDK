#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELABYSSS2ARTIFACTPURITYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB7770)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2ArtifactPurityContext_TypeDefinitionIndex = 57476;

	class UIInLevelAbyssS2ArtifactPurityContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* TargetItemData; // 0x28
		::Class_1_0D6706375CDAAE8C* SourceItemData; // 0x30
		::System::Action* OnFinish; // 0x38
		::System::Boolean IsNew; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2ARTIFACTPURITYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
