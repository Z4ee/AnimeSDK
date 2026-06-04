#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5B228A4605C15E47;
class Class_1_D70A30D666F20D90;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A73898434F70EE29_METHOD_1_3929B78E4BE3F573_OFFSET UNITYSDK_OFFSET(0xBF45C40)
#define CLASS_1_A73898434F70EE29_METHOD_1_861DFC6C6D85A3EC_OFFSET UNITYSDK_OFFSET(0xBF457F0)
#define CLASS_1_A73898434F70EE29_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0xBF456D0)
#define CLASS_1_A73898434F70EE29__CTOR_OFFSET UNITYSDK_OFFSET(0xBF46320)

inline static constexpr unsigned int Class_1_A73898434F70EE29_TypeDefinitionIndex = 69013;

class Class_1_A73898434F70EE29 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A73898434F70EE29__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A73898434F70EE29_METHOD_1_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_1_861DFC6C6D85A3EC(::UnityEngine::Vector3 a1, ::System::Single a2, ::Class_1_5B228A4605C15E47* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Class_1_5B228A4605C15E47*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A73898434F70EE29_METHOD_1_861DFC6C6D85A3EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3929B78E4BE3F573(::Class_1_D70A30D666F20D90* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A73898434F70EE29_METHOD_1_3929B78E4BE3F573_OFFSET))(this, a1, a2);
	}
};
