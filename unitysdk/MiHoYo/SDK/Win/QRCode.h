#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define MIHOYO_SDK_WIN_QRCODE_CREATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1DA27C20)
#define MIHOYO_SDK_WIN_QRCODE_ENCODE_OFFSET UNITYSDK_OFFSET(0x1DA27A50)
#define MIHOYO_SDK_WIN_QRCODE_GENERATEQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1DA27490)
#define MIHOYO_SDK_WIN_QRCODE_START_OFFSET UNITYSDK_OFFSET(0x1DA272C0)
#define MIHOYO_SDK_WIN_QRCODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DA27430)
#define MIHOYO_SDK_WIN_QRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA27D30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int QRCode_TypeDefinitionIndex = 21640;

	class QRCode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* url; // 0x18
		::UnityEngine::UI::RawImage* image; // 0x20
		::UnityEngine::Texture2D* encoded; // 0x28
		::System::String* strLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_UPDATE_OFFSET))(this);
		}

		::System::Void GenerateQRImage(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_GENERATEQRIMAGE_OFFSET))(this, content);
		}

		static ::Il2CppArray<::UnityEngine::Color32>* Encode(::System::String* textForEncoding, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_ENCODE_OFFSET))(textForEncoding, width, height);
		}

		::System::Void CreateQRCode(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_QRCODE_CREATEQRCODE_OFFSET))(this, url);
		}
	};
}
