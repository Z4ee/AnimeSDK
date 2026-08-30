#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_611A13B01AEF3C43_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1DC77310)
#define CLASS_3_611A13B01AEF3C43_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1DC77350)
#define CLASS_3_611A13B01AEF3C43__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC77340)

inline static constexpr unsigned int Class_3_611A13B01AEF3C43_TypeDefinitionIndex = 21253;

class Class_3_611A13B01AEF3C43 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* KFEHPOFIOOA; // 0x18
	::System::String* HHMLELABBFN; // 0x20
	::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_611A13B01AEF3C43__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_611A13B01AEF3C43*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_611A13B01AEF3C43*&))((::PBYTE)hIl2Cpp + CLASS_3_611A13B01AEF3C43_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_611A13B01AEF3C43* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_611A13B01AEF3C43*))((::PBYTE)hIl2Cpp + CLASS_3_611A13B01AEF3C43_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
