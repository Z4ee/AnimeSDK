#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }

#define CLASS_1_72DA79ECBACE6D92_METHOD_1_22DA4C360302F32F_OFFSET UNITYSDK_OFFSET(0x90BE870)
#define CLASS_1_72DA79ECBACE6D92_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x90BE950)
#define CLASS_1_72DA79ECBACE6D92_METHOD_1_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x90BE650)
#define CLASS_1_72DA79ECBACE6D92_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x90BE5E0)
#define CLASS_1_72DA79ECBACE6D92_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x90BE590)
#define CLASS_1_72DA79ECBACE6D92_METHOD_1_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0x90BE900)
#define CLASS_1_72DA79ECBACE6D92_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x90BE9C0)
#define CLASS_1_72DA79ECBACE6D92__CTOR_OFFSET UNITYSDK_OFFSET(0x90BE580)

inline static constexpr unsigned int Class_1_72DA79ECBACE6D92_TypeDefinitionIndex = 66128;

class Class_1_72DA79ECBACE6D92 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::LevelUIComponent* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::Class_1_70697F531F566942_2* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_70697F531F566942_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Boolean Method_1_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_3BEE013982122797_OFFSET))(this);
	}

	::System::Boolean Method_1_22DA4C360302F32F(::System::Object* a1, ::Class_1_70697F531F566942_2*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Class_1_70697F531F566942_2*&))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_22DA4C360302F32F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72DA79ECBACE6D92_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}
};
