#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E184AC50951905CE_Struct_2_E658502528B7C034_3.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class PhotoGraphSystem; }

#define CLASS_1_E184AC50951905CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16894970)
#define CLASS_1_E184AC50951905CE_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x16895600)
#define CLASS_1_E184AC50951905CE_METHOD_1_235779E3A1B24A75_1_OFFSET UNITYSDK_OFFSET(0x16895520)
#define CLASS_1_E184AC50951905CE_METHOD_1_235779E3A1B24A75_OFFSET UNITYSDK_OFFSET(0x168954A0)
#define CLASS_1_E184AC50951905CE_METHOD_1_3A5E4A6C895B69D8_OFFSET UNITYSDK_OFFSET(0x16895250)
#define CLASS_1_E184AC50951905CE_METHOD_1_9D967D80C41C7781_1_OFFSET UNITYSDK_OFFSET(0x168955A0)
#define CLASS_1_E184AC50951905CE_METHOD_1_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0x16895450)
#define CLASS_1_E184AC50951905CE_METHOD_1_AAD21DE195D05736_1_OFFSET UNITYSDK_OFFSET(0x16894E70)
#define CLASS_1_E184AC50951905CE_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x16894A90)
#define CLASS_1_E184AC50951905CE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x168949F0)
#define CLASS_1_E184AC50951905CE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16894A40)
#define CLASS_1_E184AC50951905CE_SET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x16895610)
#define CLASS_1_E184AC50951905CE__CTOR_OFFSET UNITYSDK_OFFSET(0x16894960)

inline static constexpr unsigned int Class_1_E184AC50951905CE_TypeDefinitionIndex = 61032;

class Class_1_E184AC50951905CE : public ::System::Object
{
public:
	::RPG::Client::PhotoGraphSystem* CFKHNPGEAJA; // 0x10
	::System::Single LGHKGAKFNDM; // 0x18
	::System::Boolean _IsRecording_k__BackingField; // 0x1C
	::System::Boolean ACHIHIAHLOE; // 0x1D
	::System::Boolean KMHDACLOFJI; // 0x1E

	::System::Void _ctor(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_E184AC50951905CE_Struct_2_E658502528B7C034_3 Method_1_3A5E4A6C895B69D8()
	{
		return ((::Class_1_E184AC50951905CE_Struct_2_E658502528B7C034_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_3A5E4A6C895B69D8_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_AAD21DE195D05736_1_OFFSET))(this);
	}

	::System::Void Method_1_9D967D80C41C7781(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_9D967D80C41C7781_OFFSET))(this, a1);
	}

	::System::Void Method_1_235779E3A1B24A75(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_235779E3A1B24A75_OFFSET))(this, a1);
	}

	::System::Void Method_1_235779E3A1B24A75_1(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_235779E3A1B24A75_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D967D80C41C7781_1(::HedgehogTeam::EasyTouch::Gesture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_9D967D80C41C7781_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRecording()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_GET_ISRECORDING_OFFSET))(this);
	}

	::System::Void set_IsRecording(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_SET_ISRECORDING_OFFSET))(this, a1);
	}
};
