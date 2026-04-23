#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;
namespace RPG::Client { class GridFightRoleConfig; }

#define CLASS_2_8131E492236D04A8_METHOD_2_3AD3892A6FF53792_OFFSET UNITYSDK_OFFSET(0x11B07130)
#define CLASS_2_8131E492236D04A8_METHOD_2_B35B6EE597C3E17C_OFFSET UNITYSDK_OFFSET(0x11B06FD0)
#define CLASS_2_8131E492236D04A8_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B06F80)
#define CLASS_2_8131E492236D04A8__CTOR_OFFSET UNITYSDK_OFFSET(0x11B06F70)
#define CLASS_2_8131E492236D04A8___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B07340)

inline static constexpr unsigned int Class_2_8131E492236D04A8_TypeDefinitionIndex = 59877;

class Class_2_8131E492236D04A8 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8_UPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B35B6EE597C3E17C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8_METHOD_2_B35B6EE597C3E17C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightRoleConfig* Method_2_3AD3892A6FF53792(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8_METHOD_2_3AD3892A6FF53792_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
