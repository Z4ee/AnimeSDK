#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_026083D0A4F08738;

#define CLASS_2_0C0CC2586BAE3E84_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x11E72010)
#define CLASS_2_0C0CC2586BAE3E84_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x11E721F0)
#define CLASS_2_0C0CC2586BAE3E84_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11E722A0)
#define CLASS_2_0C0CC2586BAE3E84__CTOR_OFFSET UNITYSDK_OFFSET(0x11E72290)

inline static constexpr unsigned int Class_2_0C0CC2586BAE3E84_TypeDefinitionIndex = 64564;

class Class_2_0C0CC2586BAE3E84 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::Class_3_026083D0A4F08738<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
