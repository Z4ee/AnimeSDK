#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194B1210)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__COMBOSIGN_B__20_0_OFFSET UNITYSDK_OFFSET(0x194B1320)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194B1250)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__GET_INSTANCE_B__10_0_OFFSET UNITYSDK_OFFSET(0x194B1260)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__POSTREQUEST_B__17_1_OFFSET UNITYSDK_OFFSET(0x194B1270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader___c_TypeDefinitionIndex = 46925;

	class MiHoYoSDKUploader___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x56880);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x56888);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x56890);
		}
		static ::MiHoYo::SDK::MiHoYoSDKUploader___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKUploader___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader___c_TypeDefinitionIndex)->GetStaticField(0x56898);
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

		::System::String* _ComboSign_b__20_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__COMBOSIGN_B__20_0_OFFSET))(this, a1);
		}
	};
}
