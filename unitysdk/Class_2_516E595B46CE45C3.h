#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_357673ADDEE88E8E.h"
#include "unitysdk/Enum_3_96F6662CA3713095_4.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_01C2B9641EF803B2;
class Class_1_672ABE4AA30D53F3;
class Class_1_FF220487FAB45279_1;
namespace RPG::Client { class GrowthTargetRelicRecommender; }
namespace RPG::Client { class PreReleaseCharaParam; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_516E595B46CE45C3_GET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12AEF5B0)
#define CLASS_2_516E595B46CE45C3_GET_RELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0x12AEF5D0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_4A6906B9D41279F1_OFFSET UNITYSDK_OFFSET(0x12AEFBF0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_5DA43863D035D88A_OFFSET UNITYSDK_OFFSET(0x12AEFE50)
#define CLASS_2_516E595B46CE45C3_METHOD_2_5FD140C03874806D_OFFSET UNITYSDK_OFFSET(0x12AEF8E0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_76B32430FF9F8782_OFFSET UNITYSDK_OFFSET(0x12AEF5E0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_9386A7135F51FE7A_OFFSET UNITYSDK_OFFSET(0x12AF0690)
#define CLASS_2_516E595B46CE45C3_METHOD_2_97CD58B9D13254C3_OFFSET UNITYSDK_OFFSET(0x12AEF850)
#define CLASS_2_516E595B46CE45C3_METHOD_2_9B3F44323137039E_OFFSET UNITYSDK_OFFSET(0x12AF0A70)
#define CLASS_2_516E595B46CE45C3_METHOD_2_A0A31FE8A7972249_OFFSET UNITYSDK_OFFSET(0x12AF0010)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F046B88956C05CBE_OFFSET UNITYSDK_OFFSET(0x12AEFA30)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F99FA9C39FEB8D66_OFFSET UNITYSDK_OFFSET(0x12AF0AC0)
#define CLASS_2_516E595B46CE45C3_SET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12AEF5C0)
#define CLASS_2_516E595B46CE45C3_START_OFFSET UNITYSDK_OFFSET(0x12AEFD50)
#define CLASS_2_516E595B46CE45C3_STOP_OFFSET UNITYSDK_OFFSET(0x12AEFE00)
#define CLASS_2_516E595B46CE45C3__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF0A00)
#define CLASS_2_516E595B46CE45C3__SETGROWTHTARGET_B__11_0_OFFSET UNITYSDK_OFFSET(0x12AF0B30)

inline static constexpr unsigned int Class_2_516E595B46CE45C3_TypeDefinitionIndex = 60407;

class Class_2_516E595B46CE45C3 : public ::Class_1_357673ADDEE88E8E
{
public:
	::RPG::Client::GrowthTargetRelicRecommender* _RelicRecommender_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Enum_3_ED790DAC948A65A9_9>* Field_2_0; // 0x28
	::System::Nullable_1<::Struct_2_019938BC9C50B169_2> _GrowthTargetIdentifier_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_019938BC9C50B169_2> get_GrowthTargetIdentifier()
	{
		return ((::System::Nullable_1<::Struct_2_019938BC9C50B169_2>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_GET_GROWTHTARGETIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_GrowthTargetIdentifier(::System::Nullable_1<::Struct_2_019938BC9C50B169_2> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_019938BC9C50B169_2>))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_SET_GROWTHTARGETIDENTIFIER_OFFSET))(this, value);
	}

	::RPG::Client::GrowthTargetRelicRecommender* get_RelicRecommender()
	{
		return ((::RPG::Client::GrowthTargetRelicRecommender*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_GET_RELICRECOMMENDER_OFFSET))(this);
	}

	::System::Boolean Method_2_76B32430FF9F8782(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_76B32430FF9F8782_OFFSET))(this, a1);
	}

	::RPG::Client::PreReleaseCharaParam* Method_2_5FD140C03874806D()
	{
		return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_5FD140C03874806D_OFFSET))(this);
	}

	::System::Boolean Method_2_97CD58B9D13254C3(::Enum_3_ED790DAC948A65A9_9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_9))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_97CD58B9D13254C3_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F046B88956C05CBE(::System::Nullable_1<::Struct_2_019938BC9C50B169_2>& a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::Struct_2_019938BC9C50B169_2>&, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F046B88956C05CBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_STOP_OFFSET))(this);
	}

	::System::Void Method_2_5DA43863D035D88A(::System::UInt16 a1, ::Class_1_FF220487FAB45279_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_FF220487FAB45279_1*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_5DA43863D035D88A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A0A31FE8A7972249(::System::UInt16 a1, ::Class_1_01C2B9641EF803B2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_A0A31FE8A7972249_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9386A7135F51FE7A(::System::UInt16 a1, ::Class_1_672ABE4AA30D53F3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_672ABE4AA30D53F3*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_9386A7135F51FE7A_OFFSET))(this, a1, a2);
	}

	::Enum_3_96F6662CA3713095_4 Method_2_4A6906B9D41279F1(::System::UInt32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_4(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_4A6906B9D41279F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9B3F44323137039E(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_9B3F44323137039E_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F99FA9C39FEB8D66(::System::Nullable_1<::Struct_2_019938BC9C50B169_2>& a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::Struct_2_019938BC9C50B169_2>&, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F99FA9C39FEB8D66_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _SetGrowthTarget_b__11_0(::Class_1_01C2B9641EF803B2* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3__SETGROWTHTARGET_B__11_0_OFFSET))(this, rsp);
	}
};
