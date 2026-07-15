#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_CB7B13C5C1487F07_METHOD_3_5A608339ECD0DAF1_OFFSET UNITYSDK_OFFSET(0x1BBB0C30)
#define CLASS_3_CB7B13C5C1487F07_METHOD_3_BFD20FCF9A20D104_OFFSET UNITYSDK_OFFSET(0x1BBB0BF0)
#define CLASS_3_CB7B13C5C1487F07__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB0C20)

inline static constexpr unsigned int Class_3_CB7B13C5C1487F07_TypeDefinitionIndex = 23453;

class Class_3_CB7B13C5C1487F07 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Int32 Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x1C
	::System::Int32 Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB7B13C5C1487F07__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_BFD20FCF9A20D104(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CB7B13C5C1487F07*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CB7B13C5C1487F07*&))((::PBYTE)hIl2Cpp + CLASS_3_CB7B13C5C1487F07_METHOD_3_BFD20FCF9A20D104_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5A608339ECD0DAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CB7B13C5C1487F07* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CB7B13C5C1487F07*))((::PBYTE)hIl2Cpp + CLASS_3_CB7B13C5C1487F07_METHOD_3_5A608339ECD0DAF1_OFFSET))(a1, a2);
	}
};
