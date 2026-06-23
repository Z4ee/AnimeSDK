#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_026083D0A4F08738;

#define CLASS_2_DD0BEC19545FD166_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x129594C0)
#define CLASS_2_DD0BEC19545FD166_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x12959320)
#define CLASS_2_DD0BEC19545FD166_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12959550)
#define CLASS_2_DD0BEC19545FD166__CTOR_OFFSET UNITYSDK_OFFSET(0x12959540)

inline static constexpr unsigned int Class_2_DD0BEC19545FD166_TypeDefinitionIndex = 87035;

class Class_2_DD0BEC19545FD166 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_026083D0A4F08738<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* Field_2_2; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
