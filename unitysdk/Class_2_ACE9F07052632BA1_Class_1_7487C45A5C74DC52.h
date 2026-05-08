#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_2_ACE9F07052632BA1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x134F66B0)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x134F6870)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x134F65B0)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52__CTOR_OFFSET UNITYSDK_OFFSET(0x134F65A0)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_7487C45A5C74DC52_TypeDefinitionIndex = 53303;

class Class_2_ACE9F07052632BA1_Class_1_7487C45A5C74DC52 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::Class_2_ACE9F07052632BA1* Field_1_0; // 0x20
	::Enum_3_F00DC819D834EFD2 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_7487C45A5C74DC52_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}
};
