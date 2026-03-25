#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_6FCED0DC6A3564B4_1_METHOD_3_CC5389287A803194_OFFSET UNITYSDK_OFFSET(0x1797FB30)
#define CLASS_3_6FCED0DC6A3564B4_1_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1797FAB0)
#define CLASS_3_6FCED0DC6A3564B4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1797FB00)

inline static constexpr unsigned int Class_3_6FCED0DC6A3564B4_1_TypeDefinitionIndex = 9937;

class Class_3_6FCED0DC6A3564B4_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_1; // 0x18
	::System::UInt32 Field_3_2; // 0x1C
	::System::Boolean Field_3_0; // 0x20
	::System::UInt32 Field_3_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6FCED0DC6A3564B4_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6FCED0DC6A3564B4_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6FCED0DC6A3564B4_1*&))((::PBYTE)hIl2Cpp + CLASS_3_6FCED0DC6A3564B4_1_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CC5389287A803194(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6FCED0DC6A3564B4_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6FCED0DC6A3564B4_1*))((::PBYTE)hIl2Cpp + CLASS_3_6FCED0DC6A3564B4_1_METHOD_3_CC5389287A803194_OFFSET))(a1, a2);
	}
};
