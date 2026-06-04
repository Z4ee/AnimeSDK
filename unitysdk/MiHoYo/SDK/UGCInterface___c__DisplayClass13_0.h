#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class UGCInterface; }
namespace MiHoYo::SDK { class UGCInterface_UgcBinaryResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA2201A0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS13_0__HTTPGETBINARY_B__0_OFFSET UNITYSDK_OFFSET(0xA2246D0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS13_0__HTTPGETBINARY_B__1_OFFSET UNITYSDK_OFFSET(0xA224950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass13_0_TypeDefinitionIndex = 43848;

	class UGCInterface___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x18
		::System::String* strTaskId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpGetBinary_b__0(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS13_0__HTTPGETBINARY_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _HttpGetBinary_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS13_0__HTTPGETBINARY_B__1_OFFSET))(this);
		}
	};
}
