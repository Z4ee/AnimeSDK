#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeTypeMember.h"

namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODEMEMBEREVENT_GET_IMPLEMENTATIONTYPES_OFFSET UNITYSDK_OFFSET(0x1B3E7640)
#define SYSTEM_CODEDOM_CODEMEMBEREVENT_GET_PRIVATEIMPLEMENTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B3E7680)
#define SYSTEM_CODEDOM_CODEMEMBEREVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3E7700)
#define SYSTEM_CODEDOM_CODEMEMBEREVENT_SET_PRIVATEIMPLEMENTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B3E76C0)
#define SYSTEM_CODEDOM_CODEMEMBEREVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B3E7740)
#define SYSTEM_CODEDOM_CODEMEMBEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E7600)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMemberEvent_TypeDefinitionIndex = 4262;

	class CodeMemberEvent : public ::System::CodeDom::CodeTypeMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBEREVENT__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_ImplementationTypes()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBEREVENT_GET_IMPLEMENTATIONTYPES_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReference* get_PrivateImplementationType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBEREVENT_GET_PRIVATEIMPLEMENTATIONTYPE_OFFSET))(this);
		}

		::System::Void set_PrivateImplementationType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBEREVENT_SET_PRIVATEIMPLEMENTATIONTYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBEREVENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBEREVENT_SET_TYPE_OFFSET))(this, value);
		}
	};
}
