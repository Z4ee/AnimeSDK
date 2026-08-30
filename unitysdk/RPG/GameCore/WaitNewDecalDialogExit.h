#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_METHOD_3_74D7EC9C22E3FC5F_OFFSET UNITYSDK_OFFSET(0x1DEBC8E0)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_METHOD_3_C7EC7BCBF98C7184_OFFSET UNITYSDK_OFFSET(0x1DEBC920)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitNewDecalDialogExit_TypeDefinitionIndex = 21436;

	class WaitNewDecalDialogExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* WaitDecalList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74D7EC9C22E3FC5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitNewDecalDialogExit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitNewDecalDialogExit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_METHOD_3_74D7EC9C22E3FC5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7EC7BCBF98C7184(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitNewDecalDialogExit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitNewDecalDialogExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_METHOD_3_C7EC7BCBF98C7184_OFFSET))(a1, a2);
		}
	};
}
