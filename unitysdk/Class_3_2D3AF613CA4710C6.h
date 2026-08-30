#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2D3AF613CA4710C6_METHOD_3_FB1642A74D67A3A6_OFFSET UNITYSDK_OFFSET(0x11EECEF0)
#define CLASS_3_2D3AF613CA4710C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11EECB00)
#define CLASS_3_2D3AF613CA4710C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EEC9E0)
#define CLASS_3_2D3AF613CA4710C6__CTOR_OFFSET UNITYSDK_OFFSET(0x11EECAD0)

inline static constexpr unsigned int Class_3_2D3AF613CA4710C6_TypeDefinitionIndex = 55537;

class Class_3_2D3AF613CA4710C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetActionDelay*>
{
public:
	static ::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet_ONFNEAPDKDG()
	{
		return (::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2D3AF613CA4710C6_TypeDefinitionIndex)->GetStaticField(0x412C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2D3AF613CA4710C6__CCTOR_OFFSET))();
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionDelay*))((::PBYTE)hIl2Cpp + CLASS_3_2D3AF613CA4710C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D3AF613CA4710C6_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_3_FB1642A74D67A3A6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_2D3AF613CA4710C6_METHOD_3_FB1642A74D67A3A6_OFFSET))(a1, a2, a3);
	}
};
