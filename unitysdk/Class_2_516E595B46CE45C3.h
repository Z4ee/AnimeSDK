#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Enum_3_96F6662CA3713095_5.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_108FBB82AF1DB6D6;
class Class_1_24F009C622EAE626;
class Class_1_2E64892306548DEA;
namespace RPG::Client { class GrowthTargetRelicRecommender; }
namespace RPG::Client { class PreReleaseCharaParam; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_516E595B46CE45C3_GET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x179DE9A0)
#define CLASS_2_516E595B46CE45C3_GET_RELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0x179DE9C0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_08BB839C831C98C0_OFFSET UNITYSDK_OFFSET(0x179DF260)
#define CLASS_2_516E595B46CE45C3_METHOD_2_4A6906B9D41279F1_OFFSET UNITYSDK_OFFSET(0x179DEFC0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_5FD140C03874806D_OFFSET UNITYSDK_OFFSET(0x179DECA0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_73DC593459665BE3_OFFSET UNITYSDK_OFFSET(0x179DEC10)
#define CLASS_2_516E595B46CE45C3_METHOD_2_751C97AC1D183C4B_OFFSET UNITYSDK_OFFSET(0x179DE9D0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_1_OFFSET UNITYSDK_OFFSET(0x179DFB30)
#define CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_OFFSET UNITYSDK_OFFSET(0x179DF470)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F046B88956C05CBE_OFFSET UNITYSDK_OFFSET(0x179DEDF0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F7591C7E101B67A9_OFFSET UNITYSDK_OFFSET(0x179DFEE0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F99FA9C39FEB8D66_OFFSET UNITYSDK_OFFSET(0x179DFF30)
#define CLASS_2_516E595B46CE45C3_SET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x179DE9B0)
#define CLASS_2_516E595B46CE45C3_START_OFFSET UNITYSDK_OFFSET(0x179DF120)
#define CLASS_2_516E595B46CE45C3_STOP_OFFSET UNITYSDK_OFFSET(0x179DF210)
#define CLASS_2_516E595B46CE45C3__CTOR_OFFSET UNITYSDK_OFFSET(0x179DFE90)
#define CLASS_2_516E595B46CE45C3__SETGROWTHTARGET_B__11_0_OFFSET UNITYSDK_OFFSET(0x179DFFA0)

inline static constexpr unsigned int Class_2_516E595B46CE45C3_TypeDefinitionIndex = 62686;

class Class_2_516E595B46CE45C3 : public ::Class_1_5E4ED920015DC82D
{
public:
	::System::Collections::Generic::List_1<::Enum_3_ED790DAC948A65A9_9>* Field_2_0; // 0x20
	::RPG::Client::GrowthTargetRelicRecommender* _RelicRecommender_k__BackingField; // 0x28
	::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1> _GrowthTargetIdentifier_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1> get_GrowthTargetIdentifier()
	{
		return ((::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_GET_GROWTHTARGETIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_GrowthTargetIdentifier(::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_SET_GROWTHTARGETIDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::Client::GrowthTargetRelicRecommender* get_RelicRecommender()
	{
		return ((::RPG::Client::GrowthTargetRelicRecommender*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_GET_RELICRECOMMENDER_OFFSET))(this);
	}

	::System::Boolean Method_2_751C97AC1D183C4B(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_751C97AC1D183C4B_OFFSET))(this, a1);
	}

	::RPG::Client::PreReleaseCharaParam* Method_2_5FD140C03874806D()
	{
		return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_5FD140C03874806D_OFFSET))(this);
	}

	::System::Boolean Method_2_73DC593459665BE3(::Enum_3_ED790DAC948A65A9_9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_9))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_73DC593459665BE3_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F046B88956C05CBE(::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>& a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>&, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F046B88956C05CBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_STOP_OFFSET))(this);
	}

	::System::Void Method_2_08BB839C831C98C0(::System::UInt16 a1, ::Class_1_108FBB82AF1DB6D6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_108FBB82AF1DB6D6*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_08BB839C831C98C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_776627F0109A5633(::System::UInt16 a1, ::Class_1_2E64892306548DEA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_776627F0109A5633_1(::System::UInt16 a1, ::Class_1_24F009C622EAE626* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_1_OFFSET))(this, a1, a2);
	}

	::Enum_3_96F6662CA3713095_5 Method_2_4A6906B9D41279F1(::System::UInt32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_5(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_4A6906B9D41279F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F7591C7E101B67A9(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F7591C7E101B67A9_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F99FA9C39FEB8D66(::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>& a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>&, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_9>*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F99FA9C39FEB8D66_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _SetGrowthTarget_b__11_0(::Class_1_2E64892306548DEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3__SETGROWTHTARGET_B__11_0_OFFSET))(this, a1);
	}
};
