#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_1FF29029872448C0_Struct_2_0A036F1F20BB50CE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_DC42C676F790CC3B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1FF29029872448C0_CLASS_1_B7336C479EF89A8C_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x13956510)
#define CLASS_3_1FF29029872448C0_CLASS_1_B7336C479EF89A8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13956420)
#define CLASS_3_1FF29029872448C0_CLASS_1_B7336C479EF89A8C__CTOR_OFFSET UNITYSDK_OFFSET(0x13956560)

inline static constexpr unsigned int Class_3_1FF29029872448C0_Class_1_B7336C479EF89A8C_TypeDefinitionIndex = 53029;

class Class_3_1FF29029872448C0_Class_1_B7336C479EF89A8C : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_1_4; // 0x20
	::Class_3_DC42C676F790CC3B* Field_1_0; // 0x28
	::Class_3_C93CC3D2C2AC4067* Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::Class_3_1FF29029872448C0_Struct_2_0A036F1F20BB50CE>* Field_1_11; // 0x38
	::System::Single Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FF29029872448C0_CLASS_1_B7336C479EF89A8C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FF29029872448C0_CLASS_1_B7336C479EF89A8C_DISPOSE_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FF29029872448C0_CLASS_1_B7336C479EF89A8C_BEFORERECYCLE_OFFSET))(this);
	}
};
