#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"

class Class_0_16E4307DCC419505_562;

#define CLASS_3_2A4351F9637A49DE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11A7B0E0)
#define CLASS_3_2A4351F9637A49DE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11A7B240)
#define CLASS_3_2A4351F9637A49DE_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11A7B1C0)
#define CLASS_3_2A4351F9637A49DE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11A7B090)
#define CLASS_3_2A4351F9637A49DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A7B130)
#define CLASS_3_2A4351F9637A49DE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7B1B0)

inline static constexpr unsigned int Class_3_2A4351F9637A49DE_TypeDefinitionIndex = 61727;

class Class_3_2A4351F9637A49DE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x48; // 0x0
	::Class_0_16E4307DCC419505_562* Field_3_1; // 0x48
	::MoleMole::Battle::GamePlayLogicKind Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2A4351F9637A49DE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4351F9637A49DE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4351F9637A49DE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4351F9637A49DE_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_2A4351F9637A49DE* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2A4351F9637A49DE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2A4351F9637A49DE_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A4351F9637A49DE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
