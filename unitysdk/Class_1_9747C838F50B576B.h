#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17B92CF4857957F9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_9747C838F50B576B_METHOD_1_3D223B5C368D393F_1_OFFSET UNITYSDK_OFFSET(0x1EC4B830)
#define CLASS_1_9747C838F50B576B_METHOD_1_3D223B5C368D393F_OFFSET UNITYSDK_OFFSET(0x1EC4B0B0)
#define CLASS_1_9747C838F50B576B_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1EC4BF10)
#define CLASS_1_9747C838F50B576B__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3B710)

inline static constexpr unsigned int Class_1_9747C838F50B576B_TypeDefinitionIndex = 44112;

class Class_1_9747C838F50B576B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::Int32>* ELNOBFNMJOB; // 0x10
	::Class_1_17B92CF4857957F9* JLDPIPDHIOG; // 0x18

	::System::Void _ctor(::Class_1_17B92CF4857957F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17B92CF4857957F9*))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D223B5C368D393F(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_METHOD_1_3D223B5C368D393F_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D223B5C368D393F_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_METHOD_1_3D223B5C368D393F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9747C838F50B576B_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}
};
