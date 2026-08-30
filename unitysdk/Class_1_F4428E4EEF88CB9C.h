#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F96B92B05C740DB;
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084; }

#define CLASS_1_F4428E4EEF88CB9C_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x198FB0C0)
#define CLASS_1_F4428E4EEF88CB9C_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x198FB0A0)
#define CLASS_1_F4428E4EEF88CB9C_GET_X_OFFSET UNITYSDK_OFFSET(0x198FB060)
#define CLASS_1_F4428E4EEF88CB9C_GET_Y_OFFSET UNITYSDK_OFFSET(0x198FB080)
#define CLASS_1_F4428E4EEF88CB9C_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x198FB0D0)
#define CLASS_1_F4428E4EEF88CB9C_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x198FB0B0)
#define CLASS_1_F4428E4EEF88CB9C_SET_X_OFFSET UNITYSDK_OFFSET(0x198FB070)
#define CLASS_1_F4428E4EEF88CB9C_SET_Y_OFFSET UNITYSDK_OFFSET(0x198FB090)
#define CLASS_1_F4428E4EEF88CB9C__CTOR_OFFSET UNITYSDK_OFFSET(0x198FB0E0)

inline static constexpr unsigned int Class_1_F4428E4EEF88CB9C_TypeDefinitionIndex = 70197;

class Class_1_F4428E4EEF88CB9C : public ::System::Object
{
public:
	::Class_1_5F96B92B05C740DB* JIOHGPCINFI; // 0x10
	::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* GANKCDOEOCF; // 0x18
	::System::Boolean IJIJEFDMAND; // 0x20
	::System::Single _X_k__BackingField; // 0x24
	::System::Single _Width_k__BackingField; // 0x28
	::System::Single _Height_k__BackingField; // 0x2C
	::System::Single _Y_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C__CTOR_OFFSET))(this);
	}

	::System::Single get_X()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_GET_X_OFFSET))(this);
	}

	::System::Void set_X(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_SET_X_OFFSET))(this, a1);
	}

	::System::Single get_Y()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_GET_Y_OFFSET))(this);
	}

	::System::Void set_Y(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_SET_Y_OFFSET))(this, a1);
	}

	::System::Single get_Width()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_GET_WIDTH_OFFSET))(this);
	}

	::System::Void set_Width(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_SET_WIDTH_OFFSET))(this, a1);
	}

	::System::Single get_Height()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_GET_HEIGHT_OFFSET))(this);
	}

	::System::Void set_Height(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F4428E4EEF88CB9C_SET_HEIGHT_OFFSET))(this, a1);
	}
};
