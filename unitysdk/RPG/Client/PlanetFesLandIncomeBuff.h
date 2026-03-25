#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"

class Class_0_16E4307DCC419505_670;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0x9F9D0D0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x9F9D200)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET UNITYSDK_OFFSET(0x9F9D090)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x9F9CC50)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x9F9CDF0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9F9CE60)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9D480)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0x9F9D260)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9F9CCF0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x9F9CD70)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x9F9CC60)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETDESC_OFFSET UNITYSDK_OFFSET(0x9F9D590)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9F9D490)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x9F9D510)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandIncomeBuff_TypeDefinitionIndex = 54130;

	class PlanetFesLandIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::RPG::GameCore::PlanetFesLandType _TargetLandType; // 0x30
		::System::UInt32 _PercentIncrease; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* param)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET))(this, param);
		}

		::System::String* _GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET))(this);
		}

		::System::String* _GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, avatar);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType GetTargetLandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_670* Combine(::RPG::Client::IPlanetFesBuff* other)
		{
			return ((::Class_0_16E4307DCC419505_670*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET))(this, other);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETDESC_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETICONPATH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy__GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETDESC_OFFSET))(this);
		}
	};
}
