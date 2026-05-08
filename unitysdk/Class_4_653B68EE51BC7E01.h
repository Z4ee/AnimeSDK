#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/Class_4_653B68EE51BC7E01_Enum_3_EB9AD47D9BEB6601.h"
#include "unitysdk/Class_4_653B68EE51BC7E01_Struct_2_9826FB671B6014DA.h"
#include "unitysdk/Enum_3_A5A25F3A9F5A6A54.h"
#include "unitysdk/Enum_3_AE1972D98541A9AF.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_2_AB4261DB06E3A6BD;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_1_1D2D64B0F11327D7;

#define CLASS_4_653B68EE51BC7E01_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16A74B80)
#define CLASS_4_653B68EE51BC7E01_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x16A74E50)
#define CLASS_4_653B68EE51BC7E01_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16A74ED0)
#define CLASS_4_653B68EE51BC7E01_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16A74C50)
#define CLASS_4_653B68EE51BC7E01__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A74BD0)
#define CLASS_4_653B68EE51BC7E01__CTOR_OFFSET UNITYSDK_OFFSET(0x16A74D70)

inline static constexpr unsigned int Class_4_653B68EE51BC7E01_TypeDefinitionIndex = 53596;

class Class_4_653B68EE51BC7E01 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x22B; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_11; // 0x50
	::System::Collections::Generic::List_1<::Class_1_1D2D64B0F11327D7<::MoleMole::HollowChessboard::HollowCell>*>* Field_4_2; // 0x58
	::System::Collections::Generic::Queue_1<::Class_4_653B68EE51BC7E01_Struct_2_9826FB671B6014DA>* Field_4_1; // 0x60
	::Class_2_AB4261DB06E3A6BD* Field_4_12; // 0x68
	::Enum_3_AE1972D98541A9AF Field_4_8; // 0x70
	::System::Int32 Field_4_5; // 0x74
	::System::Int32 Field_4_10; // 0x78
	::Enum_3_A5A25F3A9F5A6A54 Field_4_7; // 0x7C
	::System::Boolean Field_4_3; // 0x80
	::System::Boolean Field_4_13; // 0x81
	::System::Boolean Field_4_6; // 0x82
	::Class_4_653B68EE51BC7E01_Enum_3_EB9AD47D9BEB6601 Field_4_4; // 0x84
	::Class_4_653B68EE51BC7E01_Struct_2_9826FB671B6014DA Field_4_9; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_653B68EE51BC7E01__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_653B68EE51BC7E01__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_653B68EE51BC7E01_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_653B68EE51BC7E01_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_653B68EE51BC7E01* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_653B68EE51BC7E01*(*)())((::PBYTE)hIl2Cpp + CLASS_4_653B68EE51BC7E01_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_653B68EE51BC7E01_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
