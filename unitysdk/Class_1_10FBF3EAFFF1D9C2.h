#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_530DC6CF143DECC0;
namespace RPG::GameCore { class FiveDimSimpleHitBoxConfig; }

#define CLASS_1_10FBF3EAFFF1D9C2_CLEAR_OFFSET UNITYSDK_OFFSET(0x180C9A60)
#define CLASS_1_10FBF3EAFFF1D9C2__CTOR_OFFSET UNITYSDK_OFFSET(0x180C9AC0)

inline static constexpr unsigned int Class_1_10FBF3EAFFF1D9C2_TypeDefinitionIndex = 40920;

class Class_1_10FBF3EAFFF1D9C2 : public ::System::Object
{
public:
	::Class_1_530DC6CF143DECC0* Field_1_0; // 0x10
	::RPG::GameCore::FiveDimSimpleHitBoxConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10FBF3EAFFF1D9C2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10FBF3EAFFF1D9C2_CLEAR_OFFSET))(this);
	}
};
