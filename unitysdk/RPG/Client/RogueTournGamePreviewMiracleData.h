#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

class Class_0_16E4307DCC419505_814;
class Class_1_E201301D8236C5DF;
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB0C8C90)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATEMOCKBROKEN_OFFSET UNITYSDK_OFFSET(0xB0C8B90)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0C8A50)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xB0C8DB0)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CREATE_OFFSET UNITYSDK_OFFSET(0xB0C8AA0)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C8A40)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xB0C8BE0)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xB0C8DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGamePreviewMiracleData_TypeDefinitionIndex = 62381;

	class RogueTournGamePreviewMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::Class_0_16E4307DCC419505_814* _GlobalBlackboardProxy; // 0x60
		::System::Boolean _IsBroken; // 0x68

		::System::Void _ctor(::Class_0_16E4307DCC419505_814* globalBlackboardProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_814*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CTOR_OFFSET))(this, globalBlackboardProxy);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* Create(::System::UInt32 miracleID, ::Class_1_E201301D8236C5DF* blackboardProxyFactory)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::Class_1_E201301D8236C5DF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATE_OFFSET))(miracleID, blackboardProxyFactory);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* CreateMockBroken(::System::UInt32 miracleID, ::Class_1_E201301D8236C5DF* blackboardProxyFactory)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::Class_1_E201301D8236C5DF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATEMOCKBROKEN_OFFSET))(miracleID, blackboardProxyFactory);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* _Create(::System::UInt32 miracleID, ::System::Boolean isBroken, ::Class_1_E201301D8236C5DF* blackboardProxyFactory)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::System::Boolean, ::Class_1_E201301D8236C5DF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CREATE_OFFSET))(miracleID, isBroken, blackboardProxyFactory);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* miracleRow, ::RPG::GameCore::RogueMiracleDisplayRow* displayRow, ::RPG::GameCore::RogueMiracleEffectRow* effectRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__INITFROMROWS_OFFSET))(this, miracleRow, displayRow, effectRow);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitFromRows(::RPG::GameCore::RogueTournMiracleRow* P0, ::RPG::GameCore::RogueMiracleDisplayRow* P1, ::RPG::GameCore::RogueMiracleEffectRow* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA___IFIXBASEPROXY__INITFROMROWS_OFFSET))(this, P0, P1, P2);
		}
	};
}
