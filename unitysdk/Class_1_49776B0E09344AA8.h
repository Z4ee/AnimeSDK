#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_49776B0E09344AA8_Struct_2_04D90A334135A87C.h"
#include "unitysdk/Class_1_49776B0E09344AA8_Struct_2_849686E5459895E4.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_08B34D65A9FCAAE5;
class Class_1_0AEBFEBDADDA07AC;
class Class_1_9518B5776748B41E;
class Class_1_D36D19022AD035EC;
class Class_1_EDF7E2913A3DD535;
class Class_5_7DE03FFC38B69B91;
class Class_5_8A5B236F53009830;
class Class_5_A6F8D19602712D95;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49776B0E09344AA8_METHOD_1_15B5FD54C4CEEA1E_OFFSET UNITYSDK_OFFSET(0x13F26020)
#define CLASS_1_49776B0E09344AA8_METHOD_1_289B514D3F9E6FBA_OFFSET UNITYSDK_OFFSET(0x13F278B0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_2967916D2F0F3EA5_OFFSET UNITYSDK_OFFSET(0x13F282A0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_300B5A4DCE3E1169_OFFSET UNITYSDK_OFFSET(0x13F262D0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_334E2974515ABEF4_OFFSET UNITYSDK_OFFSET(0x13F267A0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_3CD2D83C87F46A2B_OFFSET UNITYSDK_OFFSET(0x13F11080)
#define CLASS_1_49776B0E09344AA8_METHOD_1_462F66C3ADA9DDFE_OFFSET UNITYSDK_OFFSET(0x13F26FD0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_514125448B988326_OFFSET UNITYSDK_OFFSET(0x13F27BD0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_5733969903013487_OFFSET UNITYSDK_OFFSET(0x13F26980)
#define CLASS_1_49776B0E09344AA8_METHOD_1_5E7FABA4D5E7C76E_OFFSET UNITYSDK_OFFSET(0x13F10E00)
#define CLASS_1_49776B0E09344AA8_METHOD_1_77263D24A58AB58A_OFFSET UNITYSDK_OFFSET(0x13F265A0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_8121B3C6E077454C_OFFSET UNITYSDK_OFFSET(0x13F25180)
#define CLASS_1_49776B0E09344AA8_METHOD_1_859E039F50491B02_OFFSET UNITYSDK_OFFSET(0x13F263E0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_8FE74818B6CAB22C_OFFSET UNITYSDK_OFFSET(0x13F25350)
#define CLASS_1_49776B0E09344AA8_METHOD_1_97A2B621D1D21DFF_OFFSET UNITYSDK_OFFSET(0x13F26900)
#define CLASS_1_49776B0E09344AA8_METHOD_1_BA477C1C7B39F8E1_OFFSET UNITYSDK_OFFSET(0x13F27CA0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_BAF11821FC5492D1_OFFSET UNITYSDK_OFFSET(0x13F25630)
#define CLASS_1_49776B0E09344AA8_METHOD_1_BF78D022CCEFBA4C_OFFSET UNITYSDK_OFFSET(0x13F26E50)
#define CLASS_1_49776B0E09344AA8_METHOD_1_C39B5F57AE810B5D_OFFSET UNITYSDK_OFFSET(0x13F26B40)
#define CLASS_1_49776B0E09344AA8_METHOD_1_CA45A4ED6A6D7421_OFFSET UNITYSDK_OFFSET(0x13F26A00)
#define CLASS_1_49776B0E09344AA8_METHOD_1_DA3A39A1FFB19DA1_OFFSET UNITYSDK_OFFSET(0x13F26AE0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_DB62B0088E6661DB_OFFSET UNITYSDK_OFFSET(0x13F26290)
#define CLASS_1_49776B0E09344AA8_METHOD_1_DEBAA4A63BA242E1_OFFSET UNITYSDK_OFFSET(0x13F275C0)
#define CLASS_1_49776B0E09344AA8_METHOD_1_FFCB21C8433F8F7D_OFFSET UNITYSDK_OFFSET(0x13F27170)

inline static constexpr unsigned int Class_1_49776B0E09344AA8_TypeDefinitionIndex = 57727;

class Class_1_49776B0E09344AA8 : public ::System::Object
{
public:
	static ::System::Void Method_1_8121B3C6E077454C(::Class_5_8A5B236F53009830* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_8121B3C6E077454C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8FE74818B6CAB22C(::Class_5_8A5B236F53009830* a1, ::Class_1_EDF7E2913A3DD535* a2, ::Class_1_EDF7E2913A3DD535* a3)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_1_EDF7E2913A3DD535*, ::Class_1_EDF7E2913A3DD535*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_8FE74818B6CAB22C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BAF11821FC5492D1(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_AF65C3A968E836D2* a2, ::Class_5_AF65C3A968E836D2* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_AF65C3A968E836D2*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_BAF11821FC5492D1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::HollowChessboard::GeometryHeightType Method_1_859E039F50491B02(::Class_1_0AEBFEBDADDA07AC* a1)
	{
		return ((::MoleMole::HollowChessboard::GeometryHeightType(*)(::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_859E039F50491B02_OFFSET))(a1);
	}

	static ::System::Void Method_1_334E2974515ABEF4(::Class_5_8A5B236F53009830* a1, ::Class_5_7DE03FFC38B69B91* a2)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_334E2974515ABEF4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5733969903013487(::Class_5_8A5B236F53009830* a1, ::Class_1_0AEBFEBDADDA07AC* a2)
	{
		return ((::System::Boolean(*)(::Class_5_8A5B236F53009830*, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_5733969903013487_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_CA45A4ED6A6D7421(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_AF65C3A968E836D2* a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_CA45A4ED6A6D7421_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3CD2D83C87F46A2B(::Class_5_8A5B236F53009830* a1, ::Class_5_7DE03FFC38B69B91* a2)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_3CD2D83C87F46A2B_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::GeometryHeightType Method_1_77263D24A58AB58A(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::MoleMole::HollowChessboard::GeometryHeightType(*)(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_77263D24A58AB58A_OFFSET))(a1, a2);
	}

	static ::Class_1_D36D19022AD035EC* Method_1_C39B5F57AE810B5D(::Class_1_EDF7E2913A3DD535* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::Class_1_9518B5776748B41E* a3, ::Class_1_08B34D65A9FCAAE5* a4, ::MoleMole::HollowChessboard::HollowChessboardUID a5)
	{
		return ((::Class_1_D36D19022AD035EC*(*)(::Class_1_EDF7E2913A3DD535*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_9518B5776748B41E*, ::Class_1_08B34D65A9FCAAE5*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_C39B5F57AE810B5D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_BF78D022CCEFBA4C(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_AF65C3A968E836D2* a2, ::Class_5_AF65C3A968E836D2* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowCell a5, ::System::Action* a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_AF65C3A968E836D2*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_BF78D022CCEFBA4C_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_462F66C3ADA9DDFE(::MoleMole::HollowChessboard::HollowEntity* a1, ::Class_5_AF65C3A968E836D2* a2, ::Class_5_AF65C3A968E836D2* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_AF65C3A968E836D2*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_462F66C3ADA9DDFE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_5_A6F8D19602712D95* Method_1_DB62B0088E6661DB(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_49776B0E09344AA8_Struct_2_04D90A334135A87C& a2)
	{
		return ((::Class_5_A6F8D19602712D95*(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_1_49776B0E09344AA8_Struct_2_04D90A334135A87C&))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_DB62B0088E6661DB_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::GeometryHeightType Method_1_97A2B621D1D21DFF(::Class_5_8A5B236F53009830* a1)
	{
		return ((::MoleMole::HollowChessboard::GeometryHeightType(*)(::Class_5_8A5B236F53009830*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_97A2B621D1D21DFF_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* Method_1_5E7FABA4D5E7C76E(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_5E7FABA4D5E7C76E_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>* Method_1_15B5FD54C4CEEA1E(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_15B5FD54C4CEEA1E_OFFSET))(a1);
	}

	static ::System::Void Method_1_300B5A4DCE3E1169(::Class_5_8A5B236F53009830* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::HollowChessboard::HollowChessboardUID a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_300B5A4DCE3E1169_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_DA3A39A1FFB19DA1(::Class_5_8A5B236F53009830* a1, ::Class_5_7DE03FFC38B69B91* a2)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_DA3A39A1FFB19DA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FFCB21C8433F8F7D(::Class_5_AF65C3A968E836D2* a1, ::Class_5_AF65C3A968E836D2* a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_FFCB21C8433F8F7D_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigHollowChessboard_TVModelData Method_1_289B514D3F9E6FBA(::System::String* a1, ::MoleMole::HollowChessPieceSizeType a2)
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_TVModelData(*)(::System::String*, ::MoleMole::HollowChessPieceSizeType))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_289B514D3F9E6FBA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DEBAA4A63BA242E1(::Class_5_8A5B236F53009830* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_DEBAA4A63BA242E1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_514125448B988326(::Class_5_8A5B236F53009830* a1, ::Class_1_49776B0E09344AA8_Struct_2_849686E5459895E4& a2)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_1_49776B0E09344AA8_Struct_2_849686E5459895E4&))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_514125448B988326_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2967916D2F0F3EA5(::Class_5_8A5B236F53009830* a1, ::Class_1_0AEBFEBDADDA07AC* a2)
	{
		return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_1_0AEBFEBDADDA07AC*))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_2967916D2F0F3EA5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA477C1C7B39F8E1(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a1, ::Class_1_EDF7E2913A3DD535* a2, ::Class_1_EDF7E2913A3DD535* a3, ::Class_1_49776B0E09344AA8_Struct_2_849686E5459895E4& a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_EDF7E2913A3DD535*, ::Class_1_EDF7E2913A3DD535*, ::Class_1_49776B0E09344AA8_Struct_2_849686E5459895E4&))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8_METHOD_1_BA477C1C7B39F8E1_OFFSET))(a1, a2, a3, a4);
	}
};
