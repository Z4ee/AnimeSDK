#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_KIBANANETBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175660A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaNetBoxConfig_TypeDefinitionIndex = 6957;

	class KibanaNetBoxConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* status_codes; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* url_paths; // 0x20

		::System::Void _ctor(::System::String* dataString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANANETBOXCONFIG__CTOR_OFFSET))(this, dataString);
		}
	};
}
