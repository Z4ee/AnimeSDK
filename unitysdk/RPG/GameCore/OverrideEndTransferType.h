#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_2A770C9659A5C93B_OFFSET UNITYSDK_OFFSET(0x1BB06DC0)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_5AC1963ADCEB0998_OFFSET UNITYSDK_OFFSET(0x1BB06E10)
#define RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB06E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideEndTransferType_TypeDefinitionIndex = 21115;

	class OverrideEndTransferType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StoryBlackType BlackType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A770C9659A5C93B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEndTransferType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEndTransferType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_2A770C9659A5C93B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5AC1963ADCEB0998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideEndTransferType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideEndTransferType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEENDTRANSFERTYPE_METHOD_3_5AC1963ADCEB0998_OFFSET))(a1, a2);
		}
	};
}
