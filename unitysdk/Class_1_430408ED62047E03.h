#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_955;
class Class_1_D877D08219FBA993;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_430408ED62047E03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DD8FA0)
#define CLASS_1_430408ED62047E03_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x11DD95F0)
#define CLASS_1_430408ED62047E03_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x11DD9610)
#define CLASS_1_430408ED62047E03_METHOD_1_0235E48C0EB03D7C_OFFSET UNITYSDK_OFFSET(0x11DD9420)
#define CLASS_1_430408ED62047E03_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x11DD90F0)
#define CLASS_1_430408ED62047E03_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11DD8F10)
#define CLASS_1_430408ED62047E03_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x11DD9030)
#define CLASS_1_430408ED62047E03_METHOD_1_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x11DD9530)
#define CLASS_1_430408ED62047E03_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11DD93C0)
#define CLASS_1_430408ED62047E03_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x11DD8D40)
#define CLASS_1_430408ED62047E03_METHOD_1_C547993A0787B6BB_OFFSET UNITYSDK_OFFSET(0x11DD8C40)
#define CLASS_1_430408ED62047E03_METHOD_1_E01B93D0583BC4C7_OFFSET UNITYSDK_OFFSET(0x11DD9150)
#define CLASS_1_430408ED62047E03_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x11DD9600)
#define CLASS_1_430408ED62047E03_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x11DD9620)
#define CLASS_1_430408ED62047E03__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD8D30)

inline static constexpr unsigned int Class_1_430408ED62047E03_TypeDefinitionIndex = 66070;

class Class_1_430408ED62047E03 : public ::System::Object
{
public:
	::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* Field_1_4; // 0x18
	::RPG::GameCore::GameWorld* Field_1_2; // 0x20
	::System::Action_1<::Class_0_16E4307DCC419505_955*>* Field_1_5; // 0x28
	::System::String* _UniqueName_k__BackingField; // 0x30
	::System::Action_1<::Class_0_16E4307DCC419505_955*>* Field_1_6; // 0x38
	::RPG::GameCore::TurnBasedGameMode* Field_1_3; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03__CTOR_OFFSET))(this);
	}

	static ::Class_1_430408ED62047E03* Method_1_C547993A0787B6BB(::Class_1_D877D08219FBA993* a1, ::System::Action_1<::Class_0_16E4307DCC419505_955*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_955*>* a3)
	{
		return ((::Class_1_430408ED62047E03*(*)(::Class_1_D877D08219FBA993*, ::System::Action_1<::Class_0_16E4307DCC419505_955*>*, ::System::Action_1<::Class_0_16E4307DCC419505_955*>*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_C547993A0787B6BB_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0235E48C0EB03D7C(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_0235E48C0EB03D7C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E01B93D0583BC4C7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_E01B93D0583BC4C7_OFFSET))(this);
	}

	::System::Boolean Method_1_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_METHOD_1_232E79648899E21B_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageParam* get_Param()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_GET_PARAM_OFFSET))(this);
	}

	::System::Void set_Param(::RPG::Client::BattleShowUIPageParam* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_SET_PARAM_OFFSET))(this, value);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_430408ED62047E03_SET_UNIQUENAME_OFFSET))(this, value);
	}
};
