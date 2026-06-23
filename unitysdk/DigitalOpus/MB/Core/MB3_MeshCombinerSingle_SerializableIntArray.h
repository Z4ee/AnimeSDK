#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SERIALIZABLEINTARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3ABD90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SERIALIZABLEINTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39E4C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_SerializableIntArray_TypeDefinitionIndex = 90634;

	class MB3_MeshCombinerSingle_SerializableIntArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SERIALIZABLEINTARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_SERIALIZABLEINTARRAY__CTOR_1_OFFSET))(this, len);
		}
	};
}
