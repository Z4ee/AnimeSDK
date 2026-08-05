#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_479;
class Class_1_0AEBFEBDADDA07AC;
class Class_1_DBA4CF8F6B97E9C4;
class Class_2_F5737224A0253470;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED7E191576597E1C_METHOD_1_92897E2EEFA108EB_OFFSET UNITYSDK_OFFSET(0x13C40630)
#define CLASS_1_ED7E191576597E1C_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x13C40E80)
#define CLASS_1_ED7E191576597E1C_METHOD_1_A30FDFFB382B1897_OFFSET UNITYSDK_OFFSET(0x13C408C0)
#define CLASS_1_ED7E191576597E1C_METHOD_1_CEFDAA39F76EFEF9_OFFSET UNITYSDK_OFFSET(0x13C40730)
#define CLASS_1_ED7E191576597E1C_METHOD_1_E1267124F65ECD36_OFFSET UNITYSDK_OFFSET(0x13C40B50)
#define CLASS_1_ED7E191576597E1C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C40510)

inline static constexpr unsigned int Class_1_ED7E191576597E1C_TypeDefinitionIndex = 82136;

class Class_1_ED7E191576597E1C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::Class_1_DBA4CF8F6B97E9C4*>*>* Field_1_2; // 0x10
	::Class_2_F5737224A0253470* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::ProtoScript::NodeState, ::Class_0_16E4307DCC419505_479*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_F5737224A0253470* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F5737224A0253470*))((::PBYTE)hIl2Cpp + CLASS_1_ED7E191576597E1C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_92897E2EEFA108EB(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_ED7E191576597E1C_METHOD_1_92897E2EEFA108EB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CEFDAA39F76EFEF9(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Class_1_0AEBFEBDADDA07AC* a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Class_0_16E4307DCC419505_479*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::Class_0_16E4307DCC419505_479*&))((::PBYTE)hIl2Cpp + CLASS_1_ED7E191576597E1C_METHOD_1_CEFDAA39F76EFEF9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A30FDFFB382B1897(::Class_1_DBA4CF8F6B97E9C4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBA4CF8F6B97E9C4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED7E191576597E1C_METHOD_1_A30FDFFB382B1897_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1267124F65ECD36(::Class_1_DBA4CF8F6B97E9C4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBA4CF8F6B97E9C4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED7E191576597E1C_METHOD_1_E1267124F65ECD36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED7E191576597E1C_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
