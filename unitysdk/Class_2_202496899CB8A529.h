#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_3_A2BC57CDDA246645_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_2A97E60807F449E7;
class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_41C7FEB4ED4F1D5A;
class Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C;
class Class_2_8957A46D2E3FF799;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_202496899CB8A529_METHOD_2_12DE133C7387361A_OFFSET UNITYSDK_OFFSET(0x186656C0)
#define CLASS_2_202496899CB8A529_METHOD_2_19BB37CB3BF5919B_OFFSET UNITYSDK_OFFSET(0x18665610)
#define CLASS_2_202496899CB8A529_METHOD_2_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x18665AB0)
#define CLASS_2_202496899CB8A529_METHOD_2_2002267788E1030E_OFFSET UNITYSDK_OFFSET(0x18665820)
#define CLASS_2_202496899CB8A529_METHOD_2_3CAED3BB5F5D98CB_OFFSET UNITYSDK_OFFSET(0x18665A30)
#define CLASS_2_202496899CB8A529_METHOD_2_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0x186657A0)
#define CLASS_2_202496899CB8A529_METHOD_2_4A4971EDE5D90BC3_OFFSET UNITYSDK_OFFSET(0x186655B0)
#define CLASS_2_202496899CB8A529_METHOD_2_756E515DE0A00ADD_OFFSET UNITYSDK_OFFSET(0x18665B20)
#define CLASS_2_202496899CB8A529_METHOD_2_B2FA6D858FD88772_OFFSET UNITYSDK_OFFSET(0x18665BA0)
#define CLASS_2_202496899CB8A529_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x186654F0)
#define CLASS_2_202496899CB8A529__CTOR_OFFSET UNITYSDK_OFFSET(0x18665C00)
#define CLASS_2_202496899CB8A529__ONBIND_OFFSET UNITYSDK_OFFSET(0x18665390)
#define CLASS_2_202496899CB8A529__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18665560)

inline static constexpr unsigned int Class_2_202496899CB8A529_TypeDefinitionIndex = 68042;

class Class_2_202496899CB8A529 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::System::Action_1<::System::String*>* Field_2_8; // 0x60
	::Class_2_41C7FEB4ED4F1D5A* Field_2_9; // 0x68
	::UnityEngine::GameObject* Field_2_10; // 0x70
	::Class_1_DDDB57AA67C3A9EA* Field_2_11; // 0x78
	::Class_1_AB817CB39E494C61* Field_2_12; // 0x80
	::Class_2_8957A46D2E3FF799* Field_2_13; // 0x88
	::RPG::Client::ActionBarItemUIStyle Field_2_14; // 0x90
	::System::Boolean Field_2_15; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4A4971EDE5D90BC3(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_4A4971EDE5D90BC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_422AB1A19F04E217()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_422AB1A19F04E217_OFFSET))(this);
	}

	::Class_3_A2BC57CDDA246645_Mode Method_2_2002267788E1030E(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::Class_3_A2BC57CDDA246645_Mode(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_2002267788E1030E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CAED3BB5F5D98CB(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_3CAED3BB5F5D98CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DF1FA98B6A6B5EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_1DF1FA98B6A6B5EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_756E515DE0A00ADD(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_756E515DE0A00ADD_OFFSET))(this, a1);
	}

	::System::Void Method_2_19BB37CB3BF5919B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_19BB37CB3BF5919B_OFFSET))(this, a1);
	}

	::System::Void Method_2_12DE133C7387361A(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_12DE133C7387361A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2FA6D858FD88772(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_2_202496899CB8A529_METHOD_2_B2FA6D858FD88772_OFFSET))(this, a1);
	}
};
