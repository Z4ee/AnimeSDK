#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_136389DBE8071417_OFFSET UNITYSDK_OFFSET(0x1871FF50)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_7B77956AF30008FD_OFFSET UNITYSDK_OFFSET(0x1871FE80)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1871FF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCanAutoUseItemToRecoverMP_TypeDefinitionIndex = 19129;

	class ByCanAutoUseItemToRecoverMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7B77956AF30008FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_7B77956AF30008FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_136389DBE8071417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_136389DBE8071417_OFFSET))(a1, a2);
		}
	};
}
