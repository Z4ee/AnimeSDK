#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C90DFD825B265C7A.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_A4B56D729654E7CA_METHOD_2_522DB491A85B7539_OFFSET UNITYSDK_OFFSET(0xA6476D0)
#define CLASS_2_A4B56D729654E7CA_METHOD_2_6704FAB2B0E9B556_OFFSET UNITYSDK_OFFSET(0xA6478B0)
#define CLASS_2_A4B56D729654E7CA_METHOD_2_A9DA2B71AAF03E32_OFFSET UNITYSDK_OFFSET(0xA647680)
#define CLASS_2_A4B56D729654E7CA_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xA6478A0)
#define CLASS_2_A4B56D729654E7CA__CTOR_OFFSET UNITYSDK_OFFSET(0xA647670)

inline static constexpr unsigned int Class_2_A4B56D729654E7CA_TypeDefinitionIndex = 47999;

class Class_2_A4B56D729654E7CA : public ::Class_1_C90DFD825B265C7A
{
public:
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A4B56D729654E7CA__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A9DA2B71AAF03E32(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A4B56D729654E7CA_METHOD_2_A9DA2B71AAF03E32_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_522DB491A85B7539(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A4B56D729654E7CA_METHOD_2_522DB491A85B7539_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4B56D729654E7CA_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_6704FAB2B0E9B556(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A4B56D729654E7CA_METHOD_2_6704FAB2B0E9B556_OFFSET))(this, a1);
	}
};
