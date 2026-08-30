#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_23;
class Class_1_C9DFE5EE7107C629_6;
class Class_1_D17272E82AE804C2_185;
class Class_1_D40936EF3BF54118_4;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace System { class Action; }

#define CLASS_1_FCC22A0BAD3D5A17_ADD_ONLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0x18CDE160)
#define CLASS_1_FCC22A0BAD3D5A17_ADD_ONRESULTCHANGED_OFFSET UNITYSDK_OFFSET(0x18CDDFF0)
#define CLASS_1_FCC22A0BAD3D5A17_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0x18CDE0B0)
#define CLASS_1_FCC22A0BAD3D5A17_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x18CDDF40)
#define CLASS_1_FCC22A0BAD3D5A17_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x18CDE0F0)
#define CLASS_1_FCC22A0BAD3D5A17_METHOD_1_5C8082ABFC133A16_OFFSET UNITYSDK_OFFSET(0x18CDDF80)
#define CLASS_1_FCC22A0BAD3D5A17_METHOD_1_5CC22E34B35A81F3_OFFSET UNITYSDK_OFFSET(0x18CDE230)
#define CLASS_1_FCC22A0BAD3D5A17_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18CDE420)
#define CLASS_1_FCC22A0BAD3D5A17_METHOD_1_F59FF205476A1847_OFFSET UNITYSDK_OFFSET(0x18CDE360)
#define CLASS_1_FCC22A0BAD3D5A17_REMOVE_ONLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0x18CDE1C0)
#define CLASS_1_FCC22A0BAD3D5A17_REMOVE_ONRESULTCHANGED_OFFSET UNITYSDK_OFFSET(0x18CDE050)
#define CLASS_1_FCC22A0BAD3D5A17__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDE220)

inline static constexpr unsigned int Class_1_FCC22A0BAD3D5A17_TypeDefinitionIndex = 80154;

class Class_1_FCC22A0BAD3D5A17 : public ::System::Object
{
public:
	::Class_1_D40936EF3BF54118_4* LIGODHDKKJP; // 0x10
	::System::Action* OnResultChanged; // 0x18
	::System::Action* OnLineupChanged; // 0x20
	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* GNOEGILFEMD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17__CTOR_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_Result()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_GET_RESULT_OFFSET))(this);
	}

	::System::Void Method_1_5C8082ABFC133A16(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_METHOD_1_5C8082ABFC133A16_OFFSET))(this, a1);
	}

	::System::Void add_OnResultChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_ADD_ONRESULTCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnResultChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_REMOVE_ONRESULTCHANGED_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_4* get_Lineup()
	{
		return ((::Class_1_D40936EF3BF54118_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_GET_LINEUP_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_D40936EF3BF54118_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_4*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void add_OnLineupChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_ADD_ONLINEUPCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnLineupChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_REMOVE_ONLINEUPCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC22E34B35A81F3(::Class_1_97E659ED8D5D259C_23* a1, ::Class_1_C9DFE5EE7107C629_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::Class_1_C9DFE5EE7107C629_6*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_METHOD_1_5CC22E34B35A81F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F59FF205476A1847(::Class_1_97E659ED8D5D259C_23* a1, ::Class_1_D17272E82AE804C2_185* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_23*, ::Class_1_D17272E82AE804C2_185*))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_METHOD_1_F59FF205476A1847_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCC22A0BAD3D5A17_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}
};
