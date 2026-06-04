#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

class Class_0_16E4307DCC419505_865;
class Class_1_E201301D8236C5DF;
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC818B70)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATEMOCKBROKEN_OFFSET UNITYSDK_OFFSET(0xC818A70)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC818930)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xC818C90)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CREATE_OFFSET UNITYSDK_OFFSET(0xC818980)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC818920)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xC818AC0)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xC818CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGamePreviewMiracleData_TypeDefinitionIndex = 63314;

	class RogueTournGamePreviewMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::Class_0_16E4307DCC419505_865* _GlobalBlackboardProxy; // 0x60
		::System::Boolean _IsBroken; // 0x68

		::System::Void _ctor(::Class_0_16E4307DCC419505_865* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_865*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* Create(::System::UInt32 a1, ::Class_1_E201301D8236C5DF* a2)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::Class_1_E201301D8236C5DF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* CreateMockBroken(::System::UInt32 a1, ::Class_1_E201301D8236C5DF* a2)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::Class_1_E201301D8236C5DF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATEMOCKBROKEN_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* _Create(::System::UInt32 a1, ::System::Boolean a2, ::Class_1_E201301D8236C5DF* a3)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::System::Boolean, ::Class_1_E201301D8236C5DF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}
	};
}
