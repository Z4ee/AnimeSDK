#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_199C92B758EE3BC4;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_60475C2D4D583319_METHOD_1_2313407289FC2813_OFFSET UNITYSDK_OFFSET(0x1790FCB0)
#define CLASS_1_60475C2D4D583319_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1790ED40)
#define CLASS_1_60475C2D4D583319_METHOD_1_3978A63BC8CCDBF6_OFFSET UNITYSDK_OFFSET(0x1790EE60)
#define CLASS_1_60475C2D4D583319_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1790ECC0)
#define CLASS_1_60475C2D4D583319_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1790EB60)
#define CLASS_1_60475C2D4D583319_METHOD_1_C75FBCF88EADEF52_OFFSET UNITYSDK_OFFSET(0x1790F000)
#define CLASS_1_60475C2D4D583319_METHOD_1_DB724851FEB3D97C_OFFSET UNITYSDK_OFFSET(0x1790EBD0)
#define CLASS_1_60475C2D4D583319_METHOD_1_DDF954C8FE9E6001_OFFSET UNITYSDK_OFFSET(0x1790F100)
#define CLASS_1_60475C2D4D583319_METHOD_1_EDCA216BAAE60E47_OFFSET UNITYSDK_OFFSET(0x1790ED90)
#define CLASS_1_60475C2D4D583319__CCTOR_OFFSET UNITYSDK_OFFSET(0x1790FFB0)
#define CLASS_1_60475C2D4D583319__CTOR_OFFSET UNITYSDK_OFFSET(0x1790EAC0)

inline static constexpr unsigned int Class_1_60475C2D4D583319_TypeDefinitionIndex = 52691;

class Class_1_60475C2D4D583319 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_EPBICICIEJF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_60475C2D4D583319_TypeDefinitionIndex)->GetStaticField(0x13270);
	}
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x10
	::Il2CppArray<::System::Int32>* BHNGELGFGHI; // 0x18
	::Class_2_A0580152EB393340* JCHMONHBIFJ; // 0x20
	::RPG::GameCore::GameEntity* BCCAEHCKGEI; // 0x28
	::Class_2_199C92B758EE3BC4* BLGPNMHAHPB; // 0x30
	::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x38
	::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x40
	::RPG::GameCore::FollowSideType POBLMPLBDKC; // 0x48
	::RPG::GameCore::AdvancedFollowType FKOGIANLJPP; // 0x4C
	::System::Single INNBNACKGGH; // 0x50
	::System::Single MJPENADFCNM; // 0x54
	::RPG::GameCore::FollowSideType FJDPAKGGEBK; // 0x58
	::System::Int32 LCJDAMMJLEI; // 0x5C
	::System::Single LHABGBJIPMK; // 0x60
	::System::Single GKBKMPGIAFK; // 0x64

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

	::System::Void Method_1_DDF954C8FE9E6001(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319_METHOD_1_DDF954C8FE9E6001_OFFSET))(this, a1, a2, a3);
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
