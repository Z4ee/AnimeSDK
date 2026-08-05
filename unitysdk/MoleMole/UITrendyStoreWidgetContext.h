#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UITRENDYSTOREWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191626A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetContext_TypeDefinitionIndex = 61790;

	class UITrendyStoreWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x28
		::System::Int32 InitSelectID; // 0x30
		::System::Boolean ShowPreviewMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
