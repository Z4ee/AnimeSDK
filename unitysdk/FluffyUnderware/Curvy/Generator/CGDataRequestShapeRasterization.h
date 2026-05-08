#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGDataRequestRasterization.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGDataRequestRasterization_ModeEnum.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BC19610)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BC197E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_GET_PATHF_OFFSET UNITYSDK_OFFSET(0x1BC190A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_GET_RELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x1BC19080)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_SET_PATHF_OFFSET UNITYSDK_OFFSET(0x1BC191D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_SET_RELATIVEDISTANCES_OFFSET UNITYSDK_OFFSET(0x1BC19090)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BC198B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BC19430)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC19250)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGDataRequestShapeRasterization_TypeDefinitionIndex = 37303;

	class CGDataRequestShapeRasterization : public ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> relativeDistances; // 0x28

		::System::Void _ctor(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> relativeDistance, ::System::Single start, ::System::Single rasterizedRelativeLength, ::System::Int32 resolution, ::System::Single angle, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum mode)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION__CTOR_OFFSET))(this, relativeDistance, start, rasterizedRelativeLength, resolution, angle, mode);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Single>* pathF, ::System::Single start, ::System::Single rasterizedRelativeLength, ::System::Int32 resolution, ::System::Single angle, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum mode)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization_ModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION__CTOR_1_OFFSET))(this, pathF, start, rasterizedRelativeLength, resolution, angle, mode);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> get_RelativeDistances()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_GET_RELATIVEDISTANCES_OFFSET))(this);
		}

		::System::Void set_RelativeDistances(::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_SET_RELATIVEDISTANCES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_PathF()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_GET_PATHF_OFFSET))(this);
		}

		::System::Void set_PathF(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_SET_PATHF_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREQUESTSHAPERASTERIZATION_TOSTRING_OFFSET))(this);
		}
	};
}
