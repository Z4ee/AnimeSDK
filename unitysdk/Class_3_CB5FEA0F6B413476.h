#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class Class_1_8289F2785D9AA990;
class Class_3_FCE1BCCAA466DD16;
namespace System { class Action; }

#define CLASS_3_CB5FEA0F6B413476_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF5BEA50)
#define CLASS_3_CB5FEA0F6B413476_METHOD_3_2CC10A68ED6E1C9F_OFFSET UNITYSDK_OFFSET(0xF5BEB30)
#define CLASS_3_CB5FEA0F6B413476_METHOD_3_6B3A947CEB43FC11_OFFSET UNITYSDK_OFFSET(0xF5BEC50)
#define CLASS_3_CB5FEA0F6B413476_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF5BEE00)
#define CLASS_3_CB5FEA0F6B413476_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xF5BEE90)
#define CLASS_3_CB5FEA0F6B413476_METHOD_3_ED72E29907E8D552_OFFSET UNITYSDK_OFFSET(0xF5BEDF0)
#define CLASS_3_CB5FEA0F6B413476_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF5BEA00)
#define CLASS_3_CB5FEA0F6B413476__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5BEAA0)
#define CLASS_3_CB5FEA0F6B413476__CTOR_OFFSET UNITYSDK_OFFSET(0xF5BEB20)

inline static constexpr unsigned int Class_3_CB5FEA0F6B413476_TypeDefinitionIndex = 78319;

class Class_3_CB5FEA0F6B413476 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xA; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_1; // 0x48
	::System::Action* Field_3_4; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_2; // 0x58
	::System::Action* Field_3_5; // 0x60
	::System::Action* Field_3_3; // 0x68
	::MoleMole::Config::BuddyFightModeType Field_3_0; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_GETCLASSID_OFFSET))(this);
	}

	::Class_3_FCE1BCCAA466DD16* Method_3_2CC10A68ED6E1C9F()
	{
		return ((::Class_3_FCE1BCCAA466DD16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_METHOD_3_2CC10A68ED6E1C9F_OFFSET))(this);
	}

	::System::Void Method_3_6B3A947CEB43FC11(::MoleMole::Config::BuddyFightModeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_METHOD_3_6B3A947CEB43FC11_OFFSET))(this, a1);
	}

	::MoleMole::Config::BuddyFightModeType Method_3_ED72E29907E8D552()
	{
		return ((::MoleMole::Config::BuddyFightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_METHOD_3_ED72E29907E8D552_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_CB5FEA0F6B413476* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CB5FEA0F6B413476*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CB5FEA0F6B413476_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
