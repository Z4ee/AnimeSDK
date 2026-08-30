#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_5CFB9B8919BCF2A7_OFFSET UNITYSDK_OFFSET(0x1D23A360)
#define RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_608EA86AF27BC5E6_OFFSET UNITYSDK_OFFSET(0x1D239B00)
#define RPG_GAMECORE_MARBLEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22EB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePredicateConfig_TypeDefinitionIndex = 16652;

	class MarblePredicateConfig : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnSuccess; // 0x10
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnFail; // 0x18
		::System::Boolean Inverse; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_608EA86AF27BC5E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_608EA86AF27BC5E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5CFB9B8919BCF2A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_5CFB9B8919BCF2A7_OFFSET))(a1, a2);
		}
	};
}
