#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_08B34D65A9FCAAE5;
class Class_1_41C791B40D5CE24D;
class Class_1_B5199E29CF4E68F9;
class Class_1_EDF7E2913A3DD535;
class Class_1_F5B35B1B6669CF16;
class Class_2_BBCAFA63F2895B1D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_4_7B5A65E248106C68_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1347ED00)
#define CLASS_4_7B5A65E248106C68_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x1347F3D0)
#define CLASS_4_7B5A65E248106C68_METHOD_4_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1347F320)
#define CLASS_4_7B5A65E248106C68_METHOD_4_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x1347F330)
#define CLASS_4_7B5A65E248106C68_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1347F340)
#define CLASS_4_7B5A65E248106C68_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1347EDD0)
#define CLASS_4_7B5A65E248106C68__CCTOR_OFFSET UNITYSDK_OFFSET(0x1347ED50)
#define CLASS_4_7B5A65E248106C68__CTOR_OFFSET UNITYSDK_OFFSET(0x1347F090)

inline static constexpr unsigned int Class_4_7B5A65E248106C68_TypeDefinitionIndex = 59292;

class Class_4_7B5A65E248106C68 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x219; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* Field_4_3; // 0x50
	::Class_1_41C791B40D5CE24D* Field_4_5; // 0x58
	::Class_1_EDF7E2913A3DD535* Field_4_2; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::UInt32>* Field_4_10; // 0x68
	::Class_1_B5199E29CF4E68F9* Field_4_4; // 0x70
	::Class_2_BBCAFA63F2895B1D* Field_4_8; // 0x78
	::Class_1_08B34D65A9FCAAE5* Field_4_6; // 0x80
	::Class_1_F5B35B1B6669CF16* Field_4_9; // 0x88
	::System::Collections::Generic::Queue_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_11; // 0x90
	::MoleMole::HollowChessboard::HollowChessboardUID Field_4_1; // 0x98
	::System::Boolean Field_4_7; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68_ONCLEAN_OFFSET))(this);
	}

	::Class_2_BBCAFA63F2895B1D* Method_4_43A46E5F9FAC62B8()
	{
		return ((::Class_2_BBCAFA63F2895B1D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68_METHOD_4_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_4_58BA0C8308C8127F(::Class_2_BBCAFA63F2895B1D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BBCAFA63F2895B1D*))((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68_METHOD_4_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_7B5A65E248106C68* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_7B5A65E248106C68*(*)())((::PBYTE)hIl2Cpp + CLASS_4_7B5A65E248106C68_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
