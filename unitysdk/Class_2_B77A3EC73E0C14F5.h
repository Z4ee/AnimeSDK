#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A474572029D08468;
class Class_2_51BFA7C7D45F9465;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x19C00130)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_69329D34001B92B1_OFFSET UNITYSDK_OFFSET(0x19C003A0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_6ECD7CF192BEA54C_OFFSET UNITYSDK_OFFSET(0x19C00310)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_9711F41B1D434DE5_OFFSET UNITYSDK_OFFSET(0x19C00920)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x19C00220)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19C002D0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19C00290)
#define CLASS_2_B77A3EC73E0C14F5__CTOR_OFFSET UNITYSDK_OFFSET(0x19C00B60)
#define CLASS_2_B77A3EC73E0C14F5__ONBIND_OFFSET UNITYSDK_OFFSET(0x19C00190)

inline static constexpr unsigned int Class_2_B77A3EC73E0C14F5_TypeDefinitionIndex = 71811;

class Class_2_B77A3EC73E0C14F5 : public ::Class_1_34917908B7833130
{
public:
	::System::Collections::Generic::List_1<::Class_2_51BFA7C7D45F9465*>* KMDAIPPCNOE; // 0x60
	::UnityEngine::Transform* GNCFPJIDCLO; // 0x68
	::Class_1_A474572029D08468* ABOBEBEOHPA; // 0x70
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
	::System::Int32 NNGGGKMGJLL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6ECD7CF192BEA54C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_6ECD7CF192BEA54C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9711F41B1D434DE5(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_9711F41B1D434DE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69329D34001B92B1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_69329D34001B92B1_OFFSET))(this, a1, a2);
	}
};
