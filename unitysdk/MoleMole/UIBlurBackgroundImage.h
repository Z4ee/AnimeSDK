#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlurTextureImage.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"

namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1869F000)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1869EFA0)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1869F1D0)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1869F190)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1869EFD0)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1869F210)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1869F320)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1869F330)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1869F420)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurBackgroundImage_TypeDefinitionIndex = 72633;

	class UIBlurBackgroundImage : public ::MoleMole::UIBlurTextureImage
	{
	public:
		::UnityEngine::UI::Image* backgroundImage; // 0x170
		::Sirenix::Serialization::SerializationData serializationData; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::SerializationData get_SerializationData()
		{
			return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_GET_SERIALIZATIONDATA_OFFSET))(this);
		}

		::System::Void set_SerializationData(::Sirenix::Serialization::SerializationData a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_SET_SERIALIZATIONDATA_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
