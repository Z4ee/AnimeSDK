#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;
namespace RPG::Client { class GridFightRoleConfig; }

#define CLASS_2_8131E492236D04A8_METHOD_2_3AD3892A6FF53792_OFFSET UNITYSDK_OFFSET(0x16750080)
#define CLASS_2_8131E492236D04A8_METHOD_2_AAE1F5499F37A0DA_OFFSET UNITYSDK_OFFSET(0x1674FF10)
#define CLASS_2_8131E492236D04A8_UPDATE_OFFSET UNITYSDK_OFFSET(0x1674FEC0)
#define CLASS_2_8131E492236D04A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1674FEB0)

inline static constexpr unsigned int Class_2_8131E492236D04A8_TypeDefinitionIndex = 62106;

class Class_2_8131E492236D04A8 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8_UPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AAE1F5499F37A0DA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8_METHOD_2_AAE1F5499F37A0DA_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightRoleConfig* Method_2_3AD3892A6FF53792(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8_METHOD_2_3AD3892A6FF53792_OFFSET))(this, a1, a2);
	}
};
