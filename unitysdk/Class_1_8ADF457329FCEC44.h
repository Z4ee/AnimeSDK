#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61_1;

#define CLASS_1_8ADF457329FCEC44_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16810E60)
#define CLASS_1_8ADF457329FCEC44_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x16810F80)
#define CLASS_1_8ADF457329FCEC44_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16810EF0)
#define CLASS_1_8ADF457329FCEC44_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x168110B0)
#define CLASS_1_8ADF457329FCEC44_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x168110A0)
#define CLASS_1_8ADF457329FCEC44__CTOR_OFFSET UNITYSDK_OFFSET(0x16810E50)

inline static constexpr unsigned int Class_1_8ADF457329FCEC44_TypeDefinitionIndex = 32933;

class Class_1_8ADF457329FCEC44 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5BE136E515AF9A61_1*>* Field_1_3; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::Il2CppArray<::Class_1_5BE136E515AF9A61_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5BE136E515AF9A61_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_8ADF457329FCEC44__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADF457329FCEC44_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADF457329FCEC44_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8ADF457329FCEC44_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADF457329FCEC44_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ADF457329FCEC44_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
