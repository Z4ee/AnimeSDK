#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoBaseSDK_MockFunctionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIHOYO_SDK_MIHOYOBASESDK_CUSTOMAUTOTESTUNIQUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA18C930)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_CustomAutoTestUniqueInfo_TypeDefinitionIndex = 43665;

	class MiHoYoBaseSDK_CustomAutoTestUniqueInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* unique_ignore_module; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::MiHoYoBaseSDK_MockFunctionInfo*>* unique_mock_function; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_CUSTOMAUTOTESTUNIQUEINFO__CTOR_OFFSET))(this);
		}
	};
}
