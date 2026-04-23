#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD5330)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__HTTPPOSTCARRYTOKENIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x8DD9550)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__HTTPPOSTCARRYTOKENIMPL_B__1_OFFSET UNITYSDK_OFFSET(0x8DD9670)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__HTTPPOSTCARRYTOKENIMPL_B__2_OFFSET UNITYSDK_OFFSET(0x8DD96E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass17_0_TypeDefinitionIndex = 43049;

	class UGCInterface___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::String* strRegion; // 0x18
		::System::String* strBody; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28
		::System::String* strUId; // 0x30
		::System::String* strUrl; // 0x38
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback; // 0x40
		::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* __9__1; // 0x48
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x58
		::System::Int32 nRetryCount; // 0x60
		::System::Single nTimeoutSeconds; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpPostCarryTokenImpl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__HTTPPOSTCARRYTOKENIMPL_B__0_OFFSET))(this);
		}

		::System::Void _HttpPostCarryTokenImpl_b__1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicResponseHeader, ::System::String* strResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__HTTPPOSTCARRYTOKENIMPL_B__1_OFFSET))(this, dicResponseHeader, strResponse);
		}

		::System::Void _HttpPostCarryTokenImpl_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS17_0__HTTPPOSTCARRYTOKENIMPL_B__2_OFFSET))(this);
		}
	};
}
