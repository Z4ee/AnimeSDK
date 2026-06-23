#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/Struct_2_428BE9476E7E124F.h"
#include "unitysdk/Struct_2_889E5B2995035C6B.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_3B58EE91C0F989DF;
class Class_2_208CC9941471731A_1142;
class Class_3_01B4CC30216C9ABE;
class Class_3_FFA05EDEE0611C83;
namespace MoleMole::Arcade::RabGame { class RABMapConfigTemplateExt; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27DC9A846C2D861E;

#define CLASS_1_9522924E57396213_METHOD_1_0DB8060108BEE79E_OFFSET UNITYSDK_OFFSET(0x1CCFD430)
#define CLASS_1_9522924E57396213_METHOD_1_135FE1F0DA2588C2_OFFSET UNITYSDK_OFFSET(0x1CD00F40)
#define CLASS_1_9522924E57396213_METHOD_1_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0x1CD01970)
#define CLASS_1_9522924E57396213_METHOD_1_23AE0C497BCF7138_OFFSET UNITYSDK_OFFSET(0x1CD016B0)
#define CLASS_1_9522924E57396213_METHOD_1_26BC92CEEB75FDF8_OFFSET UNITYSDK_OFFSET(0x1CCFF750)
#define CLASS_1_9522924E57396213_METHOD_1_30C7AF292A7959B3_OFFSET UNITYSDK_OFFSET(0x1CCFCFA0)
#define CLASS_1_9522924E57396213_METHOD_1_347D4A470D73D443_OFFSET UNITYSDK_OFFSET(0x1CD00120)
#define CLASS_1_9522924E57396213_METHOD_1_3A5E369EC6C76E30_1_OFFSET UNITYSDK_OFFSET(0x1CD01C50)
#define CLASS_1_9522924E57396213_METHOD_1_3A5E369EC6C76E30_OFFSET UNITYSDK_OFFSET(0x1CCFD150)
#define CLASS_1_9522924E57396213_METHOD_1_3E7B7DB0EDF962BA_OFFSET UNITYSDK_OFFSET(0x1CCFF570)
#define CLASS_1_9522924E57396213_METHOD_1_3E8013AB689807F5_OFFSET UNITYSDK_OFFSET(0x1CD03BC0)
#define CLASS_1_9522924E57396213_METHOD_1_417E9CC6C802A40D_1_OFFSET UNITYSDK_OFFSET(0x1CD01B00)
#define CLASS_1_9522924E57396213_METHOD_1_417E9CC6C802A40D_OFFSET UNITYSDK_OFFSET(0x1CCFDE20)
#define CLASS_1_9522924E57396213_METHOD_1_53062D4F9ED4DD12_OFFSET UNITYSDK_OFFSET(0x1CCFEA60)
#define CLASS_1_9522924E57396213_METHOD_1_53790DF3F7C01ECE_OFFSET UNITYSDK_OFFSET(0x1CD01500)
#define CLASS_1_9522924E57396213_METHOD_1_5DFE4C87377FD8D5_OFFSET UNITYSDK_OFFSET(0x1CCFEC60)
#define CLASS_1_9522924E57396213_METHOD_1_6047A39F2494412E_OFFSET UNITYSDK_OFFSET(0x1CCFD370)
#define CLASS_1_9522924E57396213_METHOD_1_64D027A5696DF420_OFFSET UNITYSDK_OFFSET(0x1CD01CE0)
#define CLASS_1_9522924E57396213_METHOD_1_68322FE42A601BBC_OFFSET UNITYSDK_OFFSET(0x1CCFF950)
#define CLASS_1_9522924E57396213_METHOD_1_79D655D738B044C4_OFFSET UNITYSDK_OFFSET(0x1CD01790)
#define CLASS_1_9522924E57396213_METHOD_1_7B2415EF3B4401A0_1_OFFSET UNITYSDK_OFFSET(0x1CCFDFF0)
#define CLASS_1_9522924E57396213_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x1CCFDCD0)
#define CLASS_1_9522924E57396213_METHOD_1_7E6914225C984113_OFFSET UNITYSDK_OFFSET(0x1CD02180)
#define CLASS_1_9522924E57396213_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x1CCFECF0)
#define CLASS_1_9522924E57396213_METHOD_1_838A7B6FC3359269_OFFSET UNITYSDK_OFFSET(0x1CCFF460)
#define CLASS_1_9522924E57396213_METHOD_1_8B11802D3B23EF3B_OFFSET UNITYSDK_OFFSET(0x1CCFD650)
#define CLASS_1_9522924E57396213_METHOD_1_8CD8403BA88446B3_OFFSET UNITYSDK_OFFSET(0x1CCFCEF0)
#define CLASS_1_9522924E57396213_METHOD_1_8FE72CFE32B957D0_OFFSET UNITYSDK_OFFSET(0x1CD01390)
#define CLASS_1_9522924E57396213_METHOD_1_90CE36941D830251_OFFSET UNITYSDK_OFFSET(0x1CCFF6F0)
#define CLASS_1_9522924E57396213_METHOD_1_9335AC7B706CEBF0_OFFSET UNITYSDK_OFFSET(0x1CCFD1D0)
#define CLASS_1_9522924E57396213_METHOD_1_94D2226550893D02_OFFSET UNITYSDK_OFFSET(0x1CD03280)
#define CLASS_1_9522924E57396213_METHOD_1_9A1515300BB496F4_OFFSET UNITYSDK_OFFSET(0x1CD020C0)
#define CLASS_1_9522924E57396213_METHOD_1_9E78D54EAEC5003B_OFFSET UNITYSDK_OFFSET(0x1CD02FF0)
#define CLASS_1_9522924E57396213_METHOD_1_9EF071EFB1B6B19B_OFFSET UNITYSDK_OFFSET(0x1CD021E0)
#define CLASS_1_9522924E57396213_METHOD_1_A959D848A911868C_OFFSET UNITYSDK_OFFSET(0x1CD01570)
#define CLASS_1_9522924E57396213_METHOD_1_AB6CA0571EA1A9C0_OFFSET UNITYSDK_OFFSET(0x1CCFDAF0)
#define CLASS_1_9522924E57396213_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x1CD000C0)
#define CLASS_1_9522924E57396213_METHOD_1_BDA4F58DF6D880BE_OFFSET UNITYSDK_OFFSET(0x1CCFDF70)
#define CLASS_1_9522924E57396213_METHOD_1_C093231A6C9D0335_OFFSET UNITYSDK_OFFSET(0x1CCFD290)
#define CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1CD01020)
#define CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x1CD01010)
#define CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x1CD01040)
#define CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CD01030)
#define CLASS_1_9522924E57396213_METHOD_1_CA9C17DA1F36A2F8_OFFSET UNITYSDK_OFFSET(0x1CD01880)
#define CLASS_1_9522924E57396213_METHOD_1_D5FAACE51EAEE0D9_OFFSET UNITYSDK_OFFSET(0x1CCFDBA0)
#define CLASS_1_9522924E57396213_METHOD_1_DA0F39830F8BAFAF_OFFSET UNITYSDK_OFFSET(0x1CD01050)
#define CLASS_1_9522924E57396213_METHOD_1_E8E22A05AD0CF196_OFFSET UNITYSDK_OFFSET(0x1CD03A00)
#define CLASS_1_9522924E57396213_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1CD03320)
#define CLASS_1_9522924E57396213_METHOD_1_EBB5AA25ABB14D73_OFFSET UNITYSDK_OFFSET(0x1CD03B50)
#define CLASS_1_9522924E57396213_METHOD_1_EC7E4F1CD9E30143_OFFSET UNITYSDK_OFFSET(0x1CCFE0B0)
#define CLASS_1_9522924E57396213_METHOD_1_F033E7C7C16BFF8D_OFFSET UNITYSDK_OFFSET(0x1CCFDD90)
#define CLASS_1_9522924E57396213_METHOD_1_F25C49BB83E7593A_OFFSET UNITYSDK_OFFSET(0x1CCFD000)
#define CLASS_1_9522924E57396213_METHOD_1_F516F614E6F5EB4E_OFFSET UNITYSDK_OFFSET(0x1CD01CD0)
#define CLASS_1_9522924E57396213__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFCC90)

inline static constexpr unsigned int Class_1_9522924E57396213_TypeDefinitionIndex = 88535;

class Class_1_9522924E57396213 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Field_1_6; // 0x10
	::Class_1_27DC9A846C2D861E<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Struct_2_428BE9476E7E124F>* Field_1_8; // 0x20
	::Class_3_FFA05EDEE0611C83* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::Class_1_3B58EE91C0F989DF*>* Field_1_5; // 0x38
	::HexagonalLib::HexagonalGrid Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_8CD8403BA88446B3(::System::Int32 a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_8CD8403BA88446B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_3A5E369EC6C76E30(::Struct_2_E614D3B245F96744_1 a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Struct_2_E614D3B245F96744_1, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_3A5E369EC6C76E30_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_3B58EE91C0F989DF* Method_1_C093231A6C9D0335(::HexagonalLib::Coordinates::Offset a1)
	{
		return ((::Class_1_3B58EE91C0F989DF*(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_C093231A6C9D0335_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_6047A39F2494412E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_6047A39F2494412E_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_3B58EE91C0F989DF* Method_1_8B11802D3B23EF3B(::Struct_2_E614D3B245F96744_1 a1, ::Struct_2_E614D3B245F96744_1 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* a4)
	{
		return ((::Class_1_3B58EE91C0F989DF*(*)(::PVOID, ::Struct_2_E614D3B245F96744_1, ::Struct_2_E614D3B245F96744_1, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_8B11802D3B23EF3B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_417E9CC6C802A40D(::Class_3_01B4CC30216C9ABE* a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_417E9CC6C802A40D_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_BDA4F58DF6D880BE(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_BDA4F58DF6D880BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EC7E4F1CD9E30143(::Class_3_01B4CC30216C9ABE* a1, ::Struct_2_E614D3B245F96744_1 a2, ::Struct_2_E614D3B245F96744_1 a3, ::System::Collections::Generic::List_1<::Struct_2_889E5B2995035C6B>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*, ::Struct_2_E614D3B245F96744_1, ::Struct_2_E614D3B245F96744_1, ::System::Collections::Generic::List_1<::Struct_2_889E5B2995035C6B>*&))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_EC7E4F1CD9E30143_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Boolean Method_1_90CE36941D830251(::Class_1_3B58EE91C0F989DF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_90CE36941D830251_OFFSET))(this, a1);
	}

	::System::Single Method_1_D5FAACE51EAEE0D9(::HexagonalLib::Coordinates::Offset a1, ::HexagonalLib::Coordinates::Offset a2)
	{
		return ((::System::Single(*)(::PVOID, ::HexagonalLib::Coordinates::Offset, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_D5FAACE51EAEE0D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_26BC92CEEB75FDF8(::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>* a1, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HexagonalLib::Coordinates::Offset>*, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_26BC92CEEB75FDF8_OFFSET))(this, a1, a2);
	}

	::Class_1_3B58EE91C0F989DF* Method_1_68322FE42A601BBC(::Struct_2_E614D3B245F96744_1 a1, ::System::Int32 a2)
	{
		return ((::Class_1_3B58EE91C0F989DF*(*)(::PVOID, ::Struct_2_E614D3B245F96744_1, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_68322FE42A601BBC_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_347D4A470D73D443(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>* a5)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_347D4A470D73D443_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_135FE1F0DA2588C2(::Class_3_FFA05EDEE0611C83* a1, ::Struct_2_E614D3B245F96744_1 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_FFA05EDEE0611C83*, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_135FE1F0DA2588C2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DA0F39830F8BAFAF(::Class_3_01B4CC30216C9ABE* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_DA0F39830F8BAFAF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_7B2415EF3B4401A0_1_OFFSET))(this);
	}

	::System::Int32 Method_1_A959D848A911868C(::Class_3_01B4CC30216C9ABE* a1, ::Class_3_01B4CC30216C9ABE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*, ::Class_3_01B4CC30216C9ABE*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_A959D848A911868C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7B7DB0EDF962BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_3E7B7DB0EDF962BA_OFFSET))(this);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_79D655D738B044C4(::Struct_2_E614D3B245F96744_1 a1)
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_79D655D738B044C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CA9C17DA1F36A2F8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_CA9C17DA1F36A2F8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_22E26A255EB831DA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_22E26A255EB831DA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_417E9CC6C802A40D_1(::Class_3_01B4CC30216C9ABE* a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_417E9CC6C802A40D_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_3A5E369EC6C76E30_1(::Struct_2_E614D3B245F96744_1 a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Struct_2_E614D3B245F96744_1, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_3A5E369EC6C76E30_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::HexagonalLib::Coordinates::Offset, ::Class_1_3B58EE91C0F989DF*>* Method_1_F516F614E6F5EB4E()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::HexagonalLib::Coordinates::Offset, ::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_F516F614E6F5EB4E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_0DB8060108BEE79E(::Class_1_3B58EE91C0F989DF* a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_0DB8060108BEE79E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_5DFE4C87377FD8D5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_5DFE4C87377FD8D5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_64D027A5696DF420(::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>* a1, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HexagonalLib::Coordinates::Offset>*, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_64D027A5696DF420_OFFSET))(this, a1, a2);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_9A1515300BB496F4(::Class_3_FFA05EDEE0611C83* a1, ::Class_1_3B58EE91C0F989DF* a2)
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID, ::Class_3_FFA05EDEE0611C83*, ::Class_1_3B58EE91C0F989DF*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_9A1515300BB496F4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7E6914225C984113(::HexagonalLib::Coordinates::Offset a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::HexagonalLib::Coordinates::Offset))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_7E6914225C984113_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_3B58EE91C0F989DF* a1)
	{
		return ((::System::Boolean(*)(::Class_1_3B58EE91C0F989DF*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt* Method_1_F033E7C7C16BFF8D()
	{
		return ((::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_F033E7C7C16BFF8D_OFFSET))(this);
	}

	::System::String* Method_1_9EF071EFB1B6B19B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_9EF071EFB1B6B19B_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_9E78D54EAEC5003B(::Class_1_3B58EE91C0F989DF* a1, ::System::Int32 a2, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_9E78D54EAEC5003B_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_9335AC7B706CEBF0(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_9335AC7B706CEBF0_OFFSET))(this, a1, a2, a3, a4);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_94D2226550893D02(::Class_1_3B58EE91C0F989DF* a1)
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_94D2226550893D02_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Int32 Method_1_23AE0C497BCF7138(::Class_1_3B58EE91C0F989DF* a1, ::Class_1_3B58EE91C0F989DF* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*, ::Class_1_3B58EE91C0F989DF*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_23AE0C497BCF7138_OFFSET))(this, a1, a2);
	}

	::Struct_2_E614D3B245F96744_1 Method_1_8FE72CFE32B957D0(::Class_3_FFA05EDEE0611C83* a1, ::Struct_2_E614D3B245F96744_1 a2)
	{
		return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID, ::Class_3_FFA05EDEE0611C83*, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_8FE72CFE32B957D0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_F25C49BB83E7593A(::Class_1_3B58EE91C0F989DF* a1, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Class_1_3B58EE91C0F989DF*, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_F25C49BB83E7593A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Boolean Method_1_53790DF3F7C01ECE(::Struct_2_E614D3B245F96744_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_53790DF3F7C01ECE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_E8E22A05AD0CF196(::Class_3_01B4CC30216C9ABE* a1, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_E8E22A05AD0CF196_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_838A7B6FC3359269(::Class_3_01B4CC30216C9ABE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_01B4CC30216C9ABE*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_838A7B6FC3359269_OFFSET))(this, a1);
	}

	::Class_1_3B58EE91C0F989DF* Method_1_30C7AF292A7959B3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_3B58EE91C0F989DF*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_30C7AF292A7959B3_OFFSET))(this, a1, a2);
	}

	::Class_2_208CC9941471731A_1142* Method_1_3E8013AB689807F5()
	{
		return ((::Class_2_208CC9941471731A_1142*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_3E8013AB689807F5_OFFSET))(this);
	}

	::Class_1_3B58EE91C0F989DF* Method_1_AB6CA0571EA1A9C0(::Struct_2_E614D3B245F96744_1 a1)
	{
		return ((::Class_1_3B58EE91C0F989DF*(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_AB6CA0571EA1A9C0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>* Method_1_EBB5AA25ABB14D73(::Struct_2_E614D3B245F96744_1 a1, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3B58EE91C0F989DF*>*(*)(::PVOID, ::Struct_2_E614D3B245F96744_1, ::System::Func_2<::Class_1_3B58EE91C0F989DF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_EBB5AA25ABB14D73_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_1_53062D4F9ED4DD12(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_9522924E57396213_METHOD_1_53062D4F9ED4DD12_OFFSET))(this, a1);
	}
};
