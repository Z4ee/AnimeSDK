#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2090B77B5C7838F2;
namespace RPG::Client { class UIController; }

#define CLASS_1_E4C931B4E144AE4B_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x19BF9330)
#define CLASS_1_E4C931B4E144AE4B_METHOD_1_E94A4944AC0DBEB0_OFFSET UNITYSDK_OFFSET(0x19BF87F0)
#define CLASS_1_E4C931B4E144AE4B_METHOD_1_F6F8677413173B00_OFFSET UNITYSDK_OFFSET(0x19BF8410)
#define CLASS_1_E4C931B4E144AE4B__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF9380)

inline static constexpr unsigned int Class_1_E4C931B4E144AE4B_TypeDefinitionIndex = 77470;

class Class_1_E4C931B4E144AE4B : public ::System::Object
{
public:
	::RPG::Client::UIController* EGEMDGDMPHF; // 0x10
	::System::Single JBLEPAHMNHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4C931B4E144AE4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F6F8677413173B00(::Class_2_2090B77B5C7838F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_E4C931B4E144AE4B_METHOD_1_F6F8677413173B00_OFFSET))(this, a1);
	}

	::System::Void Method_1_E94A4944AC0DBEB0(::System::Single a1, ::Class_2_2090B77B5C7838F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_E4C931B4E144AE4B_METHOD_1_E94A4944AC0DBEB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_2090B77B5C7838F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_E4C931B4E144AE4B_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
