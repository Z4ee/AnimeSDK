#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_413ABC1894817F1B.h"

namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_467B94E57096EA85_METHOD_2_11A2663BE22D8C49_OFFSET UNITYSDK_OFFSET(0x1135E450)
#define CLASS_2_467B94E57096EA85_METHOD_2_44AC7A52AAB92116_OFFSET UNITYSDK_OFFSET(0x1135E3D0)
#define CLASS_2_467B94E57096EA85_METHOD_2_5C783A6FB0C11043_OFFSET UNITYSDK_OFFSET(0x1135DFA0)
#define CLASS_2_467B94E57096EA85_METHOD_2_B7070232125649E6_OFFSET UNITYSDK_OFFSET(0x1135E300)
#define CLASS_2_467B94E57096EA85_METHOD_2_E9A129E0C8207233_OFFSET UNITYSDK_OFFSET(0x1135DDD0)
#define CLASS_2_467B94E57096EA85__CTOR_OFFSET UNITYSDK_OFFSET(0x1135E3C0)

inline static constexpr unsigned int Class_2_467B94E57096EA85_TypeDefinitionIndex = 64568;

class Class_2_467B94E57096EA85 : public ::Class_1_413ABC1894817F1B
{
public:
	::Il2CppArray<::System::Int32>* Field_2_2; // 0x28
	::Il2CppArray<::System::Boolean>* Field_2_0; // 0x30
	::Il2CppArray<::System::Int32>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_467B94E57096EA85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A129E0C8207233(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_467B94E57096EA85_METHOD_2_E9A129E0C8207233_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_2_5C783A6FB0C11043(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_467B94E57096EA85_METHOD_2_5C783A6FB0C11043_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B7070232125649E6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_467B94E57096EA85_METHOD_2_B7070232125649E6_OFFSET))(this);
	}

	::System::Void Method_2_44AC7A52AAB92116(::System::Collections::Generic::List_1<::System::Version*>* P0, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_2_467B94E57096EA85_METHOD_2_44AC7A52AAB92116_OFFSET))(this, P0, P1);
	}

	::Il2CppArray<::System::Int32>* Method_2_11A2663BE22D8C49(::System::Int32 P0, ::System::Int32 P1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_467B94E57096EA85_METHOD_2_11A2663BE22D8C49_OFFSET))(this, P0, P1);
	}
};
