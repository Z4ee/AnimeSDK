#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_CEEFD4783074E63F_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x1776F330)
#define CLASS_2_CEEFD4783074E63F_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1776F510)
#define CLASS_2_CEEFD4783074E63F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1776F5C0)
#define CLASS_2_CEEFD4783074E63F__CTOR_OFFSET UNITYSDK_OFFSET(0x1776F5B0)

inline static constexpr unsigned int Class_2_CEEFD4783074E63F_TypeDefinitionIndex = 70791;

class Class_2_CEEFD4783074E63F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* Field_2_6; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEEFD4783074E63F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEEFD4783074E63F_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEEFD4783074E63F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEEFD4783074E63F_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
