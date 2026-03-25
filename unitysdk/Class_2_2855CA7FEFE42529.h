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

#define CLASS_2_2855CA7FEFE42529_METHOD_2_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0xD7EEA80)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD7EF3C0)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD7EF360)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_8A06F5038D7B02AD_OFFSET UNITYSDK_OFFSET(0xD7EF100)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xD7EEB80)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xD7EF2F0)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD7EEC40)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7EEC00)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_F20F38AE476FC6C9_OFFSET UNITYSDK_OFFSET(0xD7EED10)
#define CLASS_2_2855CA7FEFE42529_METHOD_2_F4257AE74F5DF7C8_OFFSET UNITYSDK_OFFSET(0xD7EEC80)
#define CLASS_2_2855CA7FEFE42529__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EF240)
#define CLASS_2_2855CA7FEFE42529__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7EEAF0)
#define CLASS_2_2855CA7FEFE42529___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7EF290)

inline static constexpr unsigned int Class_2_2855CA7FEFE42529_TypeDefinitionIndex = 58855;

class Class_2_2855CA7FEFE42529 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68
	::System::Collections::Generic::List_1<::Class_2_51BFA7C7D45F9465*>* Field_2_3; // 0x70
	::Class_1_D1797279B49332E9* Field_2_2; // 0x78
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
