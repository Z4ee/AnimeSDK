#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_6E4CF1852C17A8C7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_E5F4D5325711214C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12544C60)
#define CLASS_2_E5F4D5325711214C_METHOD_2_279CBFD53B59C3B1_OFFSET UNITYSDK_OFFSET(0x16188150)
#define CLASS_2_E5F4D5325711214C_METHOD_2_D24EF79E293914CD_OFFSET UNITYSDK_OFFSET(0x16188440)
#define CLASS_2_E5F4D5325711214C_METHOD_2_E1595FBBE66ADF57_OFFSET UNITYSDK_OFFSET(0x12544F80)
#define CLASS_2_E5F4D5325711214C_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12544C20)
#define CLASS_2_E5F4D5325711214C_UPDATE_OFFSET UNITYSDK_OFFSET(0x12544CA0)
#define CLASS_2_E5F4D5325711214C__CTOR_OFFSET UNITYSDK_OFFSET(0x12544E50)

inline static constexpr unsigned int Class_2_E5F4D5325711214C_TypeDefinitionIndex = 69787;

class Class_2_E5F4D5325711214C : public ::Foundation::SingletonDisposable_1<::Class_2_E5F4D5325711214C*>
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_6E4CF1852C17A8C7*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_6E4CF1852C17A8C7*>* Field_2_0; // 0x18
	::System::Collections::Generic::Stack_1<::Class_1_6E4CF1852C17A8C7*>* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1595FBBE66ADF57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C_METHOD_2_E1595FBBE66ADF57_OFFSET))(this);
	}

	::Class_1_6E4CF1852C17A8C7* Method_2_279CBFD53B59C3B1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_6E4CF1852C17A8C7*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C_METHOD_2_279CBFD53B59C3B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D24EF79E293914CD(::Class_1_6E4CF1852C17A8C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E4CF1852C17A8C7*))((::PBYTE)hIl2Cpp + CLASS_2_E5F4D5325711214C_METHOD_2_D24EF79E293914CD_OFFSET))(this, a1);
	}
};
