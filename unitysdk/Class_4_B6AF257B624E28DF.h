#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B3B7AD2B34783116.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_5_2B047B81D949C4E6;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_B6AF257B624E28DF_METHOD_4_0B2B196E2CC91FF1_OFFSET UNITYSDK_OFFSET(0x16670DD0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_0CF581A7F8BEAE54_OFFSET UNITYSDK_OFFSET(0x1666F4F0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_114BC42F4328EA7E_OFFSET UNITYSDK_OFFSET(0x1666FDD0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_2DB4122A33EFF900_OFFSET UNITYSDK_OFFSET(0x166704A0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_4D29B8C91C6A85DD_OFFSET UNITYSDK_OFFSET(0x1666F9F0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_6C36CB2BC32CBC4E_OFFSET UNITYSDK_OFFSET(0x166706B0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_885FEC59B6F1237C_OFFSET UNITYSDK_OFFSET(0x1666F7B0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_98E60AF233408FFD_OFFSET UNITYSDK_OFFSET(0x166708C0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_A1122C9D496E6ACC_OFFSET UNITYSDK_OFFSET(0x166709C0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_ADADB7B7B5D2D596_OFFSET UNITYSDK_OFFSET(0x166706C0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_D279183863085EC4_OFFSET UNITYSDK_OFFSET(0x16670CD0)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_D2F55509002A3112_OFFSET UNITYSDK_OFFSET(0x16670A60)
#define CLASS_4_B6AF257B624E28DF_METHOD_4_E7B3CCB3F209A36D_OFFSET UNITYSDK_OFFSET(0x1666F5F0)
#define CLASS_4_B6AF257B624E28DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666F5A0)

inline static constexpr unsigned int Class_4_B6AF257B624E28DF_TypeDefinitionIndex = 54924;

class Class_4_B6AF257B624E28DF : public ::Class_3_B3B7AD2B34783116
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_0CF581A7F8BEAE54()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_0CF581A7F8BEAE54_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_E7B3CCB3F209A36D(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Boolean a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_E7B3CCB3F209A36D_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_885FEC59B6F1237C(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_885FEC59B6F1237C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4D29B8C91C6A85DD(::Class_5_2B047B81D949C4E6* a1, ::Class_5_AF65C3A968E836D2* a2, ::Class_5_AF65C3A968E836D2* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2B047B81D949C4E6*, ::Class_5_AF65C3A968E836D2*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_4D29B8C91C6A85DD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_4_114BC42F4328EA7E(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::Boolean a2, ::Class_1_0AEBFEBDADDA07AC* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowChessboardUID a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::System::Boolean, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_114BC42F4328EA7E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_4_2DB4122A33EFF900(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_2DB4122A33EFF900_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* Method_4_6C36CB2BC32CBC4E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_6C36CB2BC32CBC4E_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_ADADB7B7B5D2D596(::Class_1_0AEBFEBDADDA07AC* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowChessboardUID a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_ADADB7B7B5D2D596_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_98E60AF233408FFD(::Class_1_0AEBFEBDADDA07AC* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowChessboardUID a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_98E60AF233408FFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Method_4_A1122C9D496E6ACC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_A1122C9D496E6ACC_OFFSET))(this);
	}

	::System::Void Method_4_D2F55509002A3112(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_D2F55509002A3112_OFFSET))(this, a1);
	}

	static ::Class_4_B6AF257B624E28DF* Method_4_D279183863085EC4()
	{
		return ((::Class_4_B6AF257B624E28DF*(*)())((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_D279183863085EC4_OFFSET))();
	}

	::System::Void Method_4_0B2B196E2CC91FF1(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>*))((::PBYTE)hIl2Cpp + CLASS_4_B6AF257B624E28DF_METHOD_4_0B2B196E2CC91FF1_OFFSET))(this, a1);
	}
};
