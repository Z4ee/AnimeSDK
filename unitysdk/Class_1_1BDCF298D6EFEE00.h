#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_143;
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET UNITYSDK_OFFSET(0x110D90F0)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_DBA643F68876B17B_OFFSET UNITYSDK_OFFSET(0x110D8E80)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_E2C112BCBB96A834_OFFSET UNITYSDK_OFFSET(0x110D8FD0)
#define CLASS_1_1BDCF298D6EFEE00_METHOD_1_EB8C698EAD89D26C_OFFSET UNITYSDK_OFFSET(0x110D8C30)
#define CLASS_1_1BDCF298D6EFEE00__CTOR_OFFSET UNITYSDK_OFFSET(0x110D8FC0)

inline static constexpr unsigned int Class_1_1BDCF298D6EFEE00_TypeDefinitionIndex = 80149;

class Class_1_1BDCF298D6EFEE00 : public ::System::Object
{
public:
	::Struct_2_E147DFD2A4EE8B0B Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_143* Field_1_1; // 0x28

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

	::System::Boolean Method_1_E2C112BCBB96A834(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_E2C112BCBB96A834_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4159E7FA36E53247(::Struct_2_E147DFD2A4EE8B0B a1, ::SimpleJSON::JSONNode* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_1BDCF298D6EFEE00_METHOD_1_4159E7FA36E53247_OFFSET))(this, a1, a2);
	}
};
