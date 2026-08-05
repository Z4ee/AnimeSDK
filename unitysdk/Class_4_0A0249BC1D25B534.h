#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/Enum_3_0FC69F51F876980B_4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_F6A6667BD36A97A9.h"

class Class_1_43BD383C98B4C0C5_129;
class Class_1_80CEC7B990B4301D;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_0A0249BC1D25B534_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1AC731D0)
#define CLASS_4_0A0249BC1D25B534_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x1AC734E0)
#define CLASS_4_0A0249BC1D25B534_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1AC73450)
#define CLASS_4_0A0249BC1D25B534_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1AC732A0)
#define CLASS_4_0A0249BC1D25B534__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC73220)
#define CLASS_4_0A0249BC1D25B534__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC73390)

inline static constexpr unsigned int Class_4_0A0249BC1D25B534_TypeDefinitionIndex = 73896;

class Class_4_0A0249BC1D25B534 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x220; // 0x0
	::Class_5_DCFF91E03A93C03C* Field_4_7; // 0x50
	::Class_1_80CEC7B990B4301D* Field_4_6; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_F6A6667BD36A97A9>* Field_4_8; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_9; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_4_11; // 0x70
	::Class_1_43BD383C98B4C0C5_129* Field_4_5; // 0x78
	::System::Single Field_4_4; // 0x80
	::Enum_3_0FC69F51F876980B_4 Field_4_15; // 0x84
	::System::Boolean Field_4_10; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_0A0249BC1D25B534* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_0A0249BC1D25B534*(*)())((::PBYTE)hIl2Cpp + CLASS_4_0A0249BC1D25B534_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
