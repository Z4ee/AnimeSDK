#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_2_B5C26CAF86EF077B;
class Class_3_301DB96170A54A53;

#define CLASS_1_20759A7169A29048_METHOD_1_9529558230CDD8EC_OFFSET UNITYSDK_OFFSET(0x17D73FD0)
#define CLASS_1_20759A7169A29048_METHOD_1_AD9D9812B0D507B3_OFFSET UNITYSDK_OFFSET(0x17D73F50)
#define CLASS_1_20759A7169A29048_METHOD_1_DFDC8B0EF9883FD8_OFFSET UNITYSDK_OFFSET(0x17D73EA0)
#define CLASS_1_20759A7169A29048__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D74130)

inline static constexpr unsigned int Class_1_20759A7169A29048_TypeDefinitionIndex = 47348;

class Class_1_20759A7169A29048 : public ::System::Object
{
public:
	static ::Class_2_B5C26CAF86EF077B** StaticGet_Field_1_0()
	{
		return (::Class_2_B5C26CAF86EF077B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20759A7169A29048_TypeDefinitionIndex)->GetStaticField(0x5E340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20759A7169A29048__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_DFDC8B0EF9883FD8()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_20759A7169A29048_METHOD_1_DFDC8B0EF9883FD8_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_355* Method_1_AD9D9812B0D507B3()
	{
		return ((::Class_0_16E4307DCC419505_355*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20759A7169A29048_METHOD_1_AD9D9812B0D507B3_OFFSET))();
	}

	static ::System::Void Method_1_9529558230CDD8EC(::Class_3_301DB96170A54A53* a1)
	{
		return ((::System::Void(*)(::Class_3_301DB96170A54A53*))((::PBYTE)hIl2Cpp + CLASS_1_20759A7169A29048_METHOD_1_9529558230CDD8EC_OFFSET))(a1);
	}
};
