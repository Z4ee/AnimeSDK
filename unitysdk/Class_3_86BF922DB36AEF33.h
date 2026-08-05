#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68B3FFD528A3EFF0.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_86BF922DB36AEF33_METHOD_3_EE8E5F15C4E5FB20_OFFSET UNITYSDK_OFFSET(0x1292EBE0)
#define CLASS_3_86BF922DB36AEF33__CTOR_OFFSET UNITYSDK_OFFSET(0x1292EB30)

inline static constexpr unsigned int Class_3_86BF922DB36AEF33_TypeDefinitionIndex = 72294;

class Class_3_86BF922DB36AEF33 : public ::Class_2_68B3FFD528A3EFF0
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_3_0; // 0x20

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagContainer& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_86BF922DB36AEF33__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_EE8E5F15C4E5FB20(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_86BF922DB36AEF33_METHOD_3_EE8E5F15C4E5FB20_OFFSET))(this, a1);
	}
};
