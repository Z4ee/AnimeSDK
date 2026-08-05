#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B4905AAA2A347DAF_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x167C3BA0)
#define CLASS_1_B4905AAA2A347DAF_METHOD_1_CCC4C64E89FBF7A5_OFFSET UNITYSDK_OFFSET(0x167C3BF0)
#define CLASS_1_B4905AAA2A347DAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C3B90)
#define CLASS_1_B4905AAA2A347DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x167C3B80)

inline static constexpr unsigned int Class_1_B4905AAA2A347DAF_TypeDefinitionIndex = 44712;

class Class_1_B4905AAA2A347DAF : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4905AAA2A347DAF_TypeDefinitionIndex)->GetStaticField(0xE220);
	}
	::System::Collections::Generic::List_1<::Struct_2_9B079B18CA73BD4E>* Field_1_6; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_7; // 0x1C
	::System::Single Field_1_10; // 0x20
	::MoleMole::Config::DamageElementType Field_1_5; // 0x24
	::System::Single Field_1_11; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4905AAA2A347DAF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4905AAA2A347DAF__CCTOR_OFFSET))();
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4905AAA2A347DAF_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	static ::Class_1_B4905AAA2A347DAF* Method_1_CCC4C64E89FBF7A5(::System::Collections::Generic::List_1<::Struct_2_9B079B18CA73BD4E>* a1, ::System::Single a2, ::MoleMole::Config::DamageElementType a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::Class_1_B4905AAA2A347DAF*(*)(::System::Collections::Generic::List_1<::Struct_2_9B079B18CA73BD4E>*, ::System::Single, ::MoleMole::Config::DamageElementType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4905AAA2A347DAF_METHOD_1_CCC4C64E89FBF7A5_OFFSET))(a1, a2, a3, a4, a5);
	}
};
