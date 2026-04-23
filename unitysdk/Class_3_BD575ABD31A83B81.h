#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define CLASS_3_BD575ABD31A83B81_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1834E2B0)
#define CLASS_3_BD575ABD31A83B81_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1834E330)
#define CLASS_3_BD575ABD31A83B81__CTOR_OFFSET UNITYSDK_OFFSET(0x1834E300)

inline static constexpr unsigned int Class_3_BD575ABD31A83B81_TypeDefinitionIndex = 20364;

class Class_3_BD575ABD31A83B81 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::RPG::GameCore::FiveDimSetBillboardInfo* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD575ABD31A83B81__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BD575ABD31A83B81*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BD575ABD31A83B81*&))((::PBYTE)hIl2Cpp + CLASS_3_BD575ABD31A83B81_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BD575ABD31A83B81* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BD575ABD31A83B81*))((::PBYTE)hIl2Cpp + CLASS_3_BD575ABD31A83B81_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
