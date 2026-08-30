#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRecommendAvatarState.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_3;
class Class_1_65EC9CACFF41765E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleDisplayAvatar; }

#define CLASS_1_79CDF1654A8D2474_METHOD_1_258F4B3BFE3D5D38_OFFSET UNITYSDK_OFFSET(0x15637000)
#define CLASS_1_79CDF1654A8D2474_METHOD_1_B95DFD910BABE4A4_OFFSET UNITYSDK_OFFSET(0x15637C30)
#define CLASS_1_79CDF1654A8D2474_METHOD_1_E066B99AE18FD7AC_OFFSET UNITYSDK_OFFSET(0x156370A0)
#define CLASS_1_79CDF1654A8D2474_METHOD_1_E2964A65A1601E1C_OFFSET UNITYSDK_OFFSET(0x15636E50)
#define CLASS_1_79CDF1654A8D2474__CTOR_OFFSET UNITYSDK_OFFSET(0x15636E40)

inline static constexpr unsigned int Class_1_79CDF1654A8D2474_TypeDefinitionIndex = 64003;

class Class_1_79CDF1654A8D2474 : public ::System::Object
{
public:
	::Class_1_65EC9CACFF41765E* BOMFMBPNFJI; // 0x10

	::System::Void _ctor(::Class_1_65EC9CACFF41765E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_65EC9CACFF41765E*))((::PBYTE)hIl2Cpp + CLASS_1_79CDF1654A8D2474__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleDisplayAvatar* Method_1_E2964A65A1601E1C(::Class_1_1CBA230307F9C289_3* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::Class_1_1CBA230307F9C289_3*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_79CDF1654A8D2474_METHOD_1_E2964A65A1601E1C_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ExpeditionBattleRecommendAvatarState Method_1_258F4B3BFE3D5D38(::Class_1_1CBA230307F9C289_3* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ExpeditionBattleRecommendAvatarState(*)(::PVOID, ::Class_1_1CBA230307F9C289_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79CDF1654A8D2474_METHOD_1_258F4B3BFE3D5D38_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ExpeditionBattleDisplayAvatar* Method_1_B95DFD910BABE4A4(::Class_1_1CBA230307F9C289_3* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ExpeditionBattleDisplayAvatar*(*)(::PVOID, ::Class_1_1CBA230307F9C289_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79CDF1654A8D2474_METHOD_1_B95DFD910BABE4A4_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_E066B99AE18FD7AC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79CDF1654A8D2474_METHOD_1_E066B99AE18FD7AC_OFFSET))(this, a1, a2);
	}
};
