#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;

#define CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB969740)
#define CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__DISPLAYCLASS9_0___CREATEATTRIBUTELEVELS_B__0_OFFSET UNITYSDK_OFFSET(0xB9699B0)

inline static constexpr unsigned int Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c__DisplayClass9_0_TypeDefinitionIndex = 79741;

class Class_1_6C2E97D5633F6538_Class_1_593814F64F8EFEBE___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_121* targetAttributeLevels; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CreateAttributeLevels_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_CLASS_1_593814F64F8EFEBE___C__DISPLAYCLASS9_0___CREATEATTRIBUTELEVELS_B__0_OFFSET))(this, a1);
	}
};
