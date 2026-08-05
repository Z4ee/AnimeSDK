#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_5396005F9A53A130.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_7D1178ED3F03CA16.h"
#include "unitysdk/Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_388;
class Class_1_6F763FE7425E8072;
class Class_4_B99AA5AE371451AA;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4C3E2542F8C9B910_METHOD_1_0A022F395FE17AFA_OFFSET UNITYSDK_OFFSET(0x12A05570)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_13194ECB7F84A1D5_OFFSET UNITYSDK_OFFSET(0x12A06100)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_169CA316C0C2C8F4_OFFSET UNITYSDK_OFFSET(0x12A034E0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_1843C37488903BCD_OFFSET UNITYSDK_OFFSET(0x12A04CD0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_1F421B1A9BB50216_OFFSET UNITYSDK_OFFSET(0x12A05270)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_38752412B052D0A4_OFFSET UNITYSDK_OFFSET(0x12A037E0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_3DB6A555B959B720_OFFSET UNITYSDK_OFFSET(0x12A03A30)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_3FE936AA8D502775_OFFSET UNITYSDK_OFFSET(0x12A02F30)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_50FBAFCFC52302FF_OFFSET UNITYSDK_OFFSET(0x12A047D0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_585F516F2193A5F9_OFFSET UNITYSDK_OFFSET(0x12A070A0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_733C975925EB0A74_OFFSET UNITYSDK_OFFSET(0x12A04900)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_7AF3F620A6B6FA6C_OFFSET UNITYSDK_OFFSET(0x12A05FB0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_9DA384749CEFC13C_OFFSET UNITYSDK_OFFSET(0x12A03D90)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_A2234F2451595673_OFFSET UNITYSDK_OFFSET(0x12A04AB0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_AF523D26EC5B20AE_OFFSET UNITYSDK_OFFSET(0x12A03210)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_B51C268A10AE0D9D_OFFSET UNITYSDK_OFFSET(0x12A04500)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_BEF34FA77B485A75_OFFSET UNITYSDK_OFFSET(0x12A05130)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_CFACB1D1CD94A9B7_OFFSET UNITYSDK_OFFSET(0x12A05D90)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_D0AA4F4FDCD7208E_OFFSET UNITYSDK_OFFSET(0x12A039B0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_D302F3CC6003DE5F_OFFSET UNITYSDK_OFFSET(0x12A03BC0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_E3616C3E0B1005A5_OFFSET UNITYSDK_OFFSET(0x12A063C0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_E54632DD0203CEE9_OFFSET UNITYSDK_OFFSET(0x12A06BC0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_ED1BB7EFAB7166F8_OFFSET UNITYSDK_OFFSET(0x12A05BE0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_F232DA5FE2B51D5A_OFFSET UNITYSDK_OFFSET(0x12A03430)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_F6B5EC15AFC38E5F_OFFSET UNITYSDK_OFFSET(0x12A06740)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_FC3799BD20CD34EB_OFFSET UNITYSDK_OFFSET(0x12A058E0)
#define CLASS_1_4C3E2542F8C9B910_METHOD_1_FF89AE845DE8C992_OFFSET UNITYSDK_OFFSET(0x12A06F50)
#define CLASS_1_4C3E2542F8C9B910__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A02EF0)

inline static constexpr unsigned int Class_1_4C3E2542F8C9B910_TypeDefinitionIndex = 47329;

class Class_1_4C3E2542F8C9B910 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3E2542F8C9B910_TypeDefinitionIndex)->GetStaticField(0x4A320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910__CCTOR_OFFSET))();
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_3FE936AA8D502775(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Class_1_4C3E2542F8C9B910_Struct_2_7D1178ED3F03CA16& a4, ::MoleMole::HollowChessboard::RenderDataAliveType a5, ::System::Boolean a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_4C3E2542F8C9B910_Struct_2_7D1178ED3F03CA16&, ::MoleMole::HollowChessboard::RenderDataAliveType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_3FE936AA8D502775_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_F232DA5FE2B51D5A(::Class_1_6F763FE7425E8072* a1)
	{
		return ((::System::Void(*)(::Class_1_6F763FE7425E8072*))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_F232DA5FE2B51D5A_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_169CA316C0C2C8F4(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a6, ::System::Boolean a7, ::MoleMole::UIHollowChessPieceParticle_TransformType a8, ::System::Nullable_1<::Foundation::Unreal::FTransform> a9)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_169CA316C0C2C8F4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_38752412B052D0A4(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_38752412B052D0A4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::MoleMole::BlendTextureSheetData* Method_1_D0AA4F4FDCD7208E(::System::String* a1)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_D0AA4F4FDCD7208E_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_3DB6A555B959B720(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_3DB6A555B959B720_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_9DA384749CEFC13C(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::Class_1_4C3E2542F8C9B910_Struct_2_5396005F9A53A130& a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::Class_1_4C3E2542F8C9B910_Struct_2_5396005F9A53A130&))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_9DA384749CEFC13C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B51C268A10AE0D9D(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_B51C268A10AE0D9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_50FBAFCFC52302FF(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_50FBAFCFC52302FF_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_733C975925EB0A74(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_733C975925EB0A74_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_AF523D26EC5B20AE(::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689& a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::UInt64 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689&, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_AF523D26EC5B20AE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_1843C37488903BCD(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Struct_2_50968EFA8638B3BF a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_1843C37488903BCD_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_BEF34FA77B485A75(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Int32 a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_BEF34FA77B485A75_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_1F421B1A9BB50216(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_1F421B1A9BB50216_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_0A022F395FE17AFA(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a6, ::System::Boolean a7, ::MoleMole::UIHollowChessPieceParticle_TransformType a8, ::System::Nullable_1<::Foundation::Unreal::FTransform> a9)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_0A022F395FE17AFA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::Class_1_6F763FE7425E8072* Method_1_D302F3CC6003DE5F(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::Class_1_6F763FE7425E8072*(*)(::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_D302F3CC6003DE5F_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_FC3799BD20CD34EB(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_FC3799BD20CD34EB_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_ED1BB7EFAB7166F8(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6, ::MoleMole::HollowChessboard::RenderDataAliveType a7)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_ED1BB7EFAB7166F8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689 Method_1_CFACB1D1CD94A9B7(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::System::UInt64 a3, ::MoleMole::HollowChessboard::HollowCell a4, ::Class_1_4C3E2542F8C9B910_Struct_2_7D1178ED3F03CA16& a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::Class_1_4C3E2542F8C9B910_Struct_2_B2F7666479C25689(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::System::UInt64, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_4C3E2542F8C9B910_Struct_2_7D1178ED3F03CA16&, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_CFACB1D1CD94A9B7_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_7AF3F620A6B6FA6C(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::String* a4, ::System::Int32 a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_7AF3F620A6B6FA6C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_13194ECB7F84A1D5(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_13194ECB7F84A1D5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_E3616C3E0B1005A5(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_E3616C3E0B1005A5_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_F6B5EC15AFC38E5F(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Struct_2_50968EFA8638B3BF a2, ::MoleMole::HollowChessboard::HollowEntity*& a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::MoleMole::HollowChessboard::HollowEntity*&, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_388*>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_F6B5EC15AFC38E5F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_E54632DD0203CEE9(::MoleMole::HollowChessboard::HollowCell a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_E54632DD0203CEE9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FF89AE845DE8C992(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_FF89AE845DE8C992_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_585F516F2193A5F9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_585F516F2193A5F9_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_1_A2234F2451595673(::Class_4_B99AA5AE371451AA* a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Int32 a5, ::MoleMole::HollowChessboard::RenderDataAliveType a6)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + CLASS_1_4C3E2542F8C9B910_METHOD_1_A2234F2451595673_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
