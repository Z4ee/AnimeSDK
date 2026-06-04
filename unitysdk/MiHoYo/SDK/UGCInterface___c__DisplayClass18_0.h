#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface; }
namespace MiHoYo::SDK { class UGCInterface_UgcBinaryResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA221000)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__0_OFFSET UNITYSDK_OFFSET(0xA225340)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__1_OFFSET UNITYSDK_OFFSET(0xA225680)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__2_OFFSET UNITYSDK_OFFSET(0xA225480)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__3_OFFSET UNITYSDK_OFFSET(0xA225500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass18_0_TypeDefinitionIndex = 43853;

	class UGCInterface___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* __9__2; // 0x10
		::System::String* strUId; // 0x18
		::System::String* strRegion; // 0x20
		::System::String* strUrl; // 0x28
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x38
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback; // 0x40
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x48
		::System::String* strTaskId; // 0x50
		::System::Action* __9__3; // 0x58
		::System::Int32 nRetryCount; // 0x60
		::System::Single nTimeoutSeconds; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpGetBinaryCarryTokenImpl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__0_OFFSET))(this);
		}

		::System::Void _HttpGetBinaryCarryTokenImpl_b__2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _HttpGetBinaryCarryTokenImpl_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__3_OFFSET))(this);
		}

		::System::Void _HttpGetBinaryCarryTokenImpl_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS18_0__HTTPGETBINARYCARRYTOKENIMPL_B__1_OFFSET))(this, a1);
		}
	};
}
