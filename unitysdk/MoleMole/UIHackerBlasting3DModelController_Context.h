#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDE290)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerBlasting3DModelController_Context_TypeDefinitionIndex = 44697;

	class UIHackerBlasting3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* AttachPointName; // 0x28
		::System::UInt32 EntityID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
