#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Guid.h"

class Class_2_A48F3719AA1CF200_31;
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_5624B7D467486DD3_GET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB6A3CD0)
#define CLASS_2_5624B7D467486DD3_METHOD_2_1086E351241EDD3B_OFFSET UNITYSDK_OFFSET(0xB6A3C80)
#define CLASS_2_5624B7D467486DD3_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0xB6A3AB0)
#define CLASS_2_5624B7D467486DD3_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xB6A31F0)
#define CLASS_2_5624B7D467486DD3_SET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB6A3CE0)
#define CLASS_2_5624B7D467486DD3__CTOR_OFFSET UNITYSDK_OFFSET(0xB6A2EC0)
#define CLASS_2_5624B7D467486DD3__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB6A2FC0)
#define CLASS_2_5624B7D467486DD3__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB6A3A20)
#define CLASS_2_5624B7D467486DD3__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB6A3260)
#define CLASS_2_5624B7D467486DD3__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB6A3960)

inline static constexpr unsigned int Class_2_5624B7D467486DD3_TypeDefinitionIndex = 72652;

class Class_2_5624B7D467486DD3 : public ::RPG::Client::UIController
{
public:
	::System::Action* _ExitAction_k__BackingField; // 0x188
	::System::Guid GFAKDLGDHHF; // 0x190

	::System::Void _ctor(::RPG::Client::UILayer a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3__CTOR_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3_METHOD_2_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3_METHOD_2_1086E351241EDD3B_OFFSET))(this, a1);
	}

	::System::Action* get_ExitAction()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3_GET_EXITACTION_OFFSET))(this);
	}

	::System::Void set_ExitAction(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3_SET_EXITACTION_OFFSET))(this, a1);
	}

	::Class_2_A48F3719AA1CF200_31* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_A48F3719AA1CF200_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5624B7D467486DD3_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}
};
