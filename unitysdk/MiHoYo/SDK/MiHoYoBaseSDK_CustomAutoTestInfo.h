#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoBaseSDK_MockFunctionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_MIHOYOBASESDK_CUSTOMAUTOTESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB21C500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_CustomAutoTestInfo_TypeDefinitionIndex = 46711;

	class MiHoYoBaseSDK_CustomAutoTestInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ignore_module; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::MiHoYoBaseSDK_MockFunctionInfo*>* mock_function; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_CUSTOMAUTOTESTINFO__CTOR_OFFSET))(this);
		}
	};
}
