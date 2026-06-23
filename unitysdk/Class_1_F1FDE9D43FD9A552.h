#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_81427F9B3D4E62BC.h"
#include "unitysdk/System/Object.h"

class Class_4_DA19DD65175B97CF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F1FDE9D43FD9A552_METHOD_1_0F7BEDD6CAAFC4B5_OFFSET UNITYSDK_OFFSET(0x15CB40F0)
#define CLASS_1_F1FDE9D43FD9A552_METHOD_1_1DB8CA58A3E2E34E_OFFSET UNITYSDK_OFFSET(0x15CB40E0)
#define CLASS_1_F1FDE9D43FD9A552_METHOD_1_45D197291EDF0658_OFFSET UNITYSDK_OFFSET(0x15CB3F00)
#define CLASS_1_F1FDE9D43FD9A552_METHOD_1_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x15CB4100)
#define CLASS_1_F1FDE9D43FD9A552_METHOD_1_AF081070273CE162_1_OFFSET UNITYSDK_OFFSET(0x15CB4110)
#define CLASS_1_F1FDE9D43FD9A552_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x15CB3EE0)
#define CLASS_1_F1FDE9D43FD9A552__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB40D0)

inline static constexpr unsigned int Class_1_F1FDE9D43FD9A552_TypeDefinitionIndex = 64783;

class Class_1_F1FDE9D43FD9A552 : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::Class_4_DA19DD65175B97CF*>* Field_1_1; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::Struct_2_81427F9B3D4E62BC Method_1_45D197291EDF0658()
	{
		return ((::Struct_2_81427F9B3D4E62BC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552_METHOD_1_45D197291EDF0658_OFFSET))(this);
	}

	::System::Void Method_1_1DB8CA58A3E2E34E(::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::Class_4_DA19DD65175B97CF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::Class_4_DA19DD65175B97CF*>*))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552_METHOD_1_1DB8CA58A3E2E34E_OFFSET))(this, a1);
	}

	::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::Class_4_DA19DD65175B97CF*>* Method_1_0F7BEDD6CAAFC4B5()
	{
		return ((::System::Func_2<::MoleMole::HollowChessboard::HollowCell, ::Class_4_DA19DD65175B97CF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552_METHOD_1_0F7BEDD6CAAFC4B5_OFFSET))(this);
	}

	::System::Void Method_1_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552_METHOD_1_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162_1()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FDE9D43FD9A552_METHOD_1_AF081070273CE162_1_OFFSET))(this);
	}
};
