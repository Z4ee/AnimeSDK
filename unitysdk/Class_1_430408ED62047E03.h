#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1102;
class Class_0_16E4307DCC419505_460;
class Class_1_4DF1A3BD91ECD091;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_430408ED62047E03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153D1100)
#define CLASS_1_430408ED62047E03_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x153D16E0)
#define CLASS_1_430408ED62047E03_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x153D1700)
#define CLASS_1_430408ED62047E03_METHOD_1_2DA90F020EB3A373_OFFSET UNITYSDK_OFFSET(0x153D1500)
#define CLASS_1_430408ED62047E03_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x153D12E0)
#define CLASS_1_430408ED62047E03_METHOD_1_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x153D1620)
#define CLASS_1_430408ED62047E03_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x153D1490)
#define CLASS_1_430408ED62047E03_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x153D1190)
#define CLASS_1_430408ED62047E03_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x153D1380)
#define CLASS_1_430408ED62047E03_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x153D1270)
#define CLASS_1_430408ED62047E03_METHOD_1_C547993A0787B6BB_OFFSET UNITYSDK_OFFSET(0x153D0E30)
#define CLASS_1_430408ED62047E03_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x153D0F20)
#define CLASS_1_430408ED62047E03_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x153D16F0)
#define CLASS_1_430408ED62047E03_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x153D1710)
#define CLASS_1_430408ED62047E03__CTOR_OFFSET UNITYSDK_OFFSET(0x153D0F10)

inline static constexpr unsigned int Class_1_430408ED62047E03_TypeDefinitionIndex = 71646;

class Class_1_430408ED62047E03 : public ::System::Object
{
public:
	::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x10
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
	::RPG::GameCore::TurnBasedGameMode* BHJDJDPLCLP; // 0x20
	::System::Action_1<::Class_0_16E4307DCC419505_1102*>* JLBLEBFNIIM; // 0x28
	::System::String* _UniqueName_k__BackingField; // 0x30
	::System::Action_1<::Class_0_16E4307DCC419505_1102*>* OPHEBAAKIHB; // 0x38
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x40
	::System::Boolean EINNACFPAEN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03__CTOR_OFFSET))(this);
	}

	static ::Class_1_430408ED62047E03* Method_1_C547993A0787B6BB(::Class_1_4DF1A3BD91ECD091* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>* a3)
	{
		return ((::Class_1_430408ED62047E03*(*)(::Class_1_4DF1A3BD91ECD091*, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>*, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_C547993A0787B6BB_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_2DA90F020EB3A373(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_2DA90F020EB3A373_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_8F059A365E90744C_OFFSET))(this);
	}

	::System::Boolean Method_1_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageParam* get_Param()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_GET_PARAM_OFFSET))(this);
	}

	::System::Void set_Param(::RPG::Client::BattleShowUIPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_SET_PARAM_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_SET_UNIQUENAME_OFFSET))(this, a1);
	}
};
