#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SHOWWIDGETLISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA9500)

inline static constexpr unsigned int ShowWidgetListData_TypeDefinitionIndex = 46445;

class ShowWidgetListData : public ::System::Object
{
public:
	::System::Int32 MinCount; // 0x10
	::System::Int32 ScrollToIndex; // 0x14
	::System::Int32 SelectIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWWIDGETLISTDATA__CTOR_OFFSET))(this);
	}
};
