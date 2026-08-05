#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class Polynomial; }

#define DEST_MATH_ROOTFINDER_POLYROOTFINDER_BISECTION_OFFSET UNITYSDK_OFFSET(0x1EE95C40)
#define DEST_MATH_ROOTFINDER_POLYROOTFINDER_FIND_OFFSET UNITYSDK_OFFSET(0x1EE96050)
#define DEST_MATH_ROOTFINDER_POLYROOTFINDER_GET_ROOTS_OFFSET UNITYSDK_OFFSET(0x1EE95BD0)
#define DEST_MATH_ROOTFINDER_POLYROOTFINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE95BE0)

namespace Dest::Math
{
	inline static constexpr unsigned int RootFinder_PolyRootFinder_TypeDefinitionIndex = 35409;

	class RootFinder_PolyRootFinder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _roots; // 0x10
		::System::Int32 _count; // 0x18
		::System::Single _epsilon; // 0x1C
		::System::Int32 _maxRoot; // 0x20

		::System::Void _ctor(::System::Single epsilon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYROOTFINDER__CTOR_OFFSET))(this, epsilon);
		}

		::Il2CppArray<::System::Single>* get_Roots()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYROOTFINDER_GET_ROOTS_OFFSET))(this);
		}

		::System::Boolean Bisection(::Dest::Math::Polynomial* poly, ::System::Single xMin, ::System::Single xMax, ::System::Int32 digits, ::System::Single& root)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Polynomial*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYROOTFINDER_BISECTION_OFFSET))(this, poly, xMin, xMax, digits, root);
		}

		::System::Boolean Find(::Dest::Math::Polynomial* poly, ::System::Single xMin, ::System::Single xMax, ::System::Int32 digits)
		{
			return ((::System::Boolean(*)(::PVOID, ::Dest::Math::Polynomial*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_ROOTFINDER_POLYROOTFINDER_FIND_OFFSET))(this, poly, xMin, xMax, digits);
		}
	};
}
