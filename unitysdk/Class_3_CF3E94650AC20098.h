#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DelayExecuteOnNextWave_1.h"

class Class_3_CF3E94650AC20098_Class_1_42B54E988F80C53A;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_CF3E94650AC20098_METHOD_3_266E1F1B4DF2F723_OFFSET UNITYSDK_OFFSET(0x14FEDA50)
#define CLASS_3_CF3E94650AC20098__CTOR_OFFSET UNITYSDK_OFFSET(0x14FEDAF0)

inline static constexpr unsigned int Class_3_CF3E94650AC20098_TypeDefinitionIndex = 52628;

class Class_3_CF3E94650AC20098 : public ::RPG::GameCore::DelayExecuteOnNextWave_1<::Class_3_CF3E94650AC20098_Class_1_42B54E988F80C53A*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF3E94650AC20098__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_266E1F1B4DF2F723(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CF3E94650AC20098_METHOD_3_266E1F1B4DF2F723_OFFSET))(this, a1);
	}
};
