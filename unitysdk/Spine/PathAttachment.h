#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace System { class String; }

#define SPINE_PATHATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1F4A1670)
#define SPINE_PATHATTACHMENT_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1F4A1510)
#define SPINE_PATHATTACHMENT_GET_CONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x1F4A1530)
#define SPINE_PATHATTACHMENT_GET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x1F4A14F0)
#define SPINE_PATHATTACHMENT_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1F4A1520)
#define SPINE_PATHATTACHMENT_SET_CONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x1F4A1540)
#define SPINE_PATHATTACHMENT_SET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x1F4A1500)
#define SPINE_PATHATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4A15B0)
#define SPINE_PATHATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A1550)

namespace Spine
{
	inline static constexpr unsigned int PathAttachment_TypeDefinitionIndex = 33497;

	class PathAttachment : public ::Spine::VertexAttachment
	{
	public:
		::Il2CppArray<::System::Single>* lengths; // 0x38
		::System::Boolean constantSpeed; // 0x40
		::System::Boolean closed; // 0x41

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::PathAttachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathAttachment*))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT__CTOR_1_OFFSET))(this, other);
		}

		::Il2CppArray<::System::Single>* get_Lengths()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_LENGTHS_OFFSET))(this);
		}

		::System::Void set_Lengths(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_LENGTHS_OFFSET))(this, value);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_CLOSED_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_CLOSED_OFFSET))(this, value);
		}

		::System::Boolean get_ConstantSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_CONSTANTSPEED_OFFSET))(this);
		}

		::System::Void set_ConstantSpeed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_CONSTANTSPEED_OFFSET))(this, value);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
