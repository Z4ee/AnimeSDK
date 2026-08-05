#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F51E259CD719B87D_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x14DDF380)
#define CLASS_2_F51E259CD719B87D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14DDF450)
#define CLASS_2_F51E259CD719B87D_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x14DDF200)
#define CLASS_2_F51E259CD719B87D__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF440)

inline static constexpr unsigned int Class_2_F51E259CD719B87D_TypeDefinitionIndex = 86819;

class Class_2_F51E259CD719B87D : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::MoleMole::MonoGamepadNavigatableList* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::UnityEngine::Transform* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F51E259CD719B87D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
