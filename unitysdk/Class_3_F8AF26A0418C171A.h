#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"

namespace DG::Tweening { class Tweener; }

#define CLASS_3_F8AF26A0418C171A_METHOD_3_3D7AFF6D4ECB15F4_OFFSET UNITYSDK_OFFSET(0x13EE30D0)
#define CLASS_3_F8AF26A0418C171A_METHOD_3_479759059E440327_OFFSET UNITYSDK_OFFSET(0x13EE3040)
#define CLASS_3_F8AF26A0418C171A_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x13EE3120)
#define CLASS_3_F8AF26A0418C171A__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE2FF0)

inline static constexpr unsigned int Class_3_F8AF26A0418C171A_TypeDefinitionIndex = 68848;

class Class_3_F8AF26A0418C171A : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::DG::Tweening::Tweener* Field_3_0; // 0x40

	::System::Void _ctor(::DG::Tweening::Tweener* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tweener*))((::PBYTE)hIl2Cpp + CLASS_3_F8AF26A0418C171A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F8AF26A0418C171A_METHOD_3_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D7AFF6D4ECB15F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8AF26A0418C171A_METHOD_3_3D7AFF6D4ECB15F4_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8AF26A0418C171A_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
