#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CameraFrustumPlanesProvider; }

#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D603F80)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D603FC0)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C___CCTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x1D603FD0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CameraFrustumPlanesProvider___c_TypeDefinitionIndex = 39059;

	class CameraFrustumPlanesProvider___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::CameraFrustumPlanesProvider___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::CameraFrustumPlanesProvider___c**)Il2CppClass::FromTypeDefinitionIndex(CameraFrustumPlanesProvider___c_TypeDefinitionIndex)->GetStaticField(0x292E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CameraFrustumPlanesProvider* __cctor_b__13_0()
		{
			return ((::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C___CCTOR_B__13_0_OFFSET))(this);
		}
	};
}
