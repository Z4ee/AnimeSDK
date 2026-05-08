#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A.h"

namespace MoleMole { class UIHollowMainPageContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_3D60E0FFE694D985_METHOD_2_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x14323110)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x143230B0)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x143231C0)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_D516C68C85520F4E_OFFSET UNITYSDK_OFFSET(0x143230C0)
#define CLASS_2_3D60E0FFE694D985_METHOD_2_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x143231D0)
#define CLASS_2_3D60E0FFE694D985__CTOR_OFFSET UNITYSDK_OFFSET(0x14323160)

inline static constexpr unsigned int Class_2_3D60E0FFE694D985_TypeDefinitionIndex = 66673;

class Class_2_3D60E0FFE694D985 : public ::Class_1_3002D7CF5FEE9D3A
{
public:
	::MoleMole::UIHollowMainPageContext* Field_2_0; // 0x90
	::System::Collections::Generic::HashSet_1<::System::UInt64>* Field_2_1; // 0x98
	::System::Int32 Field_2_4; // 0xA0
	::System::Int32 Field_2_3; // 0xA4
	::System::Boolean Field_2_2; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985__CTOR_OFFSET))(this);
	}

	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_2_D516C68C85520F4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_D516C68C85520F4E_OFFSET))(this);
	}

	::System::Void Method_2_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_2_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_AB0E32D900C7A89E_OFFSET))(this);
	}

	::System::Void Method_2_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D60E0FFE694D985_METHOD_2_D56C1A4C75B97C47_OFFSET))(this);
	}
};
