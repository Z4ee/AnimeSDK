#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C90DFD825B265C7A.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_6F05FDC47057A625_METHOD_2_322F615CC58F0114_OFFSET UNITYSDK_OFFSET(0x148D68C0)
#define CLASS_2_6F05FDC47057A625_METHOD_2_6704FAB2B0E9B556_OFFSET UNITYSDK_OFFSET(0x148D6A80)
#define CLASS_2_6F05FDC47057A625_METHOD_2_A9DA2B71AAF03E32_OFFSET UNITYSDK_OFFSET(0x148D6870)
#define CLASS_2_6F05FDC47057A625_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x148D6B10)
#define CLASS_2_6F05FDC47057A625__CTOR_OFFSET UNITYSDK_OFFSET(0x148D6860)

inline static constexpr unsigned int Class_2_6F05FDC47057A625_TypeDefinitionIndex = 67896;

class Class_2_6F05FDC47057A625 : public ::Class_1_C90DFD825B265C7A
{
public:
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6F05FDC47057A625__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A9DA2B71AAF03E32(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6F05FDC47057A625_METHOD_2_A9DA2B71AAF03E32_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_322F615CC58F0114(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6F05FDC47057A625_METHOD_2_322F615CC58F0114_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_6704FAB2B0E9B556(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_6F05FDC47057A625_METHOD_2_6704FAB2B0E9B556_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F05FDC47057A625_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
