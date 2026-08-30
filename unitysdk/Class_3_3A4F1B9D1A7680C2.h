#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_3A4F1B9D1A7680C2_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1C8773C0)
#define CLASS_3_3A4F1B9D1A7680C2_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1C877380)
#define CLASS_3_3A4F1B9D1A7680C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8773B0)

inline static constexpr unsigned int Class_3_3A4F1B9D1A7680C2_TypeDefinitionIndex = 22167;

class Class_3_3A4F1B9D1A7680C2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* KAHBCKFNAFM; // 0x18
	::System::Boolean DMKJAJLNEBK; // 0x20
	::System::Single IEHPFADHJFD; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A4F1B9D1A7680C2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3A4F1B9D1A7680C2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3A4F1B9D1A7680C2*&))((::PBYTE)hIl2Cpp + CLASS_3_3A4F1B9D1A7680C2_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3A4F1B9D1A7680C2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3A4F1B9D1A7680C2*))((::PBYTE)hIl2Cpp + CLASS_3_3A4F1B9D1A7680C2_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
