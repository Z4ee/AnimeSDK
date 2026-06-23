#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38AB624F12E9F95A;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIOngoingTipsWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B3309433BD404061_METHOD_1_1EEF7E59CCB9FDCA_OFFSET UNITYSDK_OFFSET(0x12E25420)
#define CLASS_1_B3309433BD404061_METHOD_1_3491513EEDE20EE3_OFFSET UNITYSDK_OFFSET(0x12E25080)
#define CLASS_1_B3309433BD404061_METHOD_1_44C7FF91BE910FEA_OFFSET UNITYSDK_OFFSET(0x12E25070)
#define CLASS_1_B3309433BD404061_METHOD_1_603BB106FE1B2A91_OFFSET UNITYSDK_OFFSET(0x12E254D0)
#define CLASS_1_B3309433BD404061_METHOD_1_9EE145BE7FF75394_OFFSET UNITYSDK_OFFSET(0x12E251D0)
#define CLASS_1_B3309433BD404061_METHOD_1_DFEC4E3A703FA3C0_OFFSET UNITYSDK_OFFSET(0x12E25220)
#define CLASS_1_B3309433BD404061_METHOD_1_FAFC05391B65EC6F_OFFSET UNITYSDK_OFFSET(0x12E25390)
#define CLASS_1_B3309433BD404061__CTOR_OFFSET UNITYSDK_OFFSET(0x12E25380)

inline static constexpr unsigned int Class_1_B3309433BD404061_TypeDefinitionIndex = 49326;

class Class_1_B3309433BD404061 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::MoleMole::UIBaseController* Field_1_3; // 0x18
	::Class_1_38AB624F12E9F95A* Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061__CTOR_OFFSET))(this);
	}

	::Class_1_38AB624F12E9F95A* Method_1_44C7FF91BE910FEA()
	{
		return ((::Class_1_38AB624F12E9F95A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_44C7FF91BE910FEA_OFFSET))(this);
	}

	::System::Boolean Method_1_9EE145BE7FF75394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_9EE145BE7FF75394_OFFSET))(this);
	}

	::System::Void Method_1_FAFC05391B65EC6F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_FAFC05391B65EC6F_OFFSET))(this, a1);
	}

	::Class_1_38AB624F12E9F95A* Method_1_3491513EEDE20EE3()
	{
		return ((::Class_1_38AB624F12E9F95A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_3491513EEDE20EE3_OFFSET))(this);
	}

	::MoleMole::UIOngoingTipsWidgetController* Method_1_1EEF7E59CCB9FDCA()
	{
		return ((::MoleMole::UIOngoingTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_1EEF7E59CCB9FDCA_OFFSET))(this);
	}

	::System::Void Method_1_603BB106FE1B2A91(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_603BB106FE1B2A91_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_DFEC4E3A703FA3C0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_DFEC4E3A703FA3C0_OFFSET))();
	}
};
