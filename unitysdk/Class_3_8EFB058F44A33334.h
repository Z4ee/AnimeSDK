#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_8EFB058F44A33334_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1D2F6080)
#define CLASS_3_8EFB058F44A33334_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1D2F60C0)
#define CLASS_3_8EFB058F44A33334__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F60B0)

inline static constexpr unsigned int Class_3_8EFB058F44A33334_TypeDefinitionIndex = 21187;

class Class_3_8EFB058F44A33334 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KIGPKLGPDDD; // 0x18
	::System::String* KLHGAHCLCKA; // 0x20
	::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8EFB058F44A33334__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8EFB058F44A33334*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8EFB058F44A33334*&))((::PBYTE)hIl2Cpp + CLASS_3_8EFB058F44A33334_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8EFB058F44A33334* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8EFB058F44A33334*))((::PBYTE)hIl2Cpp + CLASS_3_8EFB058F44A33334_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
