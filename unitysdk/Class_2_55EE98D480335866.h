#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"

class Class_0_16E4307DCC419505_493;
class Class_2_6EB44AAB9C7BE089;
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_2_55EE98D480335866_METHOD_2_475B50CC2AB42EAF_OFFSET UNITYSDK_OFFSET(0x17ADFDE0)
#define CLASS_2_55EE98D480335866_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x17ADFD90)
#define CLASS_2_55EE98D480335866_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x17ADF9E0)
#define CLASS_2_55EE98D480335866_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x17ADFE60)
#define CLASS_2_55EE98D480335866_ONINIT_OFFSET UNITYSDK_OFFSET(0x17ADF8A0)
#define CLASS_2_55EE98D480335866_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x17AE00B0)
#define CLASS_2_55EE98D480335866_ONREFRESHROT_OFFSET UNITYSDK_OFFSET(0x17AE0140)
#define CLASS_2_55EE98D480335866_ONSTART_OFFSET UNITYSDK_OFFSET(0x17ADF970)
#define CLASS_2_55EE98D480335866_ONSTOP_OFFSET UNITYSDK_OFFSET(0x17ADFC90)
#define CLASS_2_55EE98D480335866_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x17ADF920)
#define CLASS_2_55EE98D480335866__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE02E0)

inline static constexpr unsigned int Class_2_55EE98D480335866_TypeDefinitionIndex = 54409;

class Class_2_55EE98D480335866 : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_6E1B724B14572104_1, ::System::Object*>
{
public:
	::Class_2_6EB44AAB9C7BE089* CBIGILEOMHK; // 0x50
	::System::Single OGPBNBNLLEN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONSTART_OFFSET))(this);
	}

	::System::Void OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_493* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_493*))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_475B50CC2AB42EAF(::Class_0_16E4307DCC419505_493* a1, ::RPG::GameCore::RtMoveStopReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_493*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_METHOD_2_475B50CC2AB42EAF_OFFSET))(this, a1, a2);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONREFRESHPOS_OFFSET))(this, a1);
	}

	::System::Void OnRefreshRot()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONREFRESHROT_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_METHOD_2_D460587695D41831_OFFSET))(this);
	}
};
