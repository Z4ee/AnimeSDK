#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_407;

#define CLASS_1_190F9D25E0C98D8E_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA73040)
#define CLASS_1_190F9D25E0C98D8E_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xAA73100)
#define CLASS_1_190F9D25E0C98D8E_METHOD_1_7AD0318882400EEE_OFFSET UNITYSDK_OFFSET(0xAA73090)
#define CLASS_1_190F9D25E0C98D8E_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xAA73110)
#define CLASS_1_190F9D25E0C98D8E__CTOR_OFFSET UNITYSDK_OFFSET(0xAA73120)

inline static constexpr unsigned int Class_1_190F9D25E0C98D8E_TypeDefinitionIndex = 49803;

class Class_1_190F9D25E0C98D8E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_407* _Owner_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_7AD0318882400EEE(::RPG::GameCore::FixPoint& a1, ::Struct_2_310B46602BEB4586& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_310B46602BEB4586&))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_METHOD_1_7AD0318882400EEE_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_407* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_407*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_407* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_407*))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_SET_OWNER_OFFSET))(this, value);
	}
};
