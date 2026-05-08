#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlexBuffers { class IFlexBufferMapBuilder; }
namespace FlexBuffers { class IFlexBufferVectorBuilder; }
namespace System { template <typename T> class Action_1; }

#define FLEXBUFFERS_FLEXBUFFERBUILDER_MAP_OFFSET UNITYSDK_OFFSET(0x1B2110C0)
#define FLEXBUFFERS_FLEXBUFFERBUILDER_VECTOR_OFFSET UNITYSDK_OFFSET(0x1B211180)
#define FLEXBUFFERS_FLEXBUFFERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B211240)

namespace FlexBuffers
{
	inline static constexpr unsigned int FlexBufferBuilder_TypeDefinitionIndex = 8756;

	class FlexBufferBuilder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERBUILDER__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* Map(::System::Action_1<::FlexBuffers::IFlexBufferMapBuilder*>* map)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Action_1<::FlexBuffers::IFlexBufferMapBuilder*>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERBUILDER_MAP_OFFSET))(map);
		}

		static ::Il2CppArray<::System::Byte>* Vector(::System::Action_1<::FlexBuffers::IFlexBufferVectorBuilder*>* vector)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Action_1<::FlexBuffers::IFlexBufferVectorBuilder*>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_FLEXBUFFERBUILDER_VECTOR_OFFSET))(vector);
		}
	};
}
