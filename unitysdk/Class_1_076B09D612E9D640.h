#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_530DC6CF143DECC0;
namespace RPG::GameCore { class FiveDimSimpleHitBoxConfig; }

#define CLASS_1_076B09D612E9D640_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3B0D00)
#define CLASS_1_076B09D612E9D640__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0D80)

inline static constexpr unsigned int Class_1_076B09D612E9D640_TypeDefinitionIndex = 41879;

class Class_1_076B09D612E9D640 : public ::System::Object
{
public:
	::Class_1_530DC6CF143DECC0* BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimSimpleHitBoxConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076B09D612E9D640__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_076B09D612E9D640_CLEAR_OFFSET))(this);
	}
};
