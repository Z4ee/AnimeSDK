#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMazeBuff.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_2CE2FCCC7CF7CFD4_OFFSET UNITYSDK_OFFSET(0x1CDB0F00)
#define RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_5F13EE78D95072C9_OFFSET UNITYSDK_OFFSET(0x1CDB0EC0)
#define RPG_GAMECORE_ADDCLIENTMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB0EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddClientMazeBuff_TypeDefinitionIndex = 21506;

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

		static ::System::Void Method_4_2CE2FCCC7CF7CFD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddClientMazeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddClientMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCLIENTMAZEBUFF_METHOD_4_2CE2FCCC7CF7CFD4_OFFSET))(a1, a2);
		}
	};
}
