#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MemberInfo; }
namespace System::Text { class StringBuilder; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0x1B2CB7D0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP_APPENDMEMBER_OFFSET UNITYSDK_OFFSET(0x1B2CB880)
#define FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2CC7A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CB240)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTObjectDump_TypeDefinitionIndex = 25840;

	class DTObjectDump : public ::System::Object
	{
	public:
		// static const ::System::Int32 INDENTSPACES = 0x5; // 0x0
		::System::String* mIndent; // 0x10
		::System::Object* mObject; // 0x18
		::System::Text::StringBuilder* mSB; // 0x20

		::System::Void _ctor(::System::Object* o, ::System::Int32 indent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP__CTOR_OFFSET))(this, o, indent);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP_TOSTRING_OFFSET))(this);
		}

		::System::Void AppendHeader(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP_APPENDHEADER_OFFSET))(this, name);
		}

		::System::Void AppendMember(::System::Reflection::MemberInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTOBJECTDUMP_APPENDMEMBER_OFFSET))(this, info);
		}
	};
}
