#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
class Class_0_16E4307DCC419505_356;
class Class_1_2899B0E942F4D2BC;
class Class_1_2F97A7FBE3F77566;
class Class_1_F5B35B1B6669CF16;
class Class_4_6242AA13BDAC7241;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED492469204624B4_METHOD_1_0AF87D0747BFAED3_OFFSET UNITYSDK_OFFSET(0x11F4F290)
#define CLASS_1_ED492469204624B4_METHOD_1_0C65243341F1EFB1_OFFSET UNITYSDK_OFFSET(0x11F507A0)
#define CLASS_1_ED492469204624B4_METHOD_1_1F5EDD05AC33279E_OFFSET UNITYSDK_OFFSET(0x11F4EA70)
#define CLASS_1_ED492469204624B4_METHOD_1_29447AAAFABC7909_OFFSET UNITYSDK_OFFSET(0x11F4F230)
#define CLASS_1_ED492469204624B4_METHOD_1_2EEC16014FBB8744_OFFSET UNITYSDK_OFFSET(0x11F4EF60)
#define CLASS_1_ED492469204624B4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11F50710)
#define CLASS_1_ED492469204624B4_METHOD_1_399B621129EF6A98_OFFSET UNITYSDK_OFFSET(0x11F508D0)
#define CLASS_1_ED492469204624B4_METHOD_1_52B5825C3319CBDF_OFFSET UNITYSDK_OFFSET(0x11F4F9F0)
#define CLASS_1_ED492469204624B4_METHOD_1_74841B4C1DB6DA69_OFFSET UNITYSDK_OFFSET(0x11F4F870)
#define CLASS_1_ED492469204624B4_METHOD_1_9B6777BABA447C60_OFFSET UNITYSDK_OFFSET(0x11F50810)
#define CLASS_1_ED492469204624B4_METHOD_1_B7AF459C5BA9108D_OFFSET UNITYSDK_OFFSET(0x11F4F1E0)
#define CLASS_1_ED492469204624B4_METHOD_1_BA00547407BCD0F4_OFFSET UNITYSDK_OFFSET(0x11F50180)
#define CLASS_1_ED492469204624B4_METHOD_1_BB64A799AE4464F1_OFFSET UNITYSDK_OFFSET(0x11F4E8C0)
#define CLASS_1_ED492469204624B4_METHOD_1_D3CEBCE5167DA4F3_OFFSET UNITYSDK_OFFSET(0x11F503F0)
#define CLASS_1_ED492469204624B4_METHOD_1_D5FF8B775A51562E_OFFSET UNITYSDK_OFFSET(0x11F4EBF0)
#define CLASS_1_ED492469204624B4_METHOD_1_E1B15FDCBB5E6478_OFFSET UNITYSDK_OFFSET(0x11F504D0)
#define CLASS_1_ED492469204624B4_METHOD_1_E27DF6D05BF20C3F_OFFSET UNITYSDK_OFFSET(0x11F50250)
#define CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_1_OFFSET UNITYSDK_OFFSET(0x11F505F0)
#define CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_OFFSET UNITYSDK_OFFSET(0x11F4F8D0)
#define CLASS_1_ED492469204624B4_METHOD_1_F429AA1C283F2F4A_OFFSET UNITYSDK_OFFSET(0x11F4F610)
#define CLASS_1_ED492469204624B4__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4E840)

inline static constexpr unsigned int Class_1_ED492469204624B4_TypeDefinitionIndex = 45986;

class Class_1_ED492469204624B4 : public ::System::Object
{
public:
	::Class_5_AF65C3A968E836D2* Field_1_1; // 0x10
	::Class_1_2F97A7FBE3F77566* Field_1_4; // 0x18
	::Class_1_F5B35B1B6669CF16* Field_1_0; // 0x20
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x28
	::MoleMole::HollowChessboard::HollowCell Field_1_3; // 0x34

	::System::Void _ctor(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_BB64A799AE4464F1(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_355*>* a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_355*>*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_BB64A799AE4464F1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_1F5EDD05AC33279E(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1, ::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_1F5EDD05AC33279E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_D5FF8B775A51562E(::Class_5_AF65C3A968E836D2* a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a2, ::Class_4_6242AA13BDAC7241* a3, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>* a4, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 a5)
	{
		return ((::System::Void(*)(::Class_5_AF65C3A968E836D2*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_4_6242AA13BDAC7241*, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_D5FF8B775A51562E_OFFSET))(a1, a2, a3, a4, a5);
	}

	::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5 Method_1_29447AAAFABC7909(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A a1)
	{
		return ((::Class_5_8A5B236F53009830_Enum_3_8906FFBAA96A3EB5(*)(::PVOID, ::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_29447AAAFABC7909_OFFSET))(this, a1);
	}

	::System::Void Method_1_0AF87D0747BFAED3(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_0AF87D0747BFAED3_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_F429AA1C283F2F4A(::Class_1_2899B0E942F4D2BC* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a3, ::MoleMole::HollowChessboard::HollowEntity* a4, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 a5, ::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_2899B0E942F4D2BC*, ::Enum_3_ABCAEFDF06E3479A, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6, ::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_F429AA1C283F2F4A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_E7AAFFBB211F3AED(::Class_5_AF65C3A968E836D2* a1, ::Class_0_16E4307DCC419505_356* a2, ::Class_1_2899B0E942F4D2BC* a3, ::Enum_3_ABCAEFDF06E3479A a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_0_16E4307DCC419505_356*, ::Class_1_2899B0E942F4D2BC*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Method_1_52B5825C3319CBDF(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowEntity*& a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowEntity*&, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_52B5825C3319CBDF_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 Method_1_BA00547407BCD0F4(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6(*)(::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_BA00547407BCD0F4_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_E27DF6D05BF20C3F(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E27DF6D05BF20C3F_OFFSET))(this, a1);
	}

	static ::Class_4_6242AA13BDAC7241* Method_1_D3CEBCE5167DA4F3(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::Class_4_6242AA13BDAC7241*(*)(::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_D3CEBCE5167DA4F3_OFFSET))(a1);
	}

	static ::System::Void Method_1_E1B15FDCBB5E6478(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1, ::Class_4_6242AA13BDAC7241* a2, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 a3, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 a4, ::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195 a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_4_6242AA13BDAC7241*, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6, ::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E1B15FDCBB5E6478_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_B7AF459C5BA9108D(::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 a1, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 a2)
	{
		return ((::System::Boolean(*)(::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_B7AF459C5BA9108D_OFFSET))(a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_E7AAFFBB211F3AED_1(::Class_5_AF65C3A968E836D2* a1, ::Class_0_16E4307DCC419505_356* a2, ::Class_1_2899B0E942F4D2BC* a3, ::Enum_3_ABCAEFDF06E3479A a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_0_16E4307DCC419505_356*, ::Class_1_2899B0E942F4D2BC*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_E7AAFFBB211F3AED_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0C65243341F1EFB1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_0C65243341F1EFB1_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_355*>* Method_1_2EEC16014FBB8744(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* a1, ::Class_4_6242AA13BDAC7241* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_355*>*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::Class_4_6242AA13BDAC7241*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_2EEC16014FBB8744_OFFSET))(a1, a2);
	}

	::MoleMole::PieceModelAnimType Method_1_74841B4C1DB6DA69(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A a1)
	{
		return ((::MoleMole::PieceModelAnimType(*)(::PVOID, ::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_74841B4C1DB6DA69_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_9B6777BABA447C60(::Class_1_2899B0E942F4D2BC* a1, ::Class_0_16E4307DCC419505_356* a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_2899B0E942F4D2BC*, ::Class_0_16E4307DCC419505_356*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_9B6777BABA447C60_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_399B621129EF6A98(::Class_1_2899B0E942F4D2BC* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::MoleMole::HollowChessboard::HollowEntity* a3, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_2899B0E942F4D2BC*, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowEntity*, ::System::Collections::Generic::List_1<::Class_4_6242AA13BDAC7241_Struct_2_64FE122F26515195>*))((::PBYTE)hIl2Cpp + CLASS_1_ED492469204624B4_METHOD_1_399B621129EF6A98_OFFSET))(this, a1, a2, a3, a4);
	}
};
