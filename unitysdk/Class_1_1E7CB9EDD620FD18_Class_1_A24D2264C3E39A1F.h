#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }

#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_A24D2264C3E39A1F_METHOD_1_A453EFA7B90607F9_OFFSET UNITYSDK_OFFSET(0x18A4C620)
#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_A24D2264C3E39A1F_METHOD_1_C9FD0658EC9FF832_OFFSET UNITYSDK_OFFSET(0x18A4C5D0)
#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_A24D2264C3E39A1F__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4C5C0)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Class_1_A24D2264C3E39A1F_TypeDefinitionIndex = 87373;

class Class_1_1E7CB9EDD620FD18_Class_1_A24D2264C3E39A1F : public ::System::Object
{
public:
	::Struct_2_FA5F50563E60AFBA Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x28
	::System::Boolean Field_1_7; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_A24D2264C3E39A1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C9FD0658EC9FF832(::System::UInt32 a1, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_A24D2264C3E39A1F_METHOD_1_C9FD0658EC9FF832_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A453EFA7B90607F9(::System::UInt32 a1, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_A24D2264C3E39A1F_METHOD_1_A453EFA7B90607F9_OFFSET))(this, a1, a2);
	}
};
