#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_8EFB058F44A33334_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1B9D2490)
#define CLASS_3_8EFB058F44A33334_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1B9D24D0)
#define CLASS_3_8EFB058F44A33334__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D24C0)

inline static constexpr unsigned int Class_3_8EFB058F44A33334_TypeDefinitionIndex = 20634;

class Class_3_8EFB058F44A33334 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28

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
