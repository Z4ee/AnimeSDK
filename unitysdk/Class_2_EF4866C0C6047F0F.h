#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_3_A2BC57CDDA246645_Mode.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_2A97E60807F449E7;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EF4866C0C6047F0F_METHOD_2_06E118F6C0685D77_OFFSET UNITYSDK_OFFSET(0x1647B9E0)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_2002267788E1030E_OFFSET UNITYSDK_OFFSET(0x1647B860)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x1647B740)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_ACC746E738986102_OFFSET UNITYSDK_OFFSET(0x1647B6A0)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_B21FF255D07A62FB_OFFSET UNITYSDK_OFFSET(0x1647B7A0)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_B2FA6D858FD88772_OFFSET UNITYSDK_OFFSET(0x1647BAE0)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1647B5E0)
#define CLASS_2_EF4866C0C6047F0F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1647B820)
#define CLASS_2_EF4866C0C6047F0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1647BB40)
#define CLASS_2_EF4866C0C6047F0F__ONBIND_OFFSET UNITYSDK_OFFSET(0x1647B580)
#define CLASS_2_EF4866C0C6047F0F__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1647B650)

inline static constexpr unsigned int Class_2_EF4866C0C6047F0F_TypeDefinitionIndex = 68085;

class Class_2_EF4866C0C6047F0F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::Class_1_DDDB57AA67C3A9EA* Field_2_6; // 0x60
	::System::Action_1<::System::String*>* Field_2_7; // 0x68
	::System::Boolean Field_2_8; // 0x70
	::RPG::Client::ActionBarItemUIStyle Field_2_9; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ACC746E738986102(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_ACC746E738986102_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_3_A2BC57CDDA246645_Mode Method_2_2002267788E1030E(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::Class_3_A2BC57CDDA246645_Mode(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_2002267788E1030E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_06E118F6C0685D77(::RPG::Client::ActionBarItemUIStyle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActionBarItemUIStyle))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_06E118F6C0685D77_OFFSET))(this, a1);
	}

	::System::Void Method_2_B21FF255D07A62FB(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_B21FF255D07A62FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2FA6D858FD88772(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_B2FA6D858FD88772_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EF4866C0C6047F0F_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}
};
