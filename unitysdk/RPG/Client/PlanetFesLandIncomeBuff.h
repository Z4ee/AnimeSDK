#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"

class Class_0_16E4307DCC419505_770;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0xACC20E0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0xACC2210)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GETTARGETLANDTYPE_OFFSET UNITYSDK_OFFSET(0xACC20A0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xACC1C60)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0xACC1E00)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xACC1E70)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xACC2490)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0xACC2270)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xACC1D00)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xACC1D80)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0xACC1C70)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETDESC_OFFSET UNITYSDK_OFFSET(0xACC25A0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xACC24A0)
#define RPG_CLIENT_PLANETFESLANDINCOMEBUFF___IFIXBASEPROXY__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xACC2520)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandIncomeBuff_TypeDefinitionIndex = 61293;

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

		::Class_0_16E4307DCC419505_770* Combine(::RPG::Client::IPlanetFesBuff* other)
		{
			return ((::Class_0_16E4307DCC419505_770*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDINCOMEBUFF_COMBINE_OFFSET))(this, other);
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
