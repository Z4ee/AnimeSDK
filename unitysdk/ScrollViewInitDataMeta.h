#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define SCROLLVIEWINITDATAMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB26640)

inline static constexpr unsigned int ScrollViewInitDataMeta_TypeDefinitionIndex = 44106;

class ScrollViewInitDataMeta : public ::System::Object
{
public:
	::System::Func_3<::System::Object*, ::System::Object*, ::System::Boolean>* CustomDataIEqualityComparer; // 0x10
	::System::Boolean SelectItemAfterInitData; // 0x18
	::System::Boolean AutoKeepSelectedItemPosition; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLVIEWINITDATAMETA__CTOR_OFFSET))(this);
	}
};
