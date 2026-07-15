#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_BD07726827556B99_METHOD_2_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x15B1BD20)
#define CLASS_2_BD07726827556B99_METHOD_2_8F2C9C3A2496EDD2_OFFSET UNITYSDK_OFFSET(0x15B1BEB0)
#define CLASS_2_BD07726827556B99_METHOD_2_E1974D12B5E346A6_OFFSET UNITYSDK_OFFSET(0x15B1BD90)
#define CLASS_2_BD07726827556B99__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1BFB0)
#define CLASS_2_BD07726827556B99__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B1BCC0)

inline static constexpr unsigned int Class_2_BD07726827556B99_TypeDefinitionIndex = 68680;

class Class_2_BD07726827556B99 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::GameObject* Field_2_2; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::RPG::GameCore::AttackDamageType Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD07726827556B99__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD07726827556B99__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BD07726827556B99_METHOD_2_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1974D12B5E346A6(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_BD07726827556B99_METHOD_2_E1974D12B5E346A6_OFFSET))(this, a1);
	}

	::System::String* Method_2_8F2C9C3A2496EDD2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_BD07726827556B99_METHOD_2_8F2C9C3A2496EDD2_OFFSET))(this, a1);
	}
};
