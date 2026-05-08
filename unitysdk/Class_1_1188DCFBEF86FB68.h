#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_218C0117A15C9CB2.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1188DCFBEF86FB68_METHOD_1_340AC27426A555C3_OFFSET UNITYSDK_OFFSET(0x105829C0)
#define CLASS_1_1188DCFBEF86FB68_METHOD_1_BDE55053EB71D291_OFFSET UNITYSDK_OFFSET(0x10582840)
#define CLASS_1_1188DCFBEF86FB68_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x10582720)
#define CLASS_1_1188DCFBEF86FB68_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x105827A0)
#define CLASS_1_1188DCFBEF86FB68__CTOR_OFFSET UNITYSDK_OFFSET(0x10582710)

inline static constexpr unsigned int Class_1_1188DCFBEF86FB68_TypeDefinitionIndex = 51683;

class Class_1_1188DCFBEF86FB68 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::Class_1_1EA8435E138F2E03* Field_1_0; // 0x18
	::Enum_3_218C0117A15C9CB2 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188DCFBEF86FB68__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188DCFBEF86FB68_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188DCFBEF86FB68_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_1_BDE55053EB71D291(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188DCFBEF86FB68_METHOD_1_BDE55053EB71D291_OFFSET))(this, a1);
	}

	::System::Void Method_1_340AC27426A555C3(::Class_1_1EA8435E138F2E03* a1, ::System::Int32 a2, ::Enum_3_218C0117A15C9CB2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Int32, ::Enum_3_218C0117A15C9CB2))((::PBYTE)hIl2Cpp + CLASS_1_1188DCFBEF86FB68_METHOD_1_340AC27426A555C3_OFFSET))(this, a1, a2, a3);
	}
};
