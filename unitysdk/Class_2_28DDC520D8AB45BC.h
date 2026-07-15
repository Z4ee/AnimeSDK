#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_3FF51CE8B91EFA1B;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_28DDC520D8AB45BC_METHOD_2_01A573804D7F04CF_OFFSET UNITYSDK_OFFSET(0x16FA3340)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x16FA3710)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_22B6601E4F728E72_OFFSET UNITYSDK_OFFSET(0x16FA36C0)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16FA32F0)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16FA3470)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x16FA3540)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_927FAEA36AA4115E_OFFSET UNITYSDK_OFFSET(0x16FA34F0)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_9CA36961AF4E0C0F_OFFSET UNITYSDK_OFFSET(0x16FA35F0)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x16FA3010)
#define CLASS_2_28DDC520D8AB45BC_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x16FA3080)
#define CLASS_2_28DDC520D8AB45BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA3770)
#define CLASS_2_28DDC520D8AB45BC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16FA2F70)

inline static constexpr unsigned int Class_2_28DDC520D8AB45BC_TypeDefinitionIndex = 68908;

class Class_2_28DDC520D8AB45BC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x1F; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_1_3FF51CE8B91EFA1B* Field_2_2; // 0x60
	::RPG::Client::AnimatorButton* Field_2_3; // 0x68
	::RPG::Client::AnimatorButton* Field_2_4; // 0x70
	::RPG::Client::AnimatorButton* Field_2_5; // 0x78
	::System::Boolean Field_2_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_2_01A573804D7F04CF(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_01A573804D7F04CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_927FAEA36AA4115E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_927FAEA36AA4115E_OFFSET))(this);
	}

	::System::Void Method_2_9CA36961AF4E0C0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_9CA36961AF4E0C0F_OFFSET))(this);
	}

	::System::Void Method_2_22B6601E4F728E72(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_22B6601E4F728E72_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_28DDC520D8AB45BC_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
