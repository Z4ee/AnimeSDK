#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuff.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_5F13EE78D95072C9_OFFSET UNITYSDK_OFFSET(0x16F1B400)
#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_C54A77845BD73C9C_OFFSET UNITYSDK_OFFSET(0x16F1B480)
#define RPG_GAMECORE_ADDCLIENTMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1B450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddClientMazeBuff_TypeDefinitionIndex = 19919;

	class AddClientMazeBuff : public ::RPG::GameCore::AddMazeBuff
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5F13EE78D95072C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddClientMazeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddClientMazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_5F13EE78D95072C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C54A77845BD73C9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_C54A77845BD73C9C_OFFSET))(a1, a2);
		}
	};
}
