#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8506270)
#define MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS23_0__REQUESTWATERMARKDATA_B__0_OFFSET UNITYSDK_OFFSET(0x85064C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK___c__DisplayClass23_0_TypeDefinitionIndex = 37024;

	class MiHoYoSDK___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::Il2CppArray<::System::Byte>*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestWatermarkData_b__0(::System::Int32 code, ::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS23_0__REQUESTWATERMARKDATA_B__0_OFFSET))(this, code, texture);
		}
	};
}
