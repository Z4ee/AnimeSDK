#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D46794D4B5408AA2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH_METHOD_1_EA727EED653D961C_OFFSET UNITYSDK_OFFSET(0x14842B50)
#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x14842A70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int EntityCameraViewConfigByAnisotropicStretch_TypeDefinitionIndex = 78285;

	class EntityCameraViewConfigByAnisotropicStretch : public ::System::Object
	{
	public:
		::System::String* mainPointHorizontal; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* attachPointsHorizontal; // 0x18
		::System::Single stretchRatioHorizontal; // 0x20
		::System::String* mainPointVertical; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* attachPointsVertical; // 0x30
		::System::Single stretchRatioVertical; // 0x38
		::UnityEngine::Vector3 offset; // 0x3C
		::System::Single fallbackVerticalRatio; // 0x48
		::System::Single heightExtension; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EA727EED653D961C(::System::UInt32 a1, ::Struct_2_D46794D4B5408AA2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_D46794D4B5408AA2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH_METHOD_1_EA727EED653D961C_OFFSET))(this, a1, a2);
		}
	};
}
