#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"

class Class_0_16E4307DCC419505_821;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0xC416B50)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0xC416C80)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET UNITYSDK_OFFSET(0xC416B10)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xC416680)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0xC416800)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC416870)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xC416EC0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0xC416CE0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC416700)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xC416780)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0xC416690)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETDESC_OFFSET UNITYSDK_OFFSET(0xC416FB0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC416ED0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xC416F40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandIncomeBuff_TypeDefinitionIndex = 62217;

	class PlanetFesLandIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 _PercentIncrease; // 0x30
		::RPG::GameCore::PlanetFesLandType _TargetLandType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET))(this, a1);
		}

		::System::String* _GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET))(this);
		}

		::System::String* _GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType GetTargetLandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_821* Combine(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::Class_0_16E4307DCC419505_821*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET))(this, a1);
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
