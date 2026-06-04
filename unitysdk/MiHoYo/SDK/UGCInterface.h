#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class UGCInterface_UgcBinaryResponseModel; }
namespace MiHoYo::SDK { class UGCInterface_UgcInfo; }
namespace MiHoYo::SDK { class UGCInterface_UgcResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0xA221BA0)
#define MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_OFFSET UNITYSDK_OFFSET(0xA221B60)
#define MIHOYO_SDK_UGCINTERFACE_ADAPTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA221AD0)
#define MIHOYO_SDK_UGCINTERFACE_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0xA224080)
#define MIHOYO_SDK_UGCINTERFACE_AUTORENEWALTOKEN_OFFSET UNITYSDK_OFFSET(0xA222520)
#define MIHOYO_SDK_UGCINTERFACE_BINARYMODEL2MODEL_OFFSET UNITYSDK_OFFSET(0xA222E20)
#define MIHOYO_SDK_UGCINTERFACE_CHECKAUTHKEYVERIFYFAILED_OFFSET UNITYSDK_OFFSET(0xA2218A0)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENEXPIRED_OFFSET UNITYSDK_OFFSET(0xA222EA0)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVALID_OFFSET UNITYSDK_OFFSET(0xA222E70)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_1_OFFSET UNITYSDK_OFFSET(0xA221E20)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_2_OFFSET UNITYSDK_OFFSET(0xA221C70)
#define MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_OFFSET UNITYSDK_OFFSET(0xA221C60)
#define MIHOYO_SDK_UGCINTERFACE_CLONEHEADERS_OFFSET UNITYSDK_OFFSET(0xA223E20)
#define MIHOYO_SDK_UGCINTERFACE_ENABLELOGGER_OFFSET UNITYSDK_OFFSET(0xA21F770)
#define MIHOYO_SDK_UGCINTERFACE_EXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0xA223210)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYRESPONSE_OFFSET UNITYSDK_OFFSET(0xA222B70)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYTIMEOUTRESPONSE_OFFSET UNITYSDK_OFFSET(0xA221C20)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEBUSINESSHEADERS_OFFSET UNITYSDK_OFFSET(0xA224120)
#define MIHOYO_SDK_UGCINTERFACE_GENERATEHEADERS_OFFSET UNITYSDK_OFFSET(0xA2217C0)
#define MIHOYO_SDK_UGCINTERFACE_GENERATERESPONSE_OFFSET UNITYSDK_OFFSET(0xA2220C0)
#define MIHOYO_SDK_UGCINTERFACE_GENERATETIMEOUTRESPONSE_OFFSET UNITYSDK_OFFSET(0xA223440)
#define MIHOYO_SDK_UGCINTERFACE_GETBINARY_OFFSET UNITYSDK_OFFSET(0xA2211F0)
#define MIHOYO_SDK_UGCINTERFACE_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0xA223F70)
#define MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPMILLISEC_OFFSET UNITYSDK_OFFSET(0xA224330)
#define MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPSEC_OFFSET UNITYSDK_OFFSET(0xA2238B0)
#define MIHOYO_SDK_UGCINTERFACE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA21F660)
#define MIHOYO_SDK_UGCINTERFACE_GET_OFFSET UNITYSDK_OFFSET(0xA2215A0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0xA21FF00)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0xA21FD80)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_1_OFFSET UNITYSDK_OFFSET(0xA2201B0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_OFFSET UNITYSDK_OFFSET(0xA220060)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0xA21FC60)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0xA21FA50)
#define MIHOYO_SDK_UGCINTERFACE_HTTPGET_OFFSET UNITYSDK_OFFSET(0xA221480)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0xA2207B0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0xA220610)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARY_OFFSET UNITYSDK_OFFSET(0xA221280)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKENIMPL_OFFSET UNITYSDK_OFFSET(0xA2204E0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKEN_OFFSET UNITYSDK_OFFSET(0xA2202D0)
#define MIHOYO_SDK_UGCINTERFACE_HTTPPOST_OFFSET UNITYSDK_OFFSET(0xA221020)
#define MIHOYO_SDK_UGCINTERFACE_INITENV_OFFSET UNITYSDK_OFFSET(0xA2244B0)
#define MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_1_OFFSET UNITYSDK_OFFSET(0xA21F990)
#define MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_OFFSET UNITYSDK_OFFSET(0xA21F780)
#define MIHOYO_SDK_UGCINTERFACE_LOGGER_OFFSET UNITYSDK_OFFSET(0xA21F8D0)
#define MIHOYO_SDK_UGCINTERFACE_ONEXCHANGETOKENSUCCESS_OFFSET UNITYSDK_OFFSET(0xA223470)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTBINARYFAILED_OFFSET UNITYSDK_OFFSET(0xA222D40)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTFAILED_OFFSET UNITYSDK_OFFSET(0xA222480)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTBINARYRESPONDED_OFFSET UNITYSDK_OFFSET(0xA222890)
#define MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTRESPONDED_OFFSET UNITYSDK_OFFSET(0xA221E30)
#define MIHOYO_SDK_UGCINTERFACE_ONTOKENEXPIRED_OFFSET UNITYSDK_OFFSET(0xA223040)
#define MIHOYO_SDK_UGCINTERFACE_POSTBINARY_OFFSET UNITYSDK_OFFSET(0xA2213D0)
#define MIHOYO_SDK_UGCINTERFACE_POSTHTTPREQUESTTASK_OFFSET UNITYSDK_OFFSET(0xA220940)
#define MIHOYO_SDK_UGCINTERFACE_POST_OFFSET UNITYSDK_OFFSET(0xA221150)
#define MIHOYO_SDK_UGCINTERFACE_RESETTOKENINFO_OFFSET UNITYSDK_OFFSET(0xA221A50)
#define MIHOYO_SDK_UGCINTERFACE_RETRYEXCHANGETOKEN_OFFSET UNITYSDK_OFFSET(0xA221630)
#define MIHOYO_SDK_UGCINTERFACE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA21F760)
#define MIHOYO_SDK_UGCINTERFACE_UPDATETOKENINFO_OFFSET UNITYSDK_OFFSET(0xA223A40)
#define MIHOYO_SDK_UGCINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA21F710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_TypeDefinitionIndex = 43840;

	class UGCInterface : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UGCInterface** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::UGCInterface**)Il2CppClass::FromTypeDefinitionIndex(UGCInterface_TypeDefinitionIndex)->GetStaticField(0x148D0);
		}
		// static const ::System::String* TOKEN_HEADER; // 0x0
		// static const ::System::Int32 DEFAULT_FAILED_CODE = 0xFFFFFFFF; // 0x0
		// static const ::System::String* TOKEN_EXPIRED_HEADER; // 0x0
		// static const ::System::String* DEVICE_ID_HEADER; // 0x0
		// static const ::System::String* DEVICE_ID_METHOD; // 0x0
		// static const ::System::String* UID_HEADER; // 0x0
		// static const ::System::String* REGION_HEADER; // 0x0
		// static const ::System::String* ERROR_CODE_HEADER; // 0x0
		// static const ::System::String* UGC_SET_TOKEN_TASK; // 0x0
		::System::String* m_strToken; // 0x10
		::System::String* m_strAuthKey; // 0x18
		::System::String* m_strDeviceId; // 0x20
		::System::String* m_strTokenHeader; // 0x28
		::MiHoYo::SDK::UGCInterface_UgcInfo* m_ugcInfo; // 0x30
		::System::Boolean m_bOpenLogger; // 0x38
		::System::Int64 m_n64TokenRefreshedTimestampSecs; // 0x40
		::System::Int64 m_n64TokenExpireSecs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::UGCInterface* get_Instance()
		{
			return ((::MiHoYo::SDK::UGCInterface*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::UGCInterface* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::UGCInterface*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void EnableLogger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ENABLELOGGER_OFFSET))(this, a1);
		}

		::System::Void InitUgcInfo(::MiHoYo::SDK::UGCInterface_UgcInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_OFFSET))(this, a1);
		}

		::System::Void InitUgcInfo_1(::System::String* a1, ::System::String* a2, ::System::Int64 a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_INITUGCINFO_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HttpGetCarryToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a6, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8, ::System::Single a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKEN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void HttpGetBinaryCarryToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a6, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8, ::System::Single a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKEN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void HttpGetBinary(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HttpPostCarryToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a7, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9, ::System::Single a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKEN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void HttpPostBinaryCarryToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::Il2CppArray<::System::Byte>* a6, ::System::String* a7, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a8, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a10, ::System::Single a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKEN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void HttpGetCarryTokenImpl(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a7, ::System::Single a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETCARRYTOKENIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void HttpPostCarryTokenImpl(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8, ::System::Single a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTCARRYTOKENIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void HttpGetBinaryCarryTokenImpl(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8, ::System::Single a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARYCARRYTOKENIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void HttpPostBinaryCarryTokenImpl(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::Il2CppArray<::System::Byte>* a6, ::System::String* a7, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a8, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a10, ::System::Single a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARYCARRYTOKENIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void HttpPost(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::String* a3, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a4, ::System::Action* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void HttpGetBinary_1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGETBINARY_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HttpPostBinary(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a5, ::System::Action* a6, ::System::Single a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPPOSTBINARY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HttpGet(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_HTTPGET_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RetryExchangeToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Int32 a4, ::MiHoYo::SDK::NetworkResponseModel* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Int32, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_RETRYEXCHANGETOKEN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean CheckAuthKeyVerifyFailed(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKAUTHKEYVERIFYFAILED_OFFSET))(this, a1);
		}

		::System::Void AdaptCallback(::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>* a1, ::System::String* a2, ::MiHoYo::SDK::NetworkResponseModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcResponseModel*>*, ::System::String*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ADAPTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AdaptBinaryCallback(::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a1, ::System::String* a2, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::String*, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AdaptBinaryCallback_1(::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a1, ::System::String* a2, ::MiHoYo::SDK::NetworkResponseModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::System::String*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ADAPTBINARYCALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckTokenVerifyFailed(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_OFFSET))(this, a1);
		}

		::System::Boolean CheckTokenVerifyFailed_1(::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_1_OFFSET))(this, a1);
		}

		::System::Boolean CheckTokenVerifyFailed_2(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVERIFYFAILED_2_OFFSET))(this, a1);
		}

		::System::Void OnHttpRquestResponded(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTRESPONDED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnHttpRquestBinaryResponded(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPRQUESTBINARYRESPONDED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MiHoYo::SDK::NetworkResponseModel* BinaryModel2Model(::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* a1)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_BINARYMODEL2MODEL_OFFSET))(this, a1);
		}

		::System::Void OnHttpRequestBinaryFailed(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>* a2, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*>*, ::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTBINARYFAILED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnHttpRequestFailed(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2, ::MiHoYo::SDK::NetworkResponseModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONHTTPREQUESTFAILED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PostHttpRequestTask(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_POSTHTTPREQUESTTASK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnExchangeTokenSuccess(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2, ::MiHoYo::SDK::NetworkResponseModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONEXCHANGETOKENSUCCESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTokenExpired(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_ONTOKENEXPIRED_OFFSET))(this, a1);
		}

		::System::Void ExchangeToken(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_EXCHANGETOKEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ResetTokenInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_RESETTOKENINFO_OFFSET))(this);
		}

		::System::Void UpdateTokenInfo(::System::String* a1, ::System::Int64 a2, ::System::String* a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UPDATETOKENINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AutoRenewalToken(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_AUTORENEWALTOKEN_OFFSET))(this, a1);
		}

		::System::Void Logger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_LOGGER_OFFSET))(this, a1);
		}

		::System::Boolean CheckTokenValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENVALID_OFFSET))(this, a1);
		}

		::System::Boolean CheckTokenExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CHECKTOKENEXPIRED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Post(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::String* a3, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a4, ::System::Action* a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_POST_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Collections::IEnumerator* GetBinary(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETBINARY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::IEnumerator* PostBinary(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>* a5, ::System::Action* a6, ::System::Single a7, ::System::Int32 a8)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::Action_3<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_POSTBINARY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Collections::IEnumerator* Get(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* a3, ::System::Action* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>*, ::System::Action*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GET_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* GenerateBinaryResponse(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYRESPONSE_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel* GenerateBinaryTimeoutResponse()
		{
			return ((::MiHoYo::SDK::UGCInterface_UgcBinaryResponseModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEBINARYTIMEOUTRESPONSE_OFFSET))(this);
		}

		::MiHoYo::SDK::NetworkResponseModel* GenerateResponse(::System::String* a1)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATERESPONSE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::NetworkResponseModel* GenerateTimeoutResponse(::System::String* a1)
		{
			return ((::MiHoYo::SDK::NetworkResponseModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATETIMEOUTRESPONSE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CloneHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_CLONEHEADERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GenerateHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEHEADERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GenerateBusinessHeaders(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GENERATEBUSINESSHEADERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AppendHeader(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_APPENDHEADER_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetDeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETDEVICEID_OFFSET))(this);
		}

		::System::Int64 GetNowTimestampSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPSEC_OFFSET))(this);
		}

		::System::Int64 GetNowTimestampMilliSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_GETNOWTIMESTAMPMILLISEC_OFFSET))(this);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_INITENV_OFFSET))(this);
		}
	};
}
