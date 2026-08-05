#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
class Class_1_2A31B907A2725B54;
class Class_3_90D56F88EBAF454B;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_2C31E9FA63537B58_OFFSET UNITYSDK_OFFSET(0x14301E90)
#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_3E511946045B51DA_OFFSET UNITYSDK_OFFSET(0x14301EF0)
#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_90D9A90632120617_OFFSET UNITYSDK_OFFSET(0x143021D0)

inline static constexpr unsigned int Class_1_DEDED1BEC5D017E0_TypeDefinitionIndex = 85607;

class Class_1_DEDED1BEC5D017E0 : public ::System::Object
{
public:
	static ::System::Void Method_1_2C31E9FA63537B58(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_2C31E9FA63537B58_OFFSET))(a1);
	}

	static ::Class_1_2A31B907A2725B54* Method_1_90D9A90632120617(::Class_0_16E4307DCC419505_280* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::Class_1_2A31B907A2725B54*(*)(::Class_0_16E4307DCC419505_280*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_90D9A90632120617_OFFSET))(a1, a2);
	}

	static ::Class_3_90D56F88EBAF454B* Method_1_3E511946045B51DA()
	{
		return ((::Class_3_90D56F88EBAF454B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_3E511946045B51DA_OFFSET))();
	}
};
