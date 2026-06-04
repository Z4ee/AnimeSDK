#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_ATTACHMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC50FF0)
#define SPINE_ATTACHMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC51070)
#define SPINE_ATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC51050)
#define SPINE_ATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC51000)

namespace Spine
{
	inline static constexpr unsigned int Attachment_TypeDefinitionIndex = 36712;

	class Attachment : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::Attachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_TOSTRING_OFFSET))(this);
		}
	};
}
