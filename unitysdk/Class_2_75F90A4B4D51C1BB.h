#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/Enum_3_71D92415DF2BC99D.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_97;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_291F7996C9359B70_OFFSET UNITYSDK_OFFSET(0x104F64E0)
#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_2B62F7D428B21646_OFFSET UNITYSDK_OFFSET(0x104F66C0)
#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_39D7C73693CA5EE7_OFFSET UNITYSDK_OFFSET(0x104F64F0)
#define CLASS_2_75F90A4B4D51C1BB_METHOD_2_704B72A3D9C2FC71_OFFSET UNITYSDK_OFFSET(0x104F6810)
#define CLASS_2_75F90A4B4D51C1BB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x104F5FB0)
#define CLASS_2_75F90A4B4D51C1BB__CTOR_OFFSET UNITYSDK_OFFSET(0x104F63F0)

inline static constexpr unsigned int Class_2_75F90A4B4D51C1BB_TypeDefinitionIndex = 62012;

class Class_2_75F90A4B4D51C1BB : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x70
	::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_71D92415DF2BC99D, ::Class_0_16E4307DCC419505_97<::System::Boolean>*>* Field_2_1; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_000597E145D7A42A<::System::Boolean>*>* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_71D92415DF2BC99D, ::Class_0_16E4307DCC419505_97<::System::Boolean>*>* Method_2_291F7996C9359B70()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_71D92415DF2BC99D, ::Class_0_16E4307DCC419505_97<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_291F7996C9359B70_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Boolean>* Method_2_39D7C73693CA5EE7(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_000597E145D7A42A<::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_39D7C73693CA5EE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2B62F7D428B21646(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_2B62F7D428B21646_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_704B72A3D9C2FC71(::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_71D92415DF2BC99D, ::Class_0_16E4307DCC419505_97<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_71D92415DF2BC99D, ::Class_0_16E4307DCC419505_97<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_2_75F90A4B4D51C1BB_METHOD_2_704B72A3D9C2FC71_OFFSET))(this, a1);
	}
};
