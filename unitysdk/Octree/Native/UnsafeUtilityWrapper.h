#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_1_OFFSET UNITYSDK_OFFSET(0x167F1C20)
#define OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_OFFSET UNITYSDK_OFFSET(0x167F1AE0)
#define OCTREE_NATIVE_UNSAFEUTILITYWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x167F1C40)

namespace Octree::Native
{
	inline static constexpr unsigned int UnsafeUtilityWrapper_TypeDefinitionIndex = 78657;

	class UnsafeUtilityWrapper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITYWRAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void MemMove(::System::Void* from, ::System::Void* to, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_OFFSET))(from, to, length);
		}

		static ::System::Void MemMove_1(::System::Void* buffer, ::System::Int32 from, ::System::Int32 to, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_UNSAFEUTILITYWRAPPER_MEMMOVE_1_OFFSET))(buffer, from, to, length);
		}
	};
}
