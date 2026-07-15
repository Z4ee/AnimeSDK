#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_93570651E1E7F6D8;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityElationEchoPointChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_2_78C8C3A77A6DBE61_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x171E8F80)
#define CLASS_2_78C8C3A77A6DBE61_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x171E90A0)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x171E8570)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x171E8710)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x171E8890)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x171E8AF0)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_5DA541F24A0E0D28_OFFSET UNITYSDK_OFFSET(0x171E8B50)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_75AAF4C9AB049F98_OFFSET UNITYSDK_OFFSET(0x171E8300)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x171E87E0)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_881057BF38FE4763_OFFSET UNITYSDK_OFFSET(0x171E8BC0)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_E8A165BEBD75409B_OFFSET UNITYSDK_OFFSET(0x171E8C30)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_EAF52FA690F5978F_OFFSET UNITYSDK_OFFSET(0x171E8210)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_EEABD52C0F4D0C8A_OFFSET UNITYSDK_OFFSET(0x171E83B0)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x171E8E80)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x171E8D80)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_FD939CBDC4C3B869_OFFSET UNITYSDK_OFFSET(0x171E86C0)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_FDE09C8D62639E3E_1_OFFSET UNITYSDK_OFFSET(0x171E8990)
#define CLASS_2_78C8C3A77A6DBE61_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x171E8A40)
#define CLASS_2_78C8C3A77A6DBE61_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x171E8490)
#define CLASS_2_78C8C3A77A6DBE61_ONRETURN_OFFSET UNITYSDK_OFFSET(0x171E85F0)
#define CLASS_2_78C8C3A77A6DBE61__CTOR_OFFSET UNITYSDK_OFFSET(0x171E9190)
#define CLASS_2_78C8C3A77A6DBE61__ONBIND_OFFSET UNITYSDK_OFFSET(0x171E8170)
#define CLASS_2_78C8C3A77A6DBE61__ONTICK_OFFSET UNITYSDK_OFFSET(0x171E8760)

inline static constexpr unsigned int Class_2_78C8C3A77A6DBE61_TypeDefinitionIndex = 68248;

class Class_2_78C8C3A77A6DBE61 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_1_93570651E1E7F6D8* Field_2_0; // 0x60
	::RPG::Client::AnimatorButton* Field_2_1; // 0x68
	::UnityEngine::Animator* Field_2_2; // 0x70
	::RPG::Client::LocalizedText* Field_2_3; // 0x78
	::System::Int32 Field_2_4; // 0x80
	::System::Nullable_1<::System::Int32> Field_2_5; // 0x84
	::System::Int32 Field_2_6; // 0x8C
	::System::Int32 Field_2_7; // 0x90
	::System::Int32 Field_2_8; // 0x94
	::System::Int32 Field_2_9; // 0x98
	::System::Nullable_1<::System::Boolean> Field_2_10; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EAF52FA690F5978F(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_EAF52FA690F5978F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EEABD52C0F4D0C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_EEABD52C0F4D0C8A_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_FD939CBDC4C3B869(::Class_1_93570651E1E7F6D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93570651E1E7F6D8*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_FD939CBDC4C3B869_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_75AAF4C9AB049F98(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_75AAF4C9AB049F98_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_5DA541F24A0E0D28(::RPG::GameCore::AbilityElationEchoPointChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityElationEchoPointChange*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_5DA541F24A0E0D28_OFFSET))(this, a1);
	}

	::System::Void Method_2_881057BF38FE4763(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_881057BF38FE4763_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8A165BEBD75409B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_E8A165BEBD75409B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_FDE09C8D62639E3E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8C3A77A6DBE61_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
