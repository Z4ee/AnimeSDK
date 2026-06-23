#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace MoleMole { class UIVideoSetDetailWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_A75042D26945B0D2_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x14CD0480)
#define CLASS_2_A75042D26945B0D2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x14CD0700)
#define CLASS_2_A75042D26945B0D2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14CD0840)
#define CLASS_2_A75042D26945B0D2__CTOR_OFFSET UNITYSDK_OFFSET(0x14CD0830)

inline static constexpr unsigned int Class_2_A75042D26945B0D2_TypeDefinitionIndex = 80834;

class Class_2_A75042D26945B0D2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralSortWidgetController*>* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::MoleMole::MonoGamepadNavigatableList* Field_2_3; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIVideoSetDetailWidgetController*>* Field_2_8; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_0; // 0x48
	::MonoUITableScrollV2* Field_2_1; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75042D26945B0D2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
