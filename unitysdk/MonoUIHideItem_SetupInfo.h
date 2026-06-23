#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MONOUIHIDEITEM_SETUPINFO_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x108AD7A0)
#define MONOUIHIDEITEM_SETUPINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x108AD680)
#define MONOUIHIDEITEM_SETUPINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x108AD710)

inline static constexpr unsigned int MonoUIHideItem_SetupInfo_TypeDefinitionIndex = 71126;

struct alignas(4) MonoUIHideItem_SetupInfo
{
	::System::Int32 RuntimeID; // 0x10
	::System::Int32 Priority; // 0x14
	::System::Boolean IsShow; // 0x18
	::System::Boolean IsHighlight; // 0x19

	static ::System::Boolean op_Equality(::MonoUIHideItem_SetupInfo a, ::MonoUIHideItem_SetupInfo b)
	{
		return ((::System::Boolean(*)(::MonoUIHideItem_SetupInfo, ::MonoUIHideItem_SetupInfo))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPINFO_OP_EQUALITY_OFFSET))(a, b);
	}

	static ::System::Boolean op_Inequality(::MonoUIHideItem_SetupInfo a, ::MonoUIHideItem_SetupInfo b)
	{
		return ((::System::Boolean(*)(::MonoUIHideItem_SetupInfo, ::MonoUIHideItem_SetupInfo))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPINFO_OP_INEQUALITY_OFFSET))(a, b);
	}

	static ::MonoUIHideItem_SetupInfo get_Default()
	{
		return ((::MonoUIHideItem_SetupInfo(*)())((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_SETUPINFO_GET_DEFAULT_OFFSET))();
	}
};
