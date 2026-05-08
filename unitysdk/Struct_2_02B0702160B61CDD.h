#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C23D26E36224A83.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_02B0702160B61CDD_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x725FB0)
#define STRUCT_2_02B0702160B61CDD_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x725F40)
#define STRUCT_2_02B0702160B61CDD_METHOD_2_20A5465563DAD1F8_OFFSET UNITYSDK_OFFSET(0x725F30)
#define STRUCT_2_02B0702160B61CDD_METHOD_2_63E9917148ACA5A5_OFFSET UNITYSDK_OFFSET(0x725FA0)
#define STRUCT_2_02B0702160B61CDD_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x725E90)

inline static constexpr unsigned int Struct_2_02B0702160B61CDD_TypeDefinitionIndex = 43541;

struct alignas(8) Struct_2_02B0702160B61CDD
{
	::System::Collections::Generic::List_1<::Struct_2_4C23D26E36224A83>* Field_2_0; // 0x10

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_02B0702160B61CDD_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_20A5465563DAD1F8()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02B0702160B61CDD_METHOD_2_20A5465563DAD1F8_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02B0702160B61CDD_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_63E9917148ACA5A5(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_02B0702160B61CDD_METHOD_2_63E9917148ACA5A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_02B0702160B61CDD_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}
};
