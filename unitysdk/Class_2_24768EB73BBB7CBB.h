#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DBA4CF8F6B97E9C4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/ProtoScript/NodeState.h"

class Class_0_16E4307DCC419505_479;
class Class_1_0AEBFEBDADDA07AC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_24768EB73BBB7CBB_METHOD_2_32147F675BFCE3D9_OFFSET UNITYSDK_OFFSET(0x14E48990)
#define CLASS_2_24768EB73BBB7CBB__CTOR_OFFSET UNITYSDK_OFFSET(0x14E48870)

inline static constexpr unsigned int Class_2_24768EB73BBB7CBB_TypeDefinitionIndex = 72519;

class Class_2_24768EB73BBB7CBB : public ::Class_1_DBA4CF8F6B97E9C4
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_479*>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::ProtoScript::NodeState, ::Class_0_16E4307DCC419505_479*>* Field_2_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_2_24768EB73BBB7CBB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_32147F675BFCE3D9(::Class_1_0AEBFEBDADDA07AC* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Class_0_16E4307DCC419505_479*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::Class_0_16E4307DCC419505_479*&))((::PBYTE)hIl2Cpp + CLASS_2_24768EB73BBB7CBB_METHOD_2_32147F675BFCE3D9_OFFSET))(this, a1, a2, a3);
	}
};
