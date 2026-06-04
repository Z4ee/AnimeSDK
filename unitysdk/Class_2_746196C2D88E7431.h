#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;
namespace RPG::Client { class GridFightRoleConfig; }

#define CLASS_2_746196C2D88E7431_METHOD_2_359C9225CA04A09B_OFFSET UNITYSDK_OFFSET(0x134D7CD0)
#define CLASS_2_746196C2D88E7431_METHOD_2_534761CA6322A6B3_OFFSET UNITYSDK_OFFSET(0x134D7B60)
#define CLASS_2_746196C2D88E7431_UPDATE_OFFSET UNITYSDK_OFFSET(0x134D7B10)
#define CLASS_2_746196C2D88E7431__CTOR_OFFSET UNITYSDK_OFFSET(0x134D7B00)
#define CLASS_2_746196C2D88E7431___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x134D7EF0)

inline static constexpr unsigned int Class_2_746196C2D88E7431_TypeDefinitionIndex = 60812;

class Class_2_746196C2D88E7431 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431_UPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_534761CA6322A6B3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431_METHOD_2_534761CA6322A6B3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightRoleConfig* Method_2_359C9225CA04A09B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431_METHOD_2_359C9225CA04A09B_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431___IFIXBASEPROXY_UPDATE_OFFSET))(this, a1);
	}
};
