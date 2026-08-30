#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class RecordOperation; }
namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_B87448D5E720C3DE_GET_EXTRAPARAMOBJ_OFFSET UNITYSDK_OFFSET(0xF3AF80)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8354E0)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x3ADEA90)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x3ADEB60)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3ADEB10)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_5C08064B028A139F_OFFSET UNITYSDK_OFFSET(0x1837B810)
#define STRUCT_2_B87448D5E720C3DE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3ADEBB0)
#define STRUCT_2_B87448D5E720C3DE_SET_EXTRAPARAMOBJ_OFFSET UNITYSDK_OFFSET(0x3A13A80)
#define STRUCT_2_B87448D5E720C3DE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3ADEBC0)

inline static constexpr unsigned int Struct_2_B87448D5E720C3DE_TypeDefinitionIndex = 59153;

struct alignas(8) Struct_2_B87448D5E720C3DE
{
	::System::Single MFCHJFPOCIA; // 0x10
	::System::UInt32 FGIGJGGFIOP; // 0x14
	::RPG::GameCore::TurnState MEPFOEEGBEA; // 0x18
	::System::UInt32 FIFCCHKEHBB; // 0x1C
	::System::UInt32 OCOGFJKLICJ; // 0x20
	::System::UInt32 IEBGNBBLFMD; // 0x24
	::RPG::GameCore::OperationType IAIGJBJCFJO; // 0x28
	::System::Int32 KBAPBCNJHDB; // 0x2C
	::System::Object* _ExtraParamObj_k__BackingField; // 0x30
	::System::String* PLPLGNDLIPM; // 0x38

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Object* get_ExtraParamObj()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_GET_EXTRAPARAMOBJ_OFFSET))(this);
	}

	::System::Void set_ExtraParamObj(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_SET_EXTRAPARAMOBJ_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_TOSTRING_OFFSET))(this);
	}

	static ::Struct_2_B87448D5E720C3DE Method_2_5C08064B028A139F(::RPG::GameCore::RecordOperation* a1)
	{
		return ((::Struct_2_B87448D5E720C3DE(*)(::RPG::GameCore::RecordOperation*))((::PBYTE)hIl2Cpp + STRUCT_2_B87448D5E720C3DE_METHOD_2_5C08064B028A139F_OFFSET))(a1);
	}
};
