#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGDataRequestParameter.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGDataRequestRasterization_ModeEnum.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D57B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D5850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D58F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D56F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D5640)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGDataRequestRasterization_TypeDefinitionIndex = 38926;

	class CGDataRequestRasterization : public ::FluffyUnderware::Curvy::Generator::CGDataRequestParameter
	{
	public:
		::System::Single AngleThreshold; // 0x10
		::System::Single Start; // 0x14
		::System::Single RasterizedRelativeLength; // 0x18
		::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum Mode; // 0x1C
		::System::Int32 Resolution; // 0x20

		::System::Void _ctor(::System::Single start, ::System::Single rasterizedRelativeLength, ::System::Int32 resolution, ::System::Single angle, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION__CTOR_OFFSET))(this, start, rasterizedRelativeLength, resolution, angle, mode);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION__CTOR_1_OFFSET))(this, source);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTRASTERIZATION_TOSTRING_OFFSET))(this);
		}
	};
}
