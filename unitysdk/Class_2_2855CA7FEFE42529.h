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

#define CLASS_2_2855CA7FEFE42529_METHOD_2_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0x923CAB0)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x923D3D0)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x923D370)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_8A06F5038D7B02AD_OFFSET UNITYSDK_OFFSET(0x923D110)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x923CBB0)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x923D300)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x923CC60)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x923CC20)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_F20F38AE476FC6C9_OFFSET UNITYSDK_OFFSET(0x923CD30)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_F4257AE74F5DF7C8_OFFSET UNITYSDK_OFFSET(0x923CCA0)
#define CLASS_2_2855CA7FEFE42529__CTOR_OFFSET UNITYSDK_OFFSET(0x923D250)
#define CLASS_2_2855CA7FEFE42529__ONBIND_OFFSET UNITYSDK_OFFSET(0x923CB20)
#define CLASS_2_2855CA7FEFE42529___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x923D2A0)

inline static constexpr unsigned int Class_2_2855CA7FEFE42529_TypeDefinitionIndex = 66222;

class Class_2_2855CA7FEFE42529 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x68
	::Class_1_D1797279B49332E9* Field_2_2; // 0x70
	::System::Collections::Generic::List_1<::Class_2_51BFA7C7D45F9465*>* Field_2_3; // 0x78
	::System::Int32 Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_21631744E68FDB6A_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_F4257AE74F5DF7C8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_F4257AE74F5DF7C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8A06F5038D7B02AD(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_8A06F5038D7B02AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F20F38AE476FC6C9(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_F20F38AE476FC6C9_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
