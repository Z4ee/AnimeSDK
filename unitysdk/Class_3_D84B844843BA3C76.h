#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_44637C6D4CD7073A.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_D84B844843BA3C76_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x13BCAA50)
#define CLASS_3_D84B844843BA3C76_METHOD_3_1881374A62156605_OFFSET UNITYSDK_OFFSET(0x13BCA9E0)
#define CLASS_3_D84B844843BA3C76_METHOD_3_190CB4F8FD0AF68F_OFFSET UNITYSDK_OFFSET(0x13BCAA60)
#define CLASS_3_D84B844843BA3C76_METHOD_3_3CA3ACBADE4EC805_OFFSET UNITYSDK_OFFSET(0x13BCA8B0)
#define CLASS_3_D84B844843BA3C76_METHOD_3_51373962B405EC70_OFFSET UNITYSDK_OFFSET(0x13BCAA70)
#define CLASS_3_D84B844843BA3C76_METHOD_3_FB5CB7BBA515E5C3_OFFSET UNITYSDK_OFFSET(0x13BCA760)
#define CLASS_3_D84B844843BA3C76__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCA710)

inline static constexpr unsigned int Class_3_D84B844843BA3C76_TypeDefinitionIndex = 53259;

class Class_3_D84B844843BA3C76 : public ::Class_2_44637C6D4CD7073A
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x90
	::System::Nullable_1<::System::Single> Field_3_1; // 0x94
	::System::Nullable_1<::System::Single> Field_3_2; // 0x9C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB5CB7BBA515E5C3(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76_METHOD_3_FB5CB7BBA515E5C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3CA3ACBADE4EC805(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76_METHOD_3_3CA3ACBADE4EC805_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_3_1881374A62156605(::RPG::GameCore::ST_EnchantTargetDistanceType a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::ST_EnchantTargetDistanceType))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76_METHOD_3_1881374A62156605_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_3_190CB4F8FD0AF68F(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76_METHOD_3_190CB4F8FD0AF68F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_51373962B405EC70(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D84B844843BA3C76_METHOD_3_51373962B405EC70_OFFSET))(this, a1);
	}
};
