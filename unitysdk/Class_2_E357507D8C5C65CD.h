#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Guid.h"

class Class_2_9E8CD0C1037EB98E_1;
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_E357507D8C5C65CD_GET_EXITACTION_OFFSET UNITYSDK_OFFSET(0x90AA350)
#define CLASS_2_E357507D8C5C65CD_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x90AA300)
#define CLASS_2_E357507D8C5C65CD_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x90A9A60)
#define CLASS_2_E357507D8C5C65CD_METHOD_2_6AF8CC03883E6064_OFFSET UNITYSDK_OFFSET(0x90AA130)
#define CLASS_2_E357507D8C5C65CD_SET_EXITACTION_OFFSET UNITYSDK_OFFSET(0x90AA360)
#define CLASS_2_E357507D8C5C65CD__CTOR_OFFSET UNITYSDK_OFFSET(0x90A9810)
#define CLASS_2_E357507D8C5C65CD__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x90A98B0)
#define CLASS_2_E357507D8C5C65CD__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x90AA0A0)
#define CLASS_2_E357507D8C5C65CD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x90A9A90)
#define CLASS_2_E357507D8C5C65CD__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x90A9FE0)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x90AA370)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x90AA490)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x90AA3D0)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x90AA430)

inline static constexpr unsigned int Class_2_E357507D8C5C65CD_TypeDefinitionIndex = 66997;

class Class_2_E357507D8C5C65CD : public ::RPG::Client::UIController
{
public:
	::System::Action* _ExitAction_k__BackingField; // 0x180
	::System::Guid Field_2_1; // 0x188

	::System::Void _ctor(::RPG::Client::UILayer a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_6AF8CC03883E6064(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_METHOD_2_6AF8CC03883E6064_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Action* get_ExitAction()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_GET_EXITACTION_OFFSET))(this);
	}

	::System::Void set_ExitAction(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_SET_EXITACTION_OFFSET))(this, value);
	}

	::Class_2_9E8CD0C1037EB98E_1* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_9E8CD0C1037EB98E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
