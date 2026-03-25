#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
class Class_0_16E4307DCC419505_847;
class Class_1_D877D08219FBA993;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EB149767E51D7A1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8882360)
#define CLASS_1_EB149767E51D7A1F_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x8882A10)
#define CLASS_1_EB149767E51D7A1F_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x8882A30)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_0235E48C0EB03D7C_OFFSET UNITYSDK_OFFSET(0x8882840)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_173EE9EC777B7832_OFFSET UNITYSDK_OFFSET(0x8882070)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x8882510)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x88822D0)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_40AF574CD5336697_OFFSET UNITYSDK_OFFSET(0x8882950)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x88827E0)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8882140)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x8882470)
#define CLASS_1_EB149767E51D7A1F_METHOD_1_E01B93D0583BC4C7_OFFSET UNITYSDK_OFFSET(0x8882570)
#define CLASS_1_EB149767E51D7A1F_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x8882A20)
#define CLASS_1_EB149767E51D7A1F_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x8882A40)
#define CLASS_1_EB149767E51D7A1F__CTOR_OFFSET UNITYSDK_OFFSET(0x8882130)

inline static constexpr unsigned int Class_1_EB149767E51D7A1F_TypeDefinitionIndex = 58746;

class Class_1_EB149767E51D7A1F : public ::System::Object
{
public:
	::System::String* _UniqueName_k__BackingField; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_847*>* Field_1_5; // 0x18
	::RPG::GameCore::GameWorld* Field_1_2; // 0x20
	::RPG::GameCore::TurnBasedGameMode* Field_1_3; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_847*>* Field_1_6; // 0x30
	::RPG::GameCore::GameEntity* Field_1_4; // 0x38
	::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F__CTOR_OFFSET))(this);
	}

	static ::Class_1_EB149767E51D7A1F* Method_1_173EE9EC777B7832(::Class_1_D877D08219FBA993* a1, ::System::Action_1<::Class_0_16E4307DCC419505_847*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_847*>* a3)
	{
		return ((::Class_1_EB149767E51D7A1F*(*)(::Class_1_D877D08219FBA993*, ::System::Action_1<::Class_0_16E4307DCC419505_847*>*, ::System::Action_1<::Class_0_16E4307DCC419505_847*>*))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_173EE9EC777B7832_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0235E48C0EB03D7C(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_0235E48C0EB03D7C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E01B93D0583BC4C7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_E01B93D0583BC4C7_OFFSET))(this);
	}

	::System::Boolean Method_1_40AF574CD5336697(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_40AF574CD5336697_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_METHOD_1_232E79648899E21B_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageParam* get_Param()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_GET_PARAM_OFFSET))(this);
	}

	::System::Void set_Param(::RPG::Client::BattleShowUIPageParam* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_SET_PARAM_OFFSET))(this, value);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EB149767E51D7A1F_SET_UNIQUENAME_OFFSET))(this, value);
	}
};
