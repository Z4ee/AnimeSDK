#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIQRCODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x13FF2360)
#define MOLEMOLE_UIQRCODE_CREATEQRCODE_OFFSET UNITYSDK_OFFSET(0x13FF2BE0)
#define MOLEMOLE_UIQRCODE_GENERATEQRIMAGE_OFFSET UNITYSDK_OFFSET(0x13FF25E0)
#define MOLEMOLE_UIQRCODE_METHOD_5_5EF18AEB1B1089EF_OFFSET UNITYSDK_OFFSET(0x13FF2D40)
#define MOLEMOLE_UIQRCODE_START_OFFSET UNITYSDK_OFFSET(0x13FF2510)
#define MOLEMOLE_UIQRCODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x13FF2550)
#define MOLEMOLE_UIQRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF2F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIQRCode_TypeDefinitionIndex = 80803;

	class UIQRCode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* url; // 0x18
		::UnityEngine::UI::RawImage* image; // 0x20
		::UnityEngine::Texture2D* encoded; // 0x28
		::System::String* strLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_UPDATE_OFFSET))(this);
		}

		::System::Void GenerateQRImage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_GENERATEQRIMAGE_OFFSET))(this, a1);
		}

		::System::Void CreateQRCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_CREATEQRCODE_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Color32>* Method_5_5EF18AEB1B1089EF(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_METHOD_5_5EF18AEB1B1089EF_OFFSET))(a1, a2, a3);
		}
	};
}
