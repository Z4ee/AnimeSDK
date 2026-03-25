#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_8B9A326D781E1653;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_60475C2D4D583319_METHOD_1_2313407289FC2813_OFFSET UNITYSDK_OFFSET(0x9EF7440)
#define CLASS_1_60475C2D4D583319_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9EF65B0)
#define CLASS_1_60475C2D4D583319_METHOD_1_3978A63BC8CCDBF6_OFFSET UNITYSDK_OFFSET(0x9EF66D0)
#define CLASS_1_60475C2D4D583319_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9EF6540)
#define CLASS_1_60475C2D4D583319_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x9EF63F0)
#define CLASS_1_60475C2D4D583319_METHOD_1_728681E981AAA87B_OFFSET UNITYSDK_OFFSET(0x9EF6970)
#define CLASS_1_60475C2D4D583319_METHOD_1_C75FBCF88EADEF52_OFFSET UNITYSDK_OFFSET(0x9EF6870)
#define CLASS_1_60475C2D4D583319_METHOD_1_DB724851FEB3D97C_OFFSET UNITYSDK_OFFSET(0x9EF6460)
#define CLASS_1_60475C2D4D583319_METHOD_1_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0x9EF6600)
#define CLASS_1_60475C2D4D583319__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EF7740)
#define CLASS_1_60475C2D4D583319__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF6350)

inline static constexpr unsigned int Class_1_60475C2D4D583319_TypeDefinitionIndex = 42431;

class Class_1_60475C2D4D583319 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_15()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_60475C2D4D583319_TypeDefinitionIndex)->GetStaticField(0x129C0);
	}
	::RPG::GameCore::GameEntity* Field_1_4; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_7; // 0x18
	::RPG::GameCore::GameEntity* Field_1_0; // 0x20
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x28
	::Class_2_8B9A326D781E1653* Field_1_3; // 0x30
	::RPG::GameCore::TransformComponent* Field_1_5; // 0x38
	::Class_2_A0580152EB393340* Field_1_2; // 0x40
	::System::Single Field_1_12; // 0x48
	::RPG::GameCore::FollowSideType Field_1_8; // 0x4C
	::System::Single Field_1_11; // 0x50
	::System::Int32 Field_1_14; // 0x54
	::RPG::GameCore::AdvancedFollowType Field_1_6; // 0x58
	::System::Single Field_1_10; // 0x5C
	::System::Single Field_1_13; // 0x60
	::RPG::GameCore::FollowSideType Field_1_9; // 0x64

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdvancedFollowType a2, ::Il2CppArray<::System::Int32>* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdvancedFollowType, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319__CCTOR_OFFSET))();
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_EDCA216BAAE60E47(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_EDCA216BAAE60E47_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB724851FEB3D97C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_DB724851FEB3D97C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3978A63BC8CCDBF6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_3978A63BC8CCDBF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_728681E981AAA87B(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_728681E981AAA87B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C75FBCF88EADEF52(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_C75FBCF88EADEF52_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2313407289FC2813(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_2313407289FC2813_OFFSET))(this, a1, a2);
	}
};
