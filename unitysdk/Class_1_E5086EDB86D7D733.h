#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E5086EDB86D7D733_GET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x12AD0350)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x12AD0BB0)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_158524051C13420D_OFFSET UNITYSDK_OFFSET(0x12AD0370)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12AD0F30)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x12AD0930)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_63DD961B1F7FD1E4_OFFSET UNITYSDK_OFFSET(0x12AD09B0)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x12AD0D00)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x12AD0850)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x12AD0C50)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12AD0620)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AD06B0)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x12AD0E20)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_F671A90183524AF2_OFFSET UNITYSDK_OFFSET(0x12AD0700)
#define CLASS_1_E5086EDB86D7D733_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x12AD0380)
#define CLASS_1_E5086EDB86D7D733_SET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x12AD0360)
#define CLASS_1_E5086EDB86D7D733__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD0460)

inline static constexpr unsigned int Class_1_E5086EDB86D7D733_TypeDefinitionIndex = 52859;

class Class_1_E5086EDB86D7D733 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	::System::Action* Field_1_3; // 0x10
	::Class_1_D27BF54F25500E5F* Field_1_0; // 0x18
	::RPG::Client::CharacterShaderPropertyTransition* Field_1_1; // 0x20
	::System::Boolean _IsInFade_k__BackingField; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsInFade()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_GET_ISINFADE_OFFSET))(this);
	}

	::System::Void set_IsInFade(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_SET_ISINFADE_OFFSET))(this, value);
	}

	::RPG::Client::CharacterShaderPropertyTransition* Method_1_158524051C13420D()
	{
		return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_158524051C13420D_OFFSET))(this);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F671A90183524AF2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_F671A90183524AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Void Method_1_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_63DD961B1F7FD1E4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5086EDB86D7D733_METHOD_1_63DD961B1F7FD1E4_OFFSET))(this, a1, a2, a3, a4);
	}
};
