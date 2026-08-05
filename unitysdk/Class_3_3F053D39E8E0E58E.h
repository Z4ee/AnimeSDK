#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class XWeaponTrailCustom; }

#define CLASS_3_3F053D39E8E0E58E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16F58030)
#define CLASS_3_3F053D39E8E0E58E_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16F58190)
#define CLASS_3_3F053D39E8E0E58E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16F581E0)
#define CLASS_3_3F053D39E8E0E58E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x16F58110)
#define CLASS_3_3F053D39E8E0E58E_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16F58270)
#define CLASS_3_3F053D39E8E0E58E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16F57FD0)
#define CLASS_3_3F053D39E8E0E58E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F58080)
#define CLASS_3_3F053D39E8E0E58E__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58100)

inline static constexpr unsigned int Class_3_3F053D39E8E0E58E_TypeDefinitionIndex = 68178;

class Class_3_3F053D39E8E0E58E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x7D; // 0x0
	::Il2CppArray<::MoleMole::Battle::XWeaponTrailCustom*>* Field_3_0; // 0x48
	::System::Boolean Field_3_2; // 0x50
	::System::Boolean Field_3_3; // 0x51
	::System::Single Field_3_1; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_3F053D39E8E0E58E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3F053D39E8E0E58E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F053D39E8E0E58E_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
