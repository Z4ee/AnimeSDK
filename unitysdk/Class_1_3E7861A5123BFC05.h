#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0761BC6DC5342529.h"
#include "unitysdk/Enum_3_C52D8E01F122AD4F.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_35063B957DD57B6E.h"
#include "unitysdk/System/Object.h"

class Class_1_0340E479638D8801;
class Class_1_32D1736C0D56C181;
class Class_1_3308AFC75E7420BE;
class Class_1_768129C4FCD9994B;
class Class_1_B71396686248E706;
class Class_1_D7D6091F64F551A7;
class Class_2_0114679E2864BD47;
namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_3E7861A5123BFC05_METHOD_1_1FD82764F6E56D10_OFFSET UNITYSDK_OFFSET(0x1939FA10)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_44F84431158D67E5_OFFSET UNITYSDK_OFFSET(0x1939FA80)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x1939F8D0)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_BC89BE467141BB84_OFFSET UNITYSDK_OFFSET(0x1939FE60)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1939FFC0)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_DA56A652C597A321_OFFSET UNITYSDK_OFFSET(0x1939F9B0)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1939FFD0)
#define CLASS_1_3E7861A5123BFC05_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1939FA70)
#define CLASS_1_3E7861A5123BFC05__CTOR_OFFSET UNITYSDK_OFFSET(0x1939F8F0)

inline static constexpr unsigned int Class_1_3E7861A5123BFC05_TypeDefinitionIndex = 42621;

class Class_1_3E7861A5123BFC05 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::Class_1_3308AFC75E7420BE* Field_1_7; // 0x18
	::MoleMole::Config::ConfigHollowInteractBase* Field_1_10; // 0x20
	::Class_1_768129C4FCD9994B* Field_1_0; // 0x28
	::System::Action* Field_1_11; // 0x30
	::Class_1_B71396686248E706* Field_1_14; // 0x38
	::System::Action* Field_1_4; // 0x40
	::Class_1_32D1736C0D56C181* Field_1_13; // 0x48
	::Class_1_0340E479638D8801* Field_1_9; // 0x50
	::System::String* Field_1_6; // 0x58
	::MoleMole::HollowChessboard::HollowCell Field_1_15; // 0x60
	::System::Boolean Field_1_8; // 0x6C
	::System::Boolean Field_1_12; // 0x6D

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigHollowInteractBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::System::Int64 Method_1_DA56A652C597A321(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_DA56A652C597A321_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1FD82764F6E56D10(::Class_2_0114679E2864BD47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0114679E2864BD47*))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_1FD82764F6E56D10_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_C52D8E01F122AD4F Method_1_44F84431158D67E5(::Struct_2_35063B957DD57B6E a1)
	{
		return ((::Enum_3_C52D8E01F122AD4F(*)(::PVOID, ::Struct_2_35063B957DD57B6E))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_44F84431158D67E5_OFFSET))(this, a1);
	}

	::Enum_3_0761BC6DC5342529 Method_1_BC89BE467141BB84(::Class_1_D7D6091F64F551A7* a1)
	{
		return ((::Enum_3_0761BC6DC5342529(*)(::PVOID, ::Class_1_D7D6091F64F551A7*))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_BC89BE467141BB84_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E7861A5123BFC05_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
