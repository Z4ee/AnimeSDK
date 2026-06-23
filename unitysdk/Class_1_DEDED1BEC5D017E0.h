#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_253;
class Class_1_2A31B907A2725B54;
class Class_3_90D56F88EBAF454B;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_3E511946045B51DA_OFFSET UNITYSDK_OFFSET(0x18021BE0)
#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_90D9A90632120617_OFFSET UNITYSDK_OFFSET(0x18021AC0)
#define CLASS_1_DEDED1BEC5D017E0_METHOD_1_E447DA9FB5094D7F_OFFSET UNITYSDK_OFFSET(0x18021EC0)

inline static constexpr unsigned int Class_1_DEDED1BEC5D017E0_TypeDefinitionIndex = 41970;

class Class_1_DEDED1BEC5D017E0 : public ::System::Object
{
public:
	static ::Class_1_2A31B907A2725B54* Method_1_90D9A90632120617(::Class_0_16E4307DCC419505_253* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::Class_1_2A31B907A2725B54*(*)(::Class_0_16E4307DCC419505_253*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_90D9A90632120617_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E447DA9FB5094D7F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_E447DA9FB5094D7F_OFFSET))(a1);
	}

	static ::Class_3_90D56F88EBAF454B* Method_1_3E511946045B51DA()
	{
		return ((::Class_3_90D56F88EBAF454B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEDED1BEC5D017E0_METHOD_1_3E511946045B51DA_OFFSET))();
	}
};
