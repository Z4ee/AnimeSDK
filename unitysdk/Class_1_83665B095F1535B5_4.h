#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_4_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1227D770)
#define CLASS_1_83665B095F1535B5_4_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1227D7B0)
#define CLASS_1_83665B095F1535B5_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1227D820)

inline static constexpr unsigned int Class_1_83665B095F1535B5_4_TypeDefinitionIndex = 45197;

class Class_1_83665B095F1535B5_4 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x11
	::System::Boolean Field_1_0; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_4__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_4_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_4_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
