#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/MVector3.h"

namespace RPG::GameCore { class ChessAttackHit; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define CLASS_3_886275C9A12DB80A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115F9750)
#define CLASS_3_886275C9A12DB80A_METHOD_3_0555B65E3AB1CB85_OFFSET UNITYSDK_OFFSET(0x115FA010)
#define CLASS_3_886275C9A12DB80A_METHOD_3_20311433A54F0945_OFFSET UNITYSDK_OFFSET(0x115FA490)
#define CLASS_3_886275C9A12DB80A_METHOD_3_7F4D84BADBB4ADD5_OFFSET UNITYSDK_OFFSET(0x115FA580)
#define CLASS_3_886275C9A12DB80A_METHOD_3_936C368CBFC1FD6C_OFFSET UNITYSDK_OFFSET(0x115F9900)
#define CLASS_3_886275C9A12DB80A_METHOD_3_B37CAE09F8928257_OFFSET UNITYSDK_OFFSET(0x115FA390)
#define CLASS_3_886275C9A12DB80A_METHOD_3_FF0BC42E0F670651_OFFSET UNITYSDK_OFFSET(0x115FABF0)
#define CLASS_3_886275C9A12DB80A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115F9790)
#define CLASS_3_886275C9A12DB80A__CTOR_OFFSET UNITYSDK_OFFSET(0x115F9720)
#define CLASS_3_886275C9A12DB80A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115FAE10)

inline static constexpr unsigned int Class_3_886275C9A12DB80A_TypeDefinitionIndex = 45196;

class Class_3_886275C9A12DB80A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChessAttackHit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessAttackHit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessAttackHit*))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_936C368CBFC1FD6C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_METHOD_3_936C368CBFC1FD6C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0555B65E3AB1CB85(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::ChessAttackHit* a4, ::RPG::GameCore::TaskContext* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ChessAttackHit*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_METHOD_3_0555B65E3AB1CB85_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_20311433A54F0945(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::ChessAttackHit* a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessAttackHit*, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_METHOD_3_20311433A54F0945_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_7F4D84BADBB4ADD5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::ChessAttackHit* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ChessAttackHit*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_METHOD_3_7F4D84BADBB4ADD5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_B37CAE09F8928257(::RPG::GameCore::ChessAttackHit* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Boolean a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChessAttackHit*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_METHOD_3_B37CAE09F8928257_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_FF0BC42E0F670651(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A_METHOD_3_FF0BC42E0F670651_OFFSET))(a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
