#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELABYSSS2ARTIFACTPURITYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1825C2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2ArtifactPurityContext_TypeDefinitionIndex = 77534;

	class UIInLevelAbyssS2ArtifactPurityContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnFinish; // 0x28
		::Class_1_0D6706375CDAAE8C* TargetItemData; // 0x30
		::Class_1_0D6706375CDAAE8C* SourceItemData; // 0x38
		::System::Boolean IsNew; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2ARTIFACTPURITYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
