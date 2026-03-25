#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EraRegion; }
namespace RPG::GameCore { class InitEraFlipperRegion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F79ECF695379FE72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9EF0D0)
#define CLASS_3_F79ECF695379FE72__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EF0A0)
#define CLASS_3_F79ECF695379FE72__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xA9EF350)

inline static constexpr unsigned int Class_3_F79ECF695379FE72_TypeDefinitionIndex = 42716;

class Class_3_F79ECF695379FE72 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitEraFlipperRegion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitEraFlipperRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitEraFlipperRegion*))((::PBYTE)hIl2Cpp + CLASS_3_F79ECF695379FE72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F79ECF695379FE72_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean _OnTaskBegin_b__1_0(::RPG::GameCore::EraRegion* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + CLASS_3_F79ECF695379FE72__ONTASKBEGIN_B__1_0_OFFSET))(this, x);
	}
};
