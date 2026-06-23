#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_291;
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET UNITYSDK_OFFSET(0xB7D72A0)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_DBA643F68876B17B_OFFSET UNITYSDK_OFFSET(0xB7D7150)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_E2C112BCBB96A834_OFFSET UNITYSDK_OFFSET(0xB7D73C0)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_EB8C698EAD89D26C_OFFSET UNITYSDK_OFFSET(0xB7D6F00)
#define CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D7290)

inline static constexpr unsigned int Class_1_1BDCF298D6EFEE00_TypeDefinitionIndex = 82528;

class Class_1_1BDCF298D6EFEE00 : public ::System::Object
{
public:
	::Struct_2_174BD6D3EB04B2EE Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_291* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EB8C698EAD89D26C(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_EB8C698EAD89D26C_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_DBA643F68876B17B()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_DBA643F68876B17B_OFFSET))(this);
	}

	::System::Boolean Method_1_4159E7FA36E53247(::Struct_2_174BD6D3EB04B2EE a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E2C112BCBB96A834(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_E2C112BCBB96A834_OFFSET))(this, a1);
	}
};
