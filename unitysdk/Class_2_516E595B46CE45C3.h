#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Enum_3_96F6662CA3713095_7.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_15.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_24F009C622EAE626;
class Class_1_2E64892306548DEA_1;
class Class_1_A662F2CB6C6610D2;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GrowthTargetRelicRecommender; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_516E595B46CE45C3_GET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164DA370)
#define CLASS_2_516E595B46CE45C3_GET_RELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0x164DA390)
#define CLASS_2_516E595B46CE45C3_METHOD_2_08BB839C831C98C0_OFFSET UNITYSDK_OFFSET(0x164DABA0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_13A54B8843C8A142_OFFSET UNITYSDK_OFFSET(0x164DA670)
#define CLASS_2_516E595B46CE45C3_METHOD_2_73DC593459665BE3_OFFSET UNITYSDK_OFFSET(0x164DA5E0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_751C97AC1D183C4B_OFFSET UNITYSDK_OFFSET(0x164DA3A0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_1_OFFSET UNITYSDK_OFFSET(0x164DB260)
#define CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_OFFSET UNITYSDK_OFFSET(0x164DADB0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_C142EC3DCC7C0E8F_OFFSET UNITYSDK_OFFSET(0x164DA8C0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F046B88956C05CBE_OFFSET UNITYSDK_OFFSET(0x164DA6F0)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F7591C7E101B67A9_OFFSET UNITYSDK_OFFSET(0x164DB620)
#define CLASS_2_516E595B46CE45C3_METHOD_2_F99FA9C39FEB8D66_OFFSET UNITYSDK_OFFSET(0x164DB670)
#define CLASS_2_516E595B46CE45C3_SET_GROWTHTARGETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x164DA380)
#define CLASS_2_516E595B46CE45C3_START_OFFSET UNITYSDK_OFFSET(0x164DAA60)
#define CLASS_2_516E595B46CE45C3_STOP_OFFSET UNITYSDK_OFFSET(0x164DAB50)
#define CLASS_2_516E595B46CE45C3__CTOR_OFFSET UNITYSDK_OFFSET(0x164DB5D0)
#define CLASS_2_516E595B46CE45C3__SETGROWTHTARGET_B__11_0_OFFSET UNITYSDK_OFFSET(0x164DB6E0)

inline static constexpr unsigned int Class_2_516E595B46CE45C3_TypeDefinitionIndex = 65611;

class Class_2_516E595B46CE45C3 : public ::Class_1_5E4ED920015DC82D
{
public:
	::RPG::Client::GrowthTargetRelicRecommender* _RelicRecommender_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Enum_3_ED790DAC948A65A9_15>* ANHCCDLOHGJ; // 0x28
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

	::RPG::AvatarSystem::IAvatar* Method_2_13A54B8843C8A142()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_13A54B8843C8A142_OFFSET))(this);
	}

	::System::Boolean Method_2_73DC593459665BE3(::Enum_3_ED790DAC948A65A9_15 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_15))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_73DC593459665BE3_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F046B88956C05CBE(::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>& a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_15>* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>&, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_15>*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F046B88956C05CBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_STOP_OFFSET))(this);
	}

	::System::Void Method_2_08BB839C831C98C0(::System::UInt16 a1, ::Class_1_A662F2CB6C6610D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_A662F2CB6C6610D2*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_08BB839C831C98C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_776627F0109A5633(::System::UInt16 a1, ::Class_1_2E64892306548DEA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_2E64892306548DEA_1*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_776627F0109A5633_1(::System::UInt16 a1, ::Class_1_24F009C622EAE626* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_24F009C622EAE626*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_776627F0109A5633_1_OFFSET))(this, a1, a2);
	}

	::Enum_3_96F6662CA3713095_7 Method_2_C142EC3DCC7C0E8F(::System::UInt32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_7(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_C142EC3DCC7C0E8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F7591C7E101B67A9(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F7591C7E101B67A9_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_F99FA9C39FEB8D66(::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>& a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_15>* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::Struct_2_D645B4E0B73852B6_1>&, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_ED790DAC948A65A9_15>*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3_METHOD_2_F99FA9C39FEB8D66_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _SetGrowthTarget_b__11_0(::Class_1_2E64892306548DEA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2E64892306548DEA_1*))((::PBYTE)hIl2Cpp + CLASS_2_516E595B46CE45C3__SETGROWTHTARGET_B__11_0_OFFSET))(this, a1);
	}
};
