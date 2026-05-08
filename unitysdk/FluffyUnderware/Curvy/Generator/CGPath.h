#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGShape.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_COPY_OFFSET UNITYSDK_OFFSET(0x1C362C70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C362B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_GET_DIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1C362630)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1C362750)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_INTERPOLATEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C363240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_INTERPOLATE_1_OFFSET UNITYSDK_OFFSET(0x1C3630A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_INTERPOLATE_OFFSET UNITYSDK_OFFSET(0x1C362DB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_SET_DIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1C362640)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1C362880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C362A30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C362910)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGPath_TypeDefinitionIndex = 37334;

	class CGPath : public ::FluffyUnderware::Curvy::Generator::CGShape
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> directions; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CGPath* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGPath*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH__CTOR_1_OFFSET))(this, source);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> get_Directions()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_GET_DIRECTIONS_OFFSET))(this);
		}

		::System::Void set_Directions(::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_SET_DIRECTIONS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Direction()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Boolean Dispose(::System::Boolean disposing)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::Void Copy(::FluffyUnderware::Curvy::Generator::CGPath* dest, ::FluffyUnderware::Curvy::Generator::CGPath* source)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGPath*, ::FluffyUnderware::Curvy::Generator::CGPath*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_COPY_OFFSET))(dest, source);
		}

		::System::Void Interpolate(::System::Single f, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& direction, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_INTERPOLATE_OFFSET))(this, f, position, direction, up);
		}

		::System::Void Interpolate_1(::System::Single f, ::System::Single angleF, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& dir, ::UnityEngine::Vector3& up)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_INTERPOLATE_1_OFFSET))(this, f, angleF, pos, dir, up);
		}

		::UnityEngine::Vector3 InterpolateDirection(::System::Single f)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGPATH_INTERPOLATEDIRECTION_OFFSET))(this, f);
		}
	};
}
