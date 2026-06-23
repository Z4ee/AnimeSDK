#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_VIEWOBJECTCOMPONENTIDGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x142F8750)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectUtils_ViewObjectComponentIDGenerator_TypeDefinitionIndex = 78699;

	class ViewObjectUtils_ViewObjectComponentIDGenerator : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__CurrentMaxId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectUtils_ViewObjectComponentIDGenerator_TypeDefinitionIndex)->GetStaticField(0x10180);
		}

		static ::System::UInt32 Generate()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS_VIEWOBJECTCOMPONENTIDGENERATOR_GENERATE_OFFSET))();
		}
	};
}
