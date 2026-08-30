#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5CE930D1EB195AB6;
class Class_3_0EDBB2B883C2F751;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_476A3724FF401C4E_3_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15A6A230)
#define CLASS_3_476A3724FF401C4E_3_METHOD_3_5C5FA00D654BE77A_OFFSET UNITYSDK_OFFSET(0x15A6A0B0)
#define CLASS_3_476A3724FF401C4E_3_METHOD_3_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x15A6A020)
#define CLASS_3_476A3724FF401C4E_3_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x15A69E70)
#define CLASS_3_476A3724FF401C4E_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A69C60)
#define CLASS_3_476A3724FF401C4E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15A69C30)

inline static constexpr unsigned int Class_3_476A3724FF401C4E_3_TypeDefinitionIndex = 55158;

class Class_3_476A3724FF401C4E_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0EDBB2B883C2F751*>
{
public:
	::Class_2_5CE930D1EB195AB6* DHIMCKEAEAP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0EDBB2B883C2F751* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0EDBB2B883C2F751*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_3_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_3_5C5FA00D654BE77A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_3_METHOD_3_5C5FA00D654BE77A_OFFSET))(this, a1);
	}

	::System::Void Method_3_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_3_METHOD_3_7003271FF3C0F5CC_OFFSET))(this, a1);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_476A3724FF401C4E_3_METHOD_3_128774387667156B_OFFSET))(this);
	}
};
