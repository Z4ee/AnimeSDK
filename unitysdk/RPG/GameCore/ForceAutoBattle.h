#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_7E5FBF7AE067F79F_OFFSET UNITYSDK_OFFSET(0x17216080)
#define RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_98E74177EFD8BC60_OFFSET UNITYSDK_OFFSET(0x17216100)
#define RPG_GAMECORE_FORCEAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x172160D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceAutoBattle_TypeDefinitionIndex = 21503;

	class ForceAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::RPG::Client::TextID OperationTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E5FBF7AE067F79F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_7E5FBF7AE067F79F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98E74177EFD8BC60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_98E74177EFD8BC60_OFFSET))(a1, a2);
		}
	};
}
