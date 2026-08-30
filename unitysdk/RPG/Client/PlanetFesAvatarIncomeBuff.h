#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_GETTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xDB384B0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xDB37EB0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_ISAVATARBUFF_OFFSET UNITYSDK_OFFSET(0xDB37EF0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0xDB380A0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xDB38100)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xDB386D0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0xDB384F0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xDB37FA0)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xDB38020)
#define RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0xDB37F30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarIncomeBuff_TypeDefinitionIndex = 66567;

	class PlanetFesAvatarIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 _PercentIncrease; // 0x30
		::System::UInt32 _TargetAvatarID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Boolean IsAvatarBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_ISAVATARBUFF_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__ONINITPARAM_OFFSET))(this, a1);
		}

		::System::String* _GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__GETICONPATH_OFFSET))(this);
		}

		::System::String* _GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::System::UInt32 GetTargetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF_GETTARGETAVATARID_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARINCOMEBUFF__GETDESC_OFFSET))(this);
		}
	};
}
