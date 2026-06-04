#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_METHOD_3_C3B0DC248D54DD8D_OFFSET UNITYSDK_OFFSET(0x194DE850)
#define RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_METHOD_3_CE5A69633C5DF8FC_OFFSET UNITYSDK_OFFSET(0x194DE7D0)
#define RPG_GAMECORE_BLOCKCAMERADITHERUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x194DE820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockCameraDitherUpdate_TypeDefinitionIndex = 21527;

	class BlockCameraDitherUpdate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single BlockTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCAMERADITHERUPDATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE5A69633C5DF8FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockCameraDitherUpdate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockCameraDitherUpdate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_METHOD_3_CE5A69633C5DF8FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C3B0DC248D54DD8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BlockCameraDitherUpdate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BlockCameraDitherUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKCAMERADITHERUPDATE_METHOD_3_C3B0DC248D54DD8D_OFFSET))(a1, a2);
		}
	};
}
