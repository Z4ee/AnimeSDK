#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F96B92B05C740DB;
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084; }

#define CLASS_1_3A031B4969E41A12_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8B53B20)
#define CLASS_1_3A031B4969E41A12_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x8B53B00)
#define CLASS_1_3A031B4969E41A12_GET_X_OFFSET UNITYSDK_OFFSET(0x8B53AC0)
#define CLASS_1_3A031B4969E41A12_GET_Y_OFFSET UNITYSDK_OFFSET(0x8B53AE0)
#define CLASS_1_3A031B4969E41A12_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8B53B30)
#define CLASS_1_3A031B4969E41A12_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x8B53B10)
#define CLASS_1_3A031B4969E41A12_SET_X_OFFSET UNITYSDK_OFFSET(0x8B53AD0)
#define CLASS_1_3A031B4969E41A12_SET_Y_OFFSET UNITYSDK_OFFSET(0x8B53AF0)
#define CLASS_1_3A031B4969E41A12__CTOR_OFFSET UNITYSDK_OFFSET(0x8B53B40)

inline static constexpr unsigned int Class_1_3A031B4969E41A12_TypeDefinitionIndex = 57490;

class Class_1_3A031B4969E41A12 : public ::System::Object
{
public:
	::Class_1_5F96B92B05C740DB* Field_1_0; // 0x10
	::RPG::Client::TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084* Field_1_1; // 0x18
	::System::Single _Y_k__BackingField; // 0x20
	::System::Single _Width_k__BackingField; // 0x24
	::System::Single _Height_k__BackingField; // 0x28
	::System::Single _X_k__BackingField; // 0x2C
	::System::Boolean Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12__CTOR_OFFSET))(this);
	}

	::System::Single get_X()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_GET_X_OFFSET))(this);
	}

	::System::Void set_X(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_SET_X_OFFSET))(this, value);
	}

	::System::Single get_Y()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_GET_Y_OFFSET))(this);
	}

	::System::Void set_Y(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_SET_Y_OFFSET))(this, value);
	}

	::System::Single get_Width()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_GET_WIDTH_OFFSET))(this);
	}

	::System::Void set_Width(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_SET_WIDTH_OFFSET))(this, value);
	}

	::System::Single get_Height()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_GET_HEIGHT_OFFSET))(this);
	}

	::System::Void set_Height(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3A031B4969E41A12_SET_HEIGHT_OFFSET))(this, value);
	}
};
