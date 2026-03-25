#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_769;

#define CLASS_1_501C4BB1D2C51D1A_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x8DAEE90)
#define CLASS_1_501C4BB1D2C51D1A_GET_UNIQUEDIALOGUEID_OFFSET UNITYSDK_OFFSET(0x8DAEE60)
#define CLASS_1_501C4BB1D2C51D1A_METHOD_1_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x8DAF2B0)
#define CLASS_1_501C4BB1D2C51D1A_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x8DAEED0)
#define CLASS_1_501C4BB1D2C51D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAEE70)

inline static constexpr unsigned int Class_1_501C4BB1D2C51D1A_TypeDefinitionIndex = 54506;

class Class_1_501C4BB1D2C51D1A : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 _UniqueDialogueID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_FA4F4A67B1C04320_769* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_769*))((::PBYTE)hIl2Cpp + CLASS_1_501C4BB1D2C51D1A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_UniqueDialogueID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_501C4BB1D2C51D1A_GET_UNIQUEDIALOGUEID_OFFSET))(this);
	}

	::System::UInt32 GetRogueActionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_501C4BB1D2C51D1A_GETROGUEACTIONID_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_501C4BB1D2C51D1A_TRIGGERACTION_OFFSET))(this);
	}

	::System::Void Method_1_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_501C4BB1D2C51D1A_METHOD_1_017C915772AE00E9_OFFSET))(this);
	}
};
