#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA9B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerCharging3DModelController_Context_TypeDefinitionIndex = 64131;

	class UIHackerCharging3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* CustomPropertyName; // 0x28
		::System::String* AttachPointName; // 0x30
		::System::UInt32 EntityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
