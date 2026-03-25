#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x852E070)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__COMBOSIGN_B__20_0_OFFSET UNITYSDK_OFFSET(0x852E180)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x852E0B0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__GET_INSTANCE_B__10_0_OFFSET UNITYSDK_OFFSET(0x852E0C0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__POSTREQUEST_B__17_1_OFFSET UNITYSDK_OFFSET(0x852E0D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader___c_TypeDefinitionIndex = 37229;

	class MiHoYoSDKUploader___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKUploader___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKUploader___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x12850);
		}
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x12858);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x12860);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x12868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CTOR_OFFSET))(this);
		}

		::System::Void _get_Instance_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__GET_INSTANCE_B__10_0_OFFSET))(this);
		}

		::System::Void _PostRequest_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__POSTREQUEST_B__17_1_OFFSET))(this);
		}

		::System::String* _ComboSign_b__20_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__COMBOSIGN_B__20_0_OFFSET))(this, x);
		}
	};
}
