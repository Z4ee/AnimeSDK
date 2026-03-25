#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_0DB6079465FD2B06_OFFSET UNITYSDK_OFFSET(0x1703BDB0)
#define RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_D9C5CFA706D6936A_OFFSET UNITYSDK_OFFSET(0x1703BCD0)
#define RPG_GAMECORE_BYTARGETENTITYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703BD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetEntityType_TypeDefinitionIndex = 21222;

	class ByTargetEntityType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D9C5CFA706D6936A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetEntityType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetEntityType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_D9C5CFA706D6936A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DB6079465FD2B06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_0DB6079465FD2B06_OFFSET))(a1, a2);
		}
	};
}
