#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_8B2F13FB53C16346_OFFSET UNITYSDK_OFFSET(0x18752590)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_9FEB8ED0C604758C_OFFSET UNITYSDK_OFFSET(0x187524C0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18752540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEvolveBuildCountDownItemShow_TypeDefinitionIndex = 23380;

	class ByIsEvolveBuildCountDownItemShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9FEB8ED0C604758C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_9FEB8ED0C604758C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B2F13FB53C16346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_8B2F13FB53C16346_OFFSET))(a1, a2);
		}
	};
}
