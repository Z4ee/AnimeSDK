#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_CONVEXHULL1_CREATE_OFFSET UNITYSDK_OFFSET(0x1C555450)
#define DEST_MATH_CONVEXHULL1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5557E0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConvexHull1_TypeDefinitionIndex = 33104;

	class ConvexHull1 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL1__CTOR_OFFSET))(this);
		}

		static ::System::Void Create(::Il2CppArray<::System::Single>* vertices, ::System::Single epsilon, ::System::Int32& dimension, ::Il2CppArray<::System::Int32>*& indices)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + DEST_MATH_CONVEXHULL1_CREATE_OFFSET))(vertices, epsilon, dimension, indices);
		}
	};
}
