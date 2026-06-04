#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtDamageExtraDataBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_METHOD_3_0590B5B643E121B7_OFFSET UNITYSDK_OFFSET(0x19BDB840)
#define RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_METHOD_3_99FD997239B2E03D_OFFSET UNITYSDK_OFFSET(0x19BDBA10)
#define RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDB9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleDamageExtraData_TypeDefinitionIndex = 22840;

	class RtBattleDamageExtraData : public ::RPG::GameCore::RtDamageExtraDataBase
	{
	public:
		::RPG::GameCore::DynamicFloat* AddSPRatio; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0590B5B643E121B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleDamageExtraData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleDamageExtraData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_METHOD_3_0590B5B643E121B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99FD997239B2E03D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleDamageExtraData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleDamageExtraData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_METHOD_3_99FD997239B2E03D_OFFSET))(a1, a2);
		}
	};
}
