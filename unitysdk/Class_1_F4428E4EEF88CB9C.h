#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F96B92B05C740DB;
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084; }

#define CLASS_1_F4428E4EEF88CB9C_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xAF31700)
#define CLASS_1_F4428E4EEF88CB9C_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xAF316E0)
#define CLASS_1_F4428E4EEF88CB9C_GET_X_OFFSET UNITYSDK_OFFSET(0xAF316A0)
#define CLASS_1_F4428E4EEF88CB9C_GET_Y_OFFSET UNITYSDK_OFFSET(0xAF316C0)
#define CLASS_1_F4428E4EEF88CB9C_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xAF31710)
#define CLASS_1_F4428E4EEF88CB9C_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xAF316F0)
#define CLASS_1_F4428E4EEF88CB9C_SET_X_OFFSET UNITYSDK_OFFSET(0xAF316B0)
#define CLASS_1_F4428E4EEF88CB9C_SET_Y_OFFSET UNITYSDK_OFFSET(0xAF316D0)
#define CLASS_1_F4428E4EEF88CB9C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF31720)

inline static constexpr unsigned int Class_1_F4428E4EEF88CB9C_TypeDefinitionIndex = 65673;

class Class_1_F4428E4EEF88CB9C : public ::System::Object
{
public:
	::Class_1_5F96B92B05C740DB* Field_1_0; // 0x10
	::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* Field_1_1; // 0x18
	::System::Single _Height_k__BackingField; // 0x20
	::System::Single _Width_k__BackingField; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Single _Y_k__BackingField; // 0x2C
	::System::Single _X_k__BackingField; // 0x30

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
