#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleOptionUIUtilType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B346E41ADE670252_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AD86B0)
#define CLASS_1_B346E41ADE670252_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x14AD87B0)
#define CLASS_1_B346E41ADE670252_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x14AD9170)
#define CLASS_1_B346E41ADE670252_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14AD90B0)
#define CLASS_1_B346E41ADE670252_METHOD_1_C08FDD895A21F81C_OFFSET UNITYSDK_OFFSET(0x14AD88A0)
#define CLASS_1_B346E41ADE670252_METHOD_1_DB947ECEBA4202A5_OFFSET UNITYSDK_OFFSET(0x14AD8D60)
#define CLASS_1_B346E41ADE670252_METHOD_1_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0x14AD9240)
#define CLASS_1_B346E41ADE670252__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD9450)

inline static constexpr unsigned int Class_1_B346E41ADE670252_TypeDefinitionIndex = 74845;

class Class_1_B346E41ADE670252 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::PropOptionTrigger_ButtonParam* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::TalkOptionData*>* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::RPG::Client::Prop::PuzzleOptionUIUtilType Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C08FDD895A21F81C(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_METHOD_1_C08FDD895A21F81C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DB947ECEBA4202A5(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_METHOD_1_DB947ECEBA4202A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_1_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_METHOD_1_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B346E41ADE670252_METHOD_1_7646FFE662147970_OFFSET))(this);
	}
};
