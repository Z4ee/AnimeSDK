#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MONOUIHIDEITEM_CUSTOMFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF645DB0)

inline static constexpr unsigned int MonoUIHideItem_CustomFadeConfig_TypeDefinitionIndex = 44242;

class MonoUIHideItem_CustomFadeConfig : public ::System::Object
{
public:
	::System::Func_2<::MonoUIHideItem_CustomFadeConfig*, ::System::Boolean>* CheckWorkalbe; // 0x10
	::MonoUIHideItem_ShowStatus applyStatus; // 0x18
	::System::Int32 applyCount; // 0x1C
	::System::String* animName; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIHIDEITEM_CUSTOMFADECONFIG__CTOR_OFFSET))(this);
	}
};
