#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONCOMPONENTUTILS_GET_NEXTID_OFFSET UNITYSDK_OFFSET(0x1058F4F0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONCOMPONENTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1058F580)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonComponentUtils_TypeDefinitionIndex = 80531;

	class DonjonComponentUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__IDGen()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DonjonComponentUtils_TypeDefinitionIndex)->GetStaticField(0x113F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONCOMPONENTUTILS__CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_NextID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONCOMPONENTUTILS_GET_NEXTID_OFFSET))();
		}
	};
}
