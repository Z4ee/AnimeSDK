#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0E050)
#define SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__DISPLAYCLASS16_0__FINDSERIALIZABLEMEMBERS_B__1_OFFSET UNITYSDK_OFFSET(0x1FB0E060)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterUtilities___c__DisplayClass16_0_TypeDefinitionIndex = 7513;

	class FormatterUtilities___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* member; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindSerializableMembers_b__1(::System::Reflection::MemberInfo* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERUTILITIES___C__DISPLAYCLASS16_0__FINDSERIALIZABLEMEMBERS_B__1_OFFSET))(this, n);
		}
	};
}
