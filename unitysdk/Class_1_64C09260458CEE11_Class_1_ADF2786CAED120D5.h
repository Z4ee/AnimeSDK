#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64C09260458CEE11;
class Class_1_64C09260458CEE11_Class_1_ADF2786CAED120D5_Class_1_3184451133D35984;
class Class_1_90F15F1C45B87C6F;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BFE6E0)
#define CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C0D440)
#define CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C0D2E0)
#define CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0D2B0)

inline static constexpr unsigned int Class_1_64C09260458CEE11_Class_1_ADF2786CAED120D5_TypeDefinitionIndex = 39386;

class Class_1_64C09260458CEE11_Class_1_ADF2786CAED120D5 : public ::System::Object
{
public:
	::Class_1_64C09260458CEE11_Class_1_ADF2786CAED120D5_Class_1_3184451133D35984* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_64C09260458CEE11* a1, ::System::Int32 a2, ::Class_1_90F15F1C45B87C6F* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64C09260458CEE11*, ::System::Int32, ::Class_1_90F15F1C45B87C6F*))((::PBYTE)hIl2Cpp + CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64C09260458CEE11_CLASS_1_ADF2786CAED120D5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
