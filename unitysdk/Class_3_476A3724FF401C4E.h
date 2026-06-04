#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_0F295B2DD1D90472;
class Class_3_71FA5F0CC77EA49D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_476A3724FF401C4E_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13BCC300)
#define CLASS_3_476A3724FF401C4E_METHOD_3_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x13BCC0C0)
#define CLASS_3_476A3724FF401C4E_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x13BCBF10)
#define CLASS_3_476A3724FF401C4E_METHOD_3_B4271063475804C3_OFFSET UNITYSDK_OFFSET(0x13BCC150)
#define CLASS_3_476A3724FF401C4E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BCBCD0)
#define CLASS_3_476A3724FF401C4E__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCBCA0)

inline static constexpr unsigned int Class_3_476A3724FF401C4E_TypeDefinitionIndex = 51351;

class Class_3_476A3724FF401C4E : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_71FA5F0CC77EA49D*>
{
public:
	::Class_2_0F295B2DD1D90472* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_71FA5F0CC77EA49D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_71FA5F0CC77EA49D*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_3_B4271063475804C3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_METHOD_3_B4271063475804C3_OFFSET))(this, a1);
	}

	::System::Void Method_3_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_METHOD_3_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_METHOD_3_128774387667156B_OFFSET))(this);
	}
};
