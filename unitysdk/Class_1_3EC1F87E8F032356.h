#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }

#define CLASS_1_3EC1F87E8F032356_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x18F6C8A0)
#define CLASS_1_3EC1F87E8F032356_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x18F6C530)
#define CLASS_1_3EC1F87E8F032356_METHOD_1_4EF39E24235C05BA_OFFSET UNITYSDK_OFFSET(0x18F6C5A0)
#define CLASS_1_3EC1F87E8F032356_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x18F6C4E0)
#define CLASS_1_3EC1F87E8F032356_METHOD_1_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0x18F6C850)
#define CLASS_1_3EC1F87E8F032356_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18F6C910)
#define CLASS_1_3EC1F87E8F032356_METHOD_1_B849FCB244A38937_OFFSET UNITYSDK_OFFSET(0x18F6C7B0)
#define CLASS_1_3EC1F87E8F032356__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6C4D0)

inline static constexpr unsigned int Class_1_3EC1F87E8F032356_TypeDefinitionIndex = 68510;

class Class_1_3EC1F87E8F032356 : public ::System::Object
{
public:
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::Class_1_70697F531F566942_2* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_70697F531F566942_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Boolean Method_1_4EF39E24235C05BA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_4EF39E24235C05BA_OFFSET))(this);
	}

	::System::Boolean Method_1_B849FCB244A38937(::System::Object* a1, ::Class_1_70697F531F566942_2*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Class_1_70697F531F566942_2*&))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_B849FCB244A38937_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EC1F87E8F032356_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
