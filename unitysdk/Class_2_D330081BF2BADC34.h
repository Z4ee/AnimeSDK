#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D330081BF2BADC34_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x14E44300)
#define CLASS_2_D330081BF2BADC34_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x14E44090)
#define CLASS_2_D330081BF2BADC34_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14E44390)
#define CLASS_2_D330081BF2BADC34__CTOR_OFFSET UNITYSDK_OFFSET(0x14E44380)

inline static constexpr unsigned int Class_2_D330081BF2BADC34_TypeDefinitionIndex = 81841;

class Class_2_D330081BF2BADC34 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_8; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_15; // 0x30
	::UnityEngine::GameObject* Field_2_9; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::GameObject* Field_2_1; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50
	::MoleMole::MonoGamepadCustomList* Field_2_10; // 0x58
	::MoleMole::MonoGamepadSelectable* Field_2_11; // 0x60
	::UnityEngine::GameObject* Field_2_7; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D330081BF2BADC34__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D330081BF2BADC34_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D330081BF2BADC34_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D330081BF2BADC34_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
