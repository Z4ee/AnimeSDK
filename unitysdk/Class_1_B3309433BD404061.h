#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_677BD2A1DAB39F39;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIOngoingTipsWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B3309433BD404061_METHOD_1_1EEF7E59CCB9FDCA_OFFSET UNITYSDK_OFFSET(0x13C56EB0)
#define CLASS_1_B3309433BD404061_METHOD_1_3491513EEDE20EE3_OFFSET UNITYSDK_OFFSET(0x13C56A50)
#define CLASS_1_B3309433BD404061_METHOD_1_44C7FF91BE910FEA_OFFSET UNITYSDK_OFFSET(0x13C56A40)
#define CLASS_1_B3309433BD404061_METHOD_1_603BB106FE1B2A91_OFFSET UNITYSDK_OFFSET(0x13C56DF0)
#define CLASS_1_B3309433BD404061_METHOD_1_9EE145BE7FF75394_OFFSET UNITYSDK_OFFSET(0x13C56BA0)
#define CLASS_1_B3309433BD404061_METHOD_1_DFEC4E3A703FA3C0_OFFSET UNITYSDK_OFFSET(0x13C56BF0)
#define CLASS_1_B3309433BD404061_METHOD_1_F8DFCC87127634D9_OFFSET UNITYSDK_OFFSET(0x13C56D60)
#define CLASS_1_B3309433BD404061__CTOR_OFFSET UNITYSDK_OFFSET(0x13C56D50)

inline static constexpr unsigned int Class_1_B3309433BD404061_TypeDefinitionIndex = 64717;

class Class_1_B3309433BD404061 : public ::System::Object
{
public:
	::Class_1_677BD2A1DAB39F39* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::MoleMole::UIBaseController* Field_1_3; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061__CTOR_OFFSET))(this);
	}

	::Class_1_677BD2A1DAB39F39* Method_1_44C7FF91BE910FEA()
	{
		return ((::Class_1_677BD2A1DAB39F39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_44C7FF91BE910FEA_OFFSET))(this);
	}

	::System::Boolean Method_1_9EE145BE7FF75394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_9EE145BE7FF75394_OFFSET))(this);
	}

	::System::Void Method_1_F8DFCC87127634D9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_F8DFCC87127634D9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_DFEC4E3A703FA3C0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_DFEC4E3A703FA3C0_OFFSET))();
	}

	::System::Void Method_1_603BB106FE1B2A91(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_603BB106FE1B2A91_OFFSET))(this, a1, a2);
	}

	::Class_1_677BD2A1DAB39F39* Method_1_3491513EEDE20EE3()
	{
		return ((::Class_1_677BD2A1DAB39F39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_3491513EEDE20EE3_OFFSET))(this);
	}

	::MoleMole::UIOngoingTipsWidgetController* Method_1_1EEF7E59CCB9FDCA()
	{
		return ((::MoleMole::UIOngoingTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3309433BD404061_METHOD_1_1EEF7E59CCB9FDCA_OFFSET))(this);
	}
};
