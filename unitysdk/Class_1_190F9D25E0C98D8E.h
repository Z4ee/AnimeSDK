#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_485;

#define CLASS_1_190F9D25E0C98D8E_CLEAR_OFFSET UNITYSDK_OFFSET(0x15FFC390)
#define CLASS_1_190F9D25E0C98D8E_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x15FFC450)
#define CLASS_1_190F9D25E0C98D8E_METHOD_1_7AD0318882400EEE_OFFSET UNITYSDK_OFFSET(0x15FFC3E0)
#define CLASS_1_190F9D25E0C98D8E_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x15FFC460)
#define CLASS_1_190F9D25E0C98D8E__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFC470)

inline static constexpr unsigned int Class_1_190F9D25E0C98D8E_TypeDefinitionIndex = 54236;

class Class_1_190F9D25E0C98D8E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_485* _Owner_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_7AD0318882400EEE(::RPG::GameCore::FixPoint& a1, ::Struct_2_87C8F594A107C13B& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_METHOD_1_7AD0318882400EEE_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_485* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_485*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_485* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_485*))((::PBYTE)hIl2Cpp + CLASS_1_190F9D25E0C98D8E_SET_OWNER_OFFSET))(this, a1);
	}
};
