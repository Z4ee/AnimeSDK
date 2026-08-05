#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_174;
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET UNITYSDK_OFFSET(0x14BA0B30)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_7A61686311F801A1_OFFSET UNITYSDK_OFFSET(0x14BA0A20)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_CA4BE6C7E64D0A7D_OFFSET UNITYSDK_OFFSET(0x14BA0690)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_DBA643F68876B17B_OFFSET UNITYSDK_OFFSET(0x14BA08D0)
#define CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA0A10)

inline static constexpr unsigned int Class_1_1BDCF298D6EFEE00_TypeDefinitionIndex = 48740;

class Class_1_1BDCF298D6EFEE00 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_174* Field_1_0; // 0x10
	::Struct_2_174BD6D3EB04B2EE Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CA4BE6C7E64D0A7D(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_CA4BE6C7E64D0A7D_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_DBA643F68876B17B()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_DBA643F68876B17B_OFFSET))(this);
	}

	::System::Boolean Method_1_7A61686311F801A1(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_7A61686311F801A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4159E7FA36E53247(::Struct_2_174BD6D3EB04B2EE a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET))(this, a1, a2);
	}
};
