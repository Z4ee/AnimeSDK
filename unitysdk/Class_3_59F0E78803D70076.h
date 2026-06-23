#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_0CBE728C82DBAA16.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_1.h"

class Class_1_8289F2785D9AA990;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_59F0E78803D70076_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x171B47F0)
#define CLASS_3_59F0E78803D70076_METHOD_3_5E191F27E867F09B_OFFSET UNITYSDK_OFFSET(0x171B4960)
#define CLASS_3_59F0E78803D70076_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x171B4DB0)
#define CLASS_3_59F0E78803D70076_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x171B4D20)
#define CLASS_3_59F0E78803D70076_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x171B4E00)
#define CLASS_3_59F0E78803D70076_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x171B4670)
#define CLASS_3_59F0E78803D70076__CCTOR_OFFSET UNITYSDK_OFFSET(0x171B4840)
#define CLASS_3_59F0E78803D70076__CTOR_OFFSET UNITYSDK_OFFSET(0x171B48C0)

inline static constexpr unsigned int Class_3_59F0E78803D70076_TypeDefinitionIndex = 77952;

class Class_3_59F0E78803D70076 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_18 = 0x73; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* Field_3_8; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316_1>* Field_3_6; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_31CE9F74ED7EF316_1>* Field_3_7; // 0x68
	::System::Boolean Field_3_12; // 0x70
	::System::Boolean Field_3_14; // 0x71
	::System::Boolean Field_3_13; // 0x72
	::System::Boolean Field_3_10; // 0x73
	::System::UInt32 Field_3_0; // 0x74
	::System::Int32 Field_3_9; // 0x78
	::System::UInt32 Field_3_1; // 0x7C
	::System::Boolean Field_3_16; // 0x80
	::System::Boolean Field_3_11; // 0x81
	::System::Boolean Field_3_17; // 0x82
	::MoleMole::Config::EntityType Field_3_5; // 0x84
	::Enum_3_0CBE728C82DBAA16 Field_3_15; // 0x88
	::System::Single Field_3_3; // 0x8C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076_GETCLASSID_OFFSET))(this);
	}

	::Class_3_59F0E78803D70076* Method_3_5E191F27E867F09B(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316_1>* a5, ::System::Boolean a6, ::MoleMole::Config::EntityType a7, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>* a8, ::System::Int32 a9, ::System::Boolean a10, ::Enum_3_0CBE728C82DBAA16 a11)
	{
		return ((::Class_3_59F0E78803D70076*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316_1>*, ::System::Boolean, ::MoleMole::Config::EntityType, ::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::System::Byte>*, ::System::Int32, ::System::Boolean, ::Enum_3_0CBE728C82DBAA16))((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076_METHOD_3_5E191F27E867F09B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	static ::Class_3_59F0E78803D70076* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_59F0E78803D70076*(*)())((::PBYTE)hIl2Cpp + CLASS_3_59F0E78803D70076_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}
};
