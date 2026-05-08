#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class COctStream; }
namespace QWER { class IPropertySerializerOctData; }

#define QWER_CPROPERTYOCTSTREAMEXT_POP_OFFSET UNITYSDK_OFFSET(0x1C533820)
#define QWER_CPROPERTYOCTSTREAMEXT_PUSH_OFFSET UNITYSDK_OFFSET(0x1C533740)

namespace QWER
{
	inline static constexpr unsigned int CPropertyOctStreamExt_TypeDefinitionIndex = 9686;

	class CPropertyOctStreamExt : public ::System::Object
	{
	public:
		static ::QWER::COctStream* Push(::QWER::COctStream* os, ::System::Byte btPropertyTag, ::QWER::IPropertySerializerOctData* data)
		{
			return ((::QWER::COctStream*(*)(::QWER::COctStream*, ::System::Byte, ::QWER::IPropertySerializerOctData*))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOCTSTREAMEXT_PUSH_OFFSET))(os, btPropertyTag, data);
		}

		static ::QWER::COctStream* Pop(::QWER::COctStream* os, ::System::Byte btPropertyTag, ::QWER::IPropertySerializerOctData* data)
		{
			return ((::QWER::COctStream*(*)(::QWER::COctStream*, ::System::Byte, ::QWER::IPropertySerializerOctData*))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOCTSTREAMEXT_POP_OFFSET))(os, btPropertyTag, data);
		}
	};
}
