#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5DF5F62C68EF718F;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_F30BA7F9891F79D1_GET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x15E26990)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_158524051C13420D_OFFSET UNITYSDK_OFFSET(0x15E269B0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x15E270F0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E26BC0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x15E26EC0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_874846059EAFD17F_OFFSET UNITYSDK_OFFSET(0x15E269C0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x15E27260)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15E27380)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x15E26DE0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x15E271C0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E26C90)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_CD2C14924A8D6B44_OFFSET UNITYSDK_OFFSET(0x15E26F40)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_F671A90183524AF2_OFFSET UNITYSDK_OFFSET(0x15E26CE0)
#define CLASS_1_F30BA7F9891F79D1_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x15E272F0)
#define CLASS_1_F30BA7F9891F79D1_SET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x15E269A0)
#define CLASS_1_F30BA7F9891F79D1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E26A20)

inline static constexpr unsigned int Class_1_F30BA7F9891F79D1_TypeDefinitionIndex = 57349;

class Class_1_F30BA7F9891F79D1 : public ::System::Object
{
public:
	// static const ::System::Single OMPECPKKMDO; // 0x0
	// static const ::System::Single MKLINEEIPJE; // 0x0
	// static const ::System::Single NOOHOHFMMGH; // 0x0
	::System::Action* BBIMNOJJLHD; // 0x10
	::Class_1_5DF5F62C68EF718F* INDMABDHFDH; // 0x18
	::RPG::Client::CharacterShaderPropertyTransition* KNBIKJLEHMH; // 0x20
	::System::Boolean GACJIFJFCIA; // 0x28
	::System::Boolean _IsInFade_k__BackingField; // 0x29

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsInFade()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_GET_ISINFADE_OFFSET))(this);
	}

	::System::Void set_IsInFade(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_SET_ISINFADE_OFFSET))(this, a1);
	}

	::RPG::Client::CharacterShaderPropertyTransition* Method_1_158524051C13420D()
	{
		return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_158524051C13420D_OFFSET))(this);
	}

	::System::Single Method_1_874846059EAFD17F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_874846059EAFD17F_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F671A90183524AF2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_F671A90183524AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD2C14924A8D6B44(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F30BA7F9891F79D1_METHOD_1_CD2C14924A8D6B44_OFFSET))(this, a1, a2, a3, a4);
	}
};
