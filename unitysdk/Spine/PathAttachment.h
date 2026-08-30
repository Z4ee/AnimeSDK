#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/VertexAttachment.h"

namespace Spine { class Attachment; }
namespace System { class String; }

#define SPINE_PATHATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1E5DEF60)
#define SPINE_PATHATTACHMENT_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1E5DEE80)
#define SPINE_PATHATTACHMENT_GET_CONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x1E5DEEA0)
#define SPINE_PATHATTACHMENT_GET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x1E5DEE60)
#define SPINE_PATHATTACHMENT_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1E5DEE90)
#define SPINE_PATHATTACHMENT_SET_CONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x1E5DEEB0)
#define SPINE_PATHATTACHMENT_SET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x1E5DEE70)
#define SPINE_PATHATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5DEEC0)
#define SPINE_PATHATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D6530)

namespace Spine
{
	inline static constexpr unsigned int PathAttachment_TypeDefinitionIndex = 38360;

	class PathAttachment : public ::Spine::VertexAttachment
	{
	public:
		::Il2CppArray<::System::Single>* lengths; // 0x38
		::System::Boolean constantSpeed; // 0x40
		::System::Boolean closed; // 0x41

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::PathAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathAttachment*))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_Lengths()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_LENGTHS_OFFSET))(this);
		}

		::System::Void set_Lengths(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_LENGTHS_OFFSET))(this, a1);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_CLOSED_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_CLOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_ConstantSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_GET_CONSTANTSPEED_OFFSET))(this);
		}

		::System::Void set_ConstantSpeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_SET_CONSTANTSPEED_OFFSET))(this, a1);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
