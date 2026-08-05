#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGData.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE619F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EE613B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1EE611F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_GET_SPOTS_OFFSET UNITYSDK_OFFSET(0x1EE610E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1EE61320)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_SET_SPOTS_OFFSET UNITYSDK_OFFSET(0x1EE610F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EE614E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EE61560)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1EE61570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1EE616B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1EE618A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE613C0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGSpots_TypeDefinitionIndex = 39552;

	class CGSpots : public ::FluffyUnderware::Curvy::Generator::CGData
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> spots; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGSpot>* points)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGSpot>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_1_OFFSET))(this, points);
		}

		::System::Void _ctor_2(::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> spots)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_2_OFFSET))(this, spots);
		}

		::System::Void _ctor_3(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>* spots)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_3_OFFSET))(this, spots);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>*>* spots)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGSpot>*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_4_OFFSET))(this, spots);
		}

		::System::Void _ctor_5(::FluffyUnderware::Curvy::Generator::CGSpots* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGSpots*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS__CTOR_5_OFFSET))(this, source);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> get_Spots()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_GET_SPOTS_OFFSET))(this);
		}

		::System::Void set_Spots(::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::FluffyUnderware::Curvy::Generator::CGSpot>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_SET_SPOTS_OFFSET))(this, value);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGSpot>* get_Points()
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGSpot>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_Points(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGSpot>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGSpot>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_SET_POINTS_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSPOTS_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
