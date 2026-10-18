#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Guid.h"

class Class_2_9E8CD0C1037EB98E_2;
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_1D420E2A55BEE678_GET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB540E60)
#define CLASS_2_1D420E2A55BEE678_METHOD_2_5AD9DD59C9C66CB8_OFFSET UNITYSDK_OFFSET(0xB540E10)
#define CLASS_2_1D420E2A55BEE678_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0xB540C40)
#define CLASS_2_1D420E2A55BEE678_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xB540380)
#define CLASS_2_1D420E2A55BEE678_SET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB540E70)
#define CLASS_2_1D420E2A55BEE678__CTOR_OFFSET UNITYSDK_OFFSET(0xB540050)
#define CLASS_2_1D420E2A55BEE678__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB540150)
#define CLASS_2_1D420E2A55BEE678__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB540BB0)
#define CLASS_2_1D420E2A55BEE678__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB5403F0)
#define CLASS_2_1D420E2A55BEE678__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB540AF0)

inline static constexpr unsigned int Class_2_1D420E2A55BEE678_TypeDefinitionIndex = 72726;

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
