#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821.h"
#include "unitysdk/Enum_3_2D4CB32960F34676.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/Struct_2_11287F05B515FFA7.h"
#include "unitysdk/Struct_2_E3BB9C4572628666.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49321B2ECE27579E_METHOD_1_25B0F4C1236D40EA_OFFSET UNITYSDK_OFFSET(0x18B0F6D0)
#define CLASS_1_49321B2ECE27579E_METHOD_1_37A90C5AAFF4D2B3_OFFSET UNITYSDK_OFFSET(0x18B0F510)
#define CLASS_1_49321B2ECE27579E_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x18B0F150)
#define CLASS_1_49321B2ECE27579E_METHOD_1_6D8FEB353E431543_OFFSET UNITYSDK_OFFSET(0x18B0F160)
#define CLASS_1_49321B2ECE27579E_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x18B0F330)
#define CLASS_1_49321B2ECE27579E_METHOD_1_D1AC4F3522408953_OFFSET UNITYSDK_OFFSET(0x18B0F600)
#define CLASS_1_49321B2ECE27579E_METHOD_1_E60B41B0210068CD_OFFSET UNITYSDK_OFFSET(0x18B0F280)
#define CLASS_1_49321B2ECE27579E_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x18B0F140)
#define CLASS_1_49321B2ECE27579E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B0F130)
#define CLASS_1_49321B2ECE27579E__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0EF20)

inline static constexpr unsigned int Class_1_49321B2ECE27579E_TypeDefinitionIndex = 77641;

class Class_1_49321B2ECE27579E : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_49321B2ECE27579E_TypeDefinitionIndex)->GetStaticField(0xD190);
	}
	::System::Collections::Generic::List_1<::Struct_2_E3BB9C4572628666>* Field_1_0; // 0x10
	::Struct_2_E3BB9C4572628666 Field_1_11; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821, ::System::Single>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_E3BB9C4572628666>* Field_1_6; // 0x40
	::Struct_2_E3BB9C4572628666 Field_1_4; // 0x48
	::Enum_3_2D4CB32960F34676 Field_1_1; // 0x68
	::System::Single Field_1_10; // 0x6C
	::MoleMole::HollowChessboard::GeometryHeightType Field_1_7; // 0x70

	::System::Void _ctor(::MoleMole::HollowChessboard::GeometryHeightType a1, ::Enum_3_2D4CB32960F34676 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::GeometryHeightType, ::Enum_3_2D4CB32960F34676))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_6D8FEB353E431543(::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821 a1, ::System::Boolean& a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_6D8FEB353E431543_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E60B41B0210068CD(::Struct_2_11287F05B515FFA7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_11287F05B515FFA7))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_E60B41B0210068CD_OFFSET))(this, a1);
	}

	::Struct_2_11287F05B515FFA7 Method_1_37A90C5AAFF4D2B3(::Struct_2_E3BB9C4572628666 a1)
	{
		return ((::Struct_2_11287F05B515FFA7(*)(::PVOID, ::Struct_2_E3BB9C4572628666))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_37A90C5AAFF4D2B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_D1AC4F3522408953(::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83A6E28E3C46AB40_Enum_3_D6A1C366BEC79821, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_D1AC4F3522408953_OFFSET))(this, a1, a2);
	}

	::Struct_2_E3BB9C4572628666 Method_1_25B0F4C1236D40EA()
	{
		return ((::Struct_2_E3BB9C4572628666(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49321B2ECE27579E_METHOD_1_25B0F4C1236D40EA_OFFSET))(this);
	}
};
