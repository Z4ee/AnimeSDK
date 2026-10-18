#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Guid.h"

class Class_2_9E8CD0C1037EB98E_2;
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_1D420E2A55BEE678_GET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB5477D0)
#define CLASS_2_1D420E2A55BEE678_METHOD_2_5AD9DD59C9C66CB8_OFFSET UNITYSDK_OFFSET(0xB547780)
#define CLASS_2_1D420E2A55BEE678_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0xB5475B0)
#define CLASS_2_1D420E2A55BEE678_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xB546D10)
#define CLASS_2_1D420E2A55BEE678_SET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB5477E0)
#define CLASS_2_1D420E2A55BEE678__CTOR_OFFSET UNITYSDK_OFFSET(0xB5469E0)
#define CLASS_2_1D420E2A55BEE678__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB546AE0)
#define CLASS_2_1D420E2A55BEE678__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB547520)
#define CLASS_2_1D420E2A55BEE678__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB546D80)
#define CLASS_2_1D420E2A55BEE678__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB547460)

inline static constexpr unsigned int Class_2_1D420E2A55BEE678_TypeDefinitionIndex = 72727;

class Class_2_1D420E2A55BEE678 : public ::RPG::Client::UIController
{
public:
	::System::Action* _ExitAction_k__BackingField; // 0x190
	::System::Guid GFAKDLGDHHF; // 0x198

	::System::Void _ctor(::RPG::Client::UILayer a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678__CTOR_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678_METHOD_2_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD9DD59C9C66CB8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678_METHOD_2_5AD9DD59C9C66CB8_OFFSET))(this, a1);
	}

	::System::Action* get_ExitAction()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678_GET_EXITACTION_OFFSET))(this);
	}

	::System::Void set_ExitAction(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678_SET_EXITACTION_OFFSET))(this, a1);
	}

	::Class_2_9E8CD0C1037EB98E_2* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_9E8CD0C1037EB98E_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D420E2A55BEE678_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}
};
