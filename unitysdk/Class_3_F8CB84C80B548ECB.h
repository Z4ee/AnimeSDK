#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8CB84C80B548ECB_METHOD_3_5E9A0D3C375DBB74_OFFSET UNITYSDK_OFFSET(0x8C0DF00)
#define CLASS_3_F8CB84C80B548ECB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C0DAC0)
#define CLASS_3_F8CB84C80B548ECB__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C0D9C0)
#define CLASS_3_F8CB84C80B548ECB__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0DA90)

inline static constexpr unsigned int Class_3_F8CB84C80B548ECB_TypeDefinitionIndex = 44307;

class Class_3_F8CB84C80B548ECB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetActionDelay*>
{
public:
	static ::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet_Field_3_0()
	{
		return (::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F8CB84C80B548ECB_TypeDefinitionIndex)->GetStaticField(0x48610);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F8CB84C80B548ECB__CCTOR_OFFSET))();
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionDelay*))((::PBYTE)hIl2Cpp + CLASS_3_F8CB84C80B548ECB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8CB84C80B548ECB_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::GameCore::FixPoint Method_3_5E9A0D3C375DBB74(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_F8CB84C80B548ECB_METHOD_3_5E9A0D3C375DBB74_OFFSET))(a1, a2, a3);
	}
};
