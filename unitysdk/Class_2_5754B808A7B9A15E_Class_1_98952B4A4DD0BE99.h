#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_8;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_5754B808A7B9A15E_CLASS_1_98952B4A4DD0BE99_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1196E440)
#define CLASS_2_5754B808A7B9A15E_CLASS_1_98952B4A4DD0BE99__CTOR_OFFSET UNITYSDK_OFFSET(0x1196E000)

inline static constexpr unsigned int Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99_TypeDefinitionIndex = 44865;

class Class_2_5754B808A7B9A15E_Class_1_98952B4A4DD0BE99 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_8; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x19
	::System::UInt32 Field_1_5; // 0x1C
	::System::Double Field_1_2; // 0x20
	::System::Double Field_1_6; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::Double Field_1_7; // 0x38
	::System::Double Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5754B808A7B9A15E_CLASS_1_98952B4A4DD0BE99__CTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_8* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_EBB10EC01CCC4716_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5754B808A7B9A15E_CLASS_1_98952B4A4DD0BE99_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}
};
