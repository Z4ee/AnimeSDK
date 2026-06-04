#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_D1797279B49332E9;
class Class_2_51BFA7C7D45F9465;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0x12AC5130)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12AC5BB0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12AC5B50)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x12AC5AF0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_69329D34001B92B1_OFFSET UNITYSDK_OFFSET(0x12AC53B0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_6ECD7CF192BEA54C_OFFSET UNITYSDK_OFFSET(0x12AC5320)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_A773822F5536EC1B_OFFSET UNITYSDK_OFFSET(0x12AC58F0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x12AC5220)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12AC52E0)
#define CLASS_2_B77A3EC73E0C14F5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AC52A0)
#define CLASS_2_B77A3EC73E0C14F5__CTOR_OFFSET UNITYSDK_OFFSET(0x12AC5A40)
#define CLASS_2_B77A3EC73E0C14F5__ONBIND_OFFSET UNITYSDK_OFFSET(0x12AC5190)
#define CLASS_2_B77A3EC73E0C14F5___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12AC5A90)

inline static constexpr unsigned int Class_2_B77A3EC73E0C14F5_TypeDefinitionIndex = 67161;

class Class_2_B77A3EC73E0C14F5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_1_D1797279B49332E9* Field_2_0; // 0x60
	::System::Collections::Generic::List_1<::Class_2_51BFA7C7D45F9465*>* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_3; // 0x78
	::System::Int32 Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_21631744E68FDB6A_OFFSET))(this);
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

	::System::Void Method_2_A773822F5536EC1B(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_A773822F5536EC1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69329D34001B92B1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_69329D34001B92B1_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77A3EC73E0C14F5_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
