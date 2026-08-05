#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Enum_3_34A50515BC584E0D.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_163;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_E53BC3B9D19F93F2_METHOD_2_012A5C84D7CE4F2F_OFFSET UNITYSDK_OFFSET(0x12D8E2F0)
#define CLASS_2_E53BC3B9D19F93F2_METHOD_2_291F7996C9359B70_OFFSET UNITYSDK_OFFSET(0x12D8E2E0)
#define CLASS_2_E53BC3B9D19F93F2_METHOD_2_39D7C73693CA5EE7_OFFSET UNITYSDK_OFFSET(0x12D8E460)
#define CLASS_2_E53BC3B9D19F93F2_METHOD_2_704B72A3D9C2FC71_OFFSET UNITYSDK_OFFSET(0x12D8E450)
#define CLASS_2_E53BC3B9D19F93F2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12D8DDF0)
#define CLASS_2_E53BC3B9D19F93F2__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8E240)

inline static constexpr unsigned int Class_2_E53BC3B9D19F93F2_TypeDefinitionIndex = 64676;

class Class_2_E53BC3B9D19F93F2 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_34A50515BC584E0D, ::Class_0_16E4307DCC419505_163<::System::Boolean>*>* Field_2_7; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_000597E145D7A42A<::System::Boolean>*>* Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E53BC3B9D19F93F2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E53BC3B9D19F93F2_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_34A50515BC584E0D, ::Class_0_16E4307DCC419505_163<::System::Boolean>*>* Method_2_291F7996C9359B70()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_34A50515BC584E0D, ::Class_0_16E4307DCC419505_163<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E53BC3B9D19F93F2_METHOD_2_291F7996C9359B70_OFFSET))(this);
	}

	::System::Void Method_2_012A5C84D7CE4F2F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E53BC3B9D19F93F2_METHOD_2_012A5C84D7CE4F2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_704B72A3D9C2FC71(::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_34A50515BC584E0D, ::Class_0_16E4307DCC419505_163<::System::Boolean>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::Enum_3_34A50515BC584E0D, ::Class_0_16E4307DCC419505_163<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E53BC3B9D19F93F2_METHOD_2_704B72A3D9C2FC71_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Boolean>* Method_2_39D7C73693CA5EE7(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_000597E145D7A42A<::System::Boolean>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E53BC3B9D19F93F2_METHOD_2_39D7C73693CA5EE7_OFFSET))(this, a1, a2);
	}
};
