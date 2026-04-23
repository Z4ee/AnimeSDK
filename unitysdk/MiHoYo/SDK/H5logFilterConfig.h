#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_H5LOGFILTERCONFIG_ISREPORTENABLE_OFFSET UNITYSDK_OFFSET(0x17526EC0)
#define MIHOYO_SDK_H5LOGFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17526530)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logFilterConfig_TypeDefinitionIndex = 6959;

	class H5logFilterConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* filters; // 0x10

		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGFILTERCONFIG__CTOR_OFFSET))(this, dataString);
		}

		::System::Boolean IsReportEnable(::System::String* module, ::System::String* key, ::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGFILTERCONFIG_ISREPORTENABLE_OFFSET))(this, module, key, value);
		}
	};
}
