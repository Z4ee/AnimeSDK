#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_485;
class Class_1_F7FC95052A9BC4D0_Class_3_F4F2D7B5BC717C88;

#define CLASS_1_F7FC95052A9BC4D0_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1562D7B0)
#define CLASS_1_F7FC95052A9BC4D0_METHOD_1_7AD0318882400EEE_OFFSET UNITYSDK_OFFSET(0x1562D720)
#define CLASS_1_F7FC95052A9BC4D0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1562D6D0)
#define CLASS_1_F7FC95052A9BC4D0_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1562D7C0)
#define CLASS_1_F7FC95052A9BC4D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1562D7D0)

inline static constexpr unsigned int Class_1_F7FC95052A9BC4D0_TypeDefinitionIndex = 54241;

class Class_1_F7FC95052A9BC4D0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_485* _Owner_k__BackingField; // 0x10
	::Class_1_F7FC95052A9BC4D0_Class_3_F4F2D7B5BC717C88* KEHLKFIJHGK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7FC95052A9BC4D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7FC95052A9BC4D0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7AD0318882400EEE(::RPG::GameCore::FixPoint& a1, ::Struct_2_87C8F594A107C13B& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_F7FC95052A9BC4D0_METHOD_1_7AD0318882400EEE_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_485* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_485*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7FC95052A9BC4D0_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_485* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_485*))((::PBYTE)hIl2Cpp + CLASS_1_F7FC95052A9BC4D0_SET_OWNER_OFFSET))(this, a1);
	}
};
