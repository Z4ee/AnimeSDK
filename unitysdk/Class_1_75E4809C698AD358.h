#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1448;
class Class_0_16E4307DCC419505_1608;
class Class_1_115297B50AB60A5D_4;
class Class_1_5A55E8BED8FA46A4;
class Class_1_5AD3EC2EA1B1D5CD;
class Class_1_961B0CA014B1FC95;
class Class_1_D17272E82AE804C2_152;
class Class_1_D8CC61AD64FF9091_4;
class Class_1_F11CBE4D3C7DF06D;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_75E4809C698AD358_METHOD_1_1FA65911DA9B20F3_OFFSET UNITYSDK_OFFSET(0xBEFE0B0)
#define CLASS_1_75E4809C698AD358_METHOD_1_3315D15ED64E2D0D_OFFSET UNITYSDK_OFFSET(0xBEFE3C0)
#define CLASS_1_75E4809C698AD358_METHOD_1_355F9E5A622099BA_OFFSET UNITYSDK_OFFSET(0xBEFEB10)
#define CLASS_1_75E4809C698AD358_METHOD_1_3FDD6C459EF33424_OFFSET UNITYSDK_OFFSET(0xBEFE980)
#define CLASS_1_75E4809C698AD358_METHOD_1_841D90BDB3E94FF6_1_OFFSET UNITYSDK_OFFSET(0xBEFEFA0)
#define CLASS_1_75E4809C698AD358_METHOD_1_841D90BDB3E94FF6_OFFSET UNITYSDK_OFFSET(0xBEFEE90)
#define CLASS_1_75E4809C698AD358_METHOD_1_952110E5F58CC388_OFFSET UNITYSDK_OFFSET(0xBEFE730)
#define CLASS_1_75E4809C698AD358_METHOD_1_A5BD9E563C539A05_OFFSET UNITYSDK_OFFSET(0xBEFE1E0)
#define CLASS_1_75E4809C698AD358_METHOD_1_A6DCC502E89296EC_OFFSET UNITYSDK_OFFSET(0xBEFEC30)
#define CLASS_1_75E4809C698AD358_METHOD_1_CBBB30978BA34B92_1_OFFSET UNITYSDK_OFFSET(0xBEFED70)
#define CLASS_1_75E4809C698AD358_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0xBEFE860)
#define CLASS_1_75E4809C698AD358_METHOD_1_F7F593E95EADC41C_OFFSET UNITYSDK_OFFSET(0xBEFE300)
#define CLASS_1_75E4809C698AD358_METHOD_1_FB45C669FA8F1642_OFFSET UNITYSDK_OFFSET(0xBEFE610)
#define CLASS_1_75E4809C698AD358__CTOR_OFFSET UNITYSDK_OFFSET(0xBEFE0A0)
#define CLASS_1_75E4809C698AD358__REPLACEPARTASYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0xBEFF0D0)
#define CLASS_1_75E4809C698AD358__SETLIVERYASYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0xBEFF0B0)

inline static constexpr unsigned int Class_1_75E4809C698AD358_TypeDefinitionIndex = 81767;

class Class_1_75E4809C698AD358 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1608* MJHHLOPFDNK; // 0x10
	::Class_0_16E4307DCC419505_1448* FCCMAEFHDIA; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1608* a1, ::Class_0_16E4307DCC419505_1448* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1608*, ::Class_0_16E4307DCC419505_1448*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_1FA65911DA9B20F3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_1FA65911DA9B20F3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_A5BD9E563C539A05(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_A5BD9E563C539A05_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F7F593E95EADC41C(::Class_1_5AD3EC2EA1B1D5CD* a1, ::Class_1_5AD3EC2EA1B1D5CD* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5AD3EC2EA1B1D5CD*, ::Class_1_5AD3EC2EA1B1D5CD*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_F7F593E95EADC41C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FB45C669FA8F1642(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_FB45C669FA8F1642_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_115297B50AB60A5D_4* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_115297B50AB60A5D_4*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Void Method_1_355F9E5A622099BA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_355F9E5A622099BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A6DCC502E89296EC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_A6DCC502E89296EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_115297B50AB60A5D_4* Method_1_CBBB30978BA34B92_1(::System::UInt32 a1)
	{
		return ((::Class_1_115297B50AB60A5D_4*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_CBBB30978BA34B92_1_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_952110E5F58CC388(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_952110E5F58CC388_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_115297B50AB60A5D_4* Method_1_3FDD6C459EF33424(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::Class_1_115297B50AB60A5D_4*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_3FDD6C459EF33424_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3315D15ED64E2D0D(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Class_1_961B0CA014B1FC95*>*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_3315D15ED64E2D0D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_841D90BDB3E94FF6(::Class_1_D17272E82AE804C2_152* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_152*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_841D90BDB3E94FF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_841D90BDB3E94FF6_1(::Class_1_5A55E8BED8FA46A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358_METHOD_1_841D90BDB3E94FF6_1_OFFSET))(this, a1);
	}

	::System::Void _SetLiveryAsync_b__1_0(::Class_1_F11CBE4D3C7DF06D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358__SETLIVERYASYNC_B__1_0_OFFSET))(this, a1);
	}

	::System::Void _ReplacePartAsync_b__2_0(::Class_1_D8CC61AD64FF9091_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8CC61AD64FF9091_4*))((::PBYTE)hIl2Cpp + CLASS_1_75E4809C698AD358__REPLACEPARTASYNC_B__2_0_OFFSET))(this, a1);
	}
};
