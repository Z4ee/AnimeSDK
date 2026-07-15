#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E04EA714F2B36785.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_78BAF2833B6DDD9B_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17D518F0)
#define CLASS_3_78BAF2833B6DDD9B_METHOD_3_1881374A62156605_OFFSET UNITYSDK_OFFSET(0x17D51880)
#define CLASS_3_78BAF2833B6DDD9B_METHOD_3_3CA3ACBADE4EC805_OFFSET UNITYSDK_OFFSET(0x17D51750)
#define CLASS_3_78BAF2833B6DDD9B_METHOD_3_FB5CB7BBA515E5C3_OFFSET UNITYSDK_OFFSET(0x17D51600)
#define CLASS_3_78BAF2833B6DDD9B__CTOR_OFFSET UNITYSDK_OFFSET(0x17D515B0)

inline static constexpr unsigned int Class_3_78BAF2833B6DDD9B_TypeDefinitionIndex = 54474;

class Class_3_78BAF2833B6DDD9B : public ::Class_2_E04EA714F2B36785
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x90
	::System::Nullable_1<::System::Single> Field_3_1; // 0x94
	::System::Nullable_1<::System::Single> Field_3_2; // 0x9C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_78BAF2833B6DDD9B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB5CB7BBA515E5C3(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_78BAF2833B6DDD9B_METHOD_3_FB5CB7BBA515E5C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3CA3ACBADE4EC805(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_78BAF2833B6DDD9B_METHOD_3_3CA3ACBADE4EC805_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_3_1881374A62156605(::RPG::GameCore::ST_EnchantTargetDistanceType a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::ST_EnchantTargetDistanceType))((::PBYTE)hIl2Cpp + CLASS_3_78BAF2833B6DDD9B_METHOD_3_1881374A62156605_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78BAF2833B6DDD9B_GET_FLAG_OFFSET))(this);
	}
};
