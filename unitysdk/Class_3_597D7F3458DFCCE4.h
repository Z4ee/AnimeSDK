#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_597D7F3458DFCCE4_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x19150D00)
#define CLASS_3_597D7F3458DFCCE4_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x19150C80)
#define CLASS_3_597D7F3458DFCCE4__CTOR_OFFSET UNITYSDK_OFFSET(0x19150CD0)

inline static constexpr unsigned int Class_3_597D7F3458DFCCE4_TypeDefinitionIndex = 20303;

class Class_3_597D7F3458DFCCE4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597D7F3458DFCCE4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_597D7F3458DFCCE4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_597D7F3458DFCCE4*&))((::PBYTE)hIl2Cpp + CLASS_3_597D7F3458DFCCE4_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_597D7F3458DFCCE4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_597D7F3458DFCCE4*))((::PBYTE)hIl2Cpp + CLASS_3_597D7F3458DFCCE4_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
