#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E184AC50951905CE_Struct_2_E658502528B7C034_2.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class PhotoGraphSystem; }

#define CLASS_1_E184AC50951905CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A1F2C0)
#define CLASS_1_E184AC50951905CE_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x8A1FEA0)
#define CLASS_1_E184AC50951905CE_METHOD_1_235779E3A1B24A75_1_OFFSET UNITYSDK_OFFSET(0x8A1FDC0)
#define CLASS_1_E184AC50951905CE_METHOD_1_235779E3A1B24A75_OFFSET UNITYSDK_OFFSET(0x8A1FD40)
#define CLASS_1_E184AC50951905CE_METHOD_1_4D2A473556700CDC_1_OFFSET UNITYSDK_OFFSET(0x8A1F710)
#define CLASS_1_E184AC50951905CE_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x8A1F3E0)
#define CLASS_1_E184AC50951905CE_METHOD_1_853844B633BDBC17_OFFSET UNITYSDK_OFFSET(0x8A1FA40)
#define CLASS_1_E184AC50951905CE_METHOD_1_9D967D80C41C7781_1_OFFSET UNITYSDK_OFFSET(0x8A1FE40)
#define CLASS_1_E184AC50951905CE_METHOD_1_9D967D80C41C7781_OFFSET UNITYSDK_OFFSET(0x8A1FCF0)
#define CLASS_1_E184AC50951905CE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8A1F340)
#define CLASS_1_E184AC50951905CE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A1F390)
#define CLASS_1_E184AC50951905CE_SET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x8A1FEB0)
#define CLASS_1_E184AC50951905CE__CTOR_OFFSET UNITYSDK_OFFSET(0x8A1F2B0)

inline static constexpr unsigned int Class_1_E184AC50951905CE_TypeDefinitionIndex = 49399;

class Class_1_E184AC50951905CE : public ::System::Object
{
public:
	::RPG::Client::PhotoGraphSystem* Field_1_1; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Boolean _IsRecording_k__BackingField; // 0x1A
	::System::Single Field_1_4; // 0x1C

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

	::Class_1_E184AC50951905CE_Struct_2_E658502528B7C034_2 Method_1_853844B633BDBC17()
	{
		return ((::Class_1_E184AC50951905CE_Struct_2_E658502528B7C034_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_853844B633BDBC17_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_METHOD_1_4D2A473556700CDC_1_OFFSET))(this);
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

	::System::Void set_IsRecording(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E184AC50951905CE_SET_ISRECORDING_OFFSET))(this, value);
	}
};
