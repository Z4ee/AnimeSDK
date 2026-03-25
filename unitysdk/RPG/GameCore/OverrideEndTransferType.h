#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_5AC1963ADCEB0998_OFFSET UNITYSDK_OFFSET(0x174824F0)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_E3B4CCC538AA4471_OFFSET UNITYSDK_OFFSET(0x17482460)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x174824C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEndTransferType_TypeDefinitionIndex = 20090;

	class OverrideEndTransferType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StoryBlackType BlackType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3B4CCC538AA4471(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEndTransferType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEndTransferType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_E3B4CCC538AA4471_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5AC1963ADCEB0998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEndTransferType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEndTransferType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_5AC1963ADCEB0998_OFFSET))(a1, a2);
		}
	};
}
