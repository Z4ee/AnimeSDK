#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2090B77B5C7838F2;
namespace RPG::Client { class UIController; }

#define CLASS_1_90A62EEB17C991B2_METHOD_1_416CA756A303C223_OFFSET UNITYSDK_OFFSET(0x155617E0)
#define CLASS_1_90A62EEB17C991B2_METHOD_1_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x15562500)
#define CLASS_1_90A62EEB17C991B2_METHOD_1_C24CEFDF6C098100_OFFSET UNITYSDK_OFFSET(0x15561B30)
#define CLASS_1_90A62EEB17C991B2__CTOR_OFFSET UNITYSDK_OFFSET(0x15562550)

inline static constexpr unsigned int Class_1_90A62EEB17C991B2_TypeDefinitionIndex = 77942;

class Class_1_90A62EEB17C991B2 : public ::System::Object
{
public:
	::RPG::Client::UIController* EGEMDGDMPHF; // 0x10
	::System::Single JBLEPAHMNHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90A62EEB17C991B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_416CA756A303C223(::Class_2_2090B77B5C7838F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_90A62EEB17C991B2_METHOD_1_416CA756A303C223_OFFSET))(this, a1);
	}

	::System::Void Method_1_C24CEFDF6C098100(::System::Single a1, ::Class_2_2090B77B5C7838F2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_90A62EEB17C991B2_METHOD_1_C24CEFDF6C098100_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_98511BB23D2E3748(::Class_2_2090B77B5C7838F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_1_90A62EEB17C991B2_METHOD_1_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
