#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONCOMPONENTUTILS_GET_NEXTID_OFFSET UNITYSDK_OFFSET(0x11EAEB70)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONCOMPONENTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EAEC00)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonComponentUtils_TypeDefinitionIndex = 52988;

	class DonjonComponentUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__IDGen()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DonjonComponentUtils_TypeDefinitionIndex)->GetStaticField(0x10F80);
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
