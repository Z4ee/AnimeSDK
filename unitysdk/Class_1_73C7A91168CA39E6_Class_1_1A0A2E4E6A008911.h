#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911_METHOD_1_4075A8C8DF62FC16_OFFSET UNITYSDK_OFFSET(0x166D45F0)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911_METHOD_1_7CB2E169C8DF8FE3_OFFSET UNITYSDK_OFFSET(0x166D44F0)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911__CTOR_OFFSET UNITYSDK_OFFSET(0x166D18B0)

inline static constexpr unsigned int Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911_TypeDefinitionIndex = 28985;

class Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_7CB2E169C8DF8FE3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911_METHOD_1_7CB2E169C8DF8FE3_OFFSET))(this);
	}

	::System::String* Method_1_4075A8C8DF62FC16()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911_METHOD_1_4075A8C8DF62FC16_OFFSET))(this);
	}
};
