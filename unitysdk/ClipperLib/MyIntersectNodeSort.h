#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class IntersectNode; }

#define CLIPPERLIB_MYINTERSECTNODESORT_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CFFBC50)
#define CLIPPERLIB_MYINTERSECTNODESORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE8FF0)

namespace ClipperLib
{
	inline static constexpr unsigned int MyIntersectNodeSort_TypeDefinitionIndex = 32782;

	class MyIntersectNodeSort : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_MYINTERSECTNODESORT__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::ClipperLib::IntersectNode* node1, ::ClipperLib::IntersectNode* node2)
		{
			return ((::System::Int32(*)(::PVOID, ::ClipperLib::IntersectNode*, ::ClipperLib::IntersectNode*))((::PBYTE)hIl2Cpp + CLIPPERLIB_MYINTERSECTNODESORT_COMPARE_OFFSET))(this, node1, node2);
		}
	};
}
