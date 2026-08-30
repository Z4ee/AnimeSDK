#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_81A24C8B51484D59_GET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x15B0B820)
#define CLASS_1_81A24C8B51484D59_METHOD_1_04104768F6747276_OFFSET UNITYSDK_OFFSET(0x15B0BE40)
#define CLASS_1_81A24C8B51484D59_METHOD_1_158524051C13420D_OFFSET UNITYSDK_OFFSET(0x15B0B840)
#define CLASS_1_81A24C8B51484D59_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x15B0C040)
#define CLASS_1_81A24C8B51484D59_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15B0BA70)
#define CLASS_1_81A24C8B51484D59_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x15B0BDC0)
#define CLASS_1_81A24C8B51484D59_METHOD_1_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x15B0C1B0)
#define CLASS_1_81A24C8B51484D59_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x15B0C3E0)
#define CLASS_1_81A24C8B51484D59_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x15B0BCE0)
#define CLASS_1_81A24C8B51484D59_METHOD_1_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x15B0C110)
#define CLASS_1_81A24C8B51484D59_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B0BB40)
#define CLASS_1_81A24C8B51484D59_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x15B0C2D0)
#define CLASS_1_81A24C8B51484D59_METHOD_1_F671A90183524AF2_OFFSET UNITYSDK_OFFSET(0x15B0BB90)
#define CLASS_1_81A24C8B51484D59_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x15B0B850)
#define CLASS_1_81A24C8B51484D59_SET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x15B0B830)
#define CLASS_1_81A24C8B51484D59__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0B930)

inline static constexpr unsigned int Class_1_81A24C8B51484D59_TypeDefinitionIndex = 57505;

class Class_1_81A24C8B51484D59 : public ::System::Object
{
public:
	// static const ::System::Single OMPECPKKMDO; // 0x0
	// static const ::System::Single MKLINEEIPJE; // 0x0
	// static const ::System::Single NOOHOHFMMGH; // 0x0
	::RPG::Client::CharacterShaderPropertyTransition* KNBIKJLEHMH; // 0x10
	::System::Action* BBIMNOJJLHD; // 0x18
	::Class_1_D27BF54F25500E5F* INDMABDHFDH; // 0x20
	::System::Boolean _IsInFade_k__BackingField; // 0x28
	::System::Boolean GACJIFJFCIA; // 0x29

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsInFade()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_GET_ISINFADE_OFFSET))(this);
	}

	::System::Void set_IsInFade(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_SET_ISINFADE_OFFSET))(this, a1);
	}

	::RPG::Client::CharacterShaderPropertyTransition* Method_1_158524051C13420D()
	{
		return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_158524051C13420D_OFFSET))(this);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F671A90183524AF2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_F671A90183524AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Void Method_1_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_04104768F6747276(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81A24C8B51484D59_METHOD_1_04104768F6747276_OFFSET))(this, a1, a2, a3, a4);
	}
};
