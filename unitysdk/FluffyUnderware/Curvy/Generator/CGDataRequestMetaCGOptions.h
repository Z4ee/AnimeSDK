#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGDataRequestParameter.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D225A40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D225AD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D225B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D225A20)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGDataRequestMetaCGOptions_TypeDefinitionIndex = 38948;

	class CGDataRequestMetaCGOptions : public ::FluffyUnderware::Curvy::Generator::CGDataRequestParameter
	{
	public:
		::System::Boolean IncludeControlPoints; // 0x10
		::System::Boolean CheckExtendedUV; // 0x11
		::System::Boolean CheckMaterialID; // 0x12
		::System::Boolean CheckHardEdges; // 0x13

		::System::Void _ctor(::System::Boolean checkEdges, ::System::Boolean checkMaterials, ::System::Boolean includeCP, ::System::Boolean extendedUV)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS__CTOR_OFFSET))(this, checkEdges, checkMaterials, includeCP, extendedUV);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTMETACGOPTIONS_TOSTRING_OFFSET))(this);
		}
	};
}
