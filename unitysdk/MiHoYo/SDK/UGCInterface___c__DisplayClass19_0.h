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

#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D959B60)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x1D959B70)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__1_OFFSET UNITYSDK_OFFSET(0x1D959E70)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__2_OFFSET UNITYSDK_OFFSET(0x1D959CA0)
#define MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__3_OFFSET UNITYSDK_OFFSET(0x1D959D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface___c__DisplayClass19_0_TypeDefinitionIndex = 37490;

	class UGCInterface___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::String* strTaskId; // 0x10
		::System::String* strUrl; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* __9__2; // 0x28
		::MiHoYo::SDK::UGCInterface* __4__this; // 0x30
		::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* callback; // 0x38
		::System::String* strRegion; // 0x40
		::System::String* strUId; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers; // 0x50
		::System::String* strContentType; // 0x58
		::Il2CppArray<::System::Byte>* body; // 0x60
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* tokenFailedCallback; // 0x68
		::System::Single nTimeoutSeconds; // 0x70
		::System::Int32 nRetryCount; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpPostBinaryCarryTokenImpl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__0_OFFSET))(this);
		}

		::System::Void _HttpPostBinaryCarryTokenImpl_b__2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicResponseHeader, ::Il2CppArray<::System::Byte>* binaryResponse, ::System::String* strResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__2_OFFSET))(this, dicResponseHeader, binaryResponse, strResponse);
		}

		::System::Void _HttpPostBinaryCarryTokenImpl_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__3_OFFSET))(this);
		}

		::System::Void _HttpPostBinaryCarryTokenImpl_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE___C__DISPLAYCLASS19_0__HTTPPOSTBINARYCARRYTOKENIMPL_B__1_OFFSET))(this, response);
		}
	};
}
