#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_6815F0F1C8AD8B20.h"
#include "unitysdk/Struct_2_65DF5970183BBA63.h"

class Class_1_B35239AFC3E70F48;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C74E18AB5267B277_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF6248B0)
#define CLASS_3_C74E18AB5267B277_METHOD_3_00A968F776BCC204_OFFSET UNITYSDK_OFFSET(0xF624EA0)
#define CLASS_3_C74E18AB5267B277_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0xF624CF0)
#define CLASS_3_C74E18AB5267B277_METHOD_3_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xF6250A0)
#define CLASS_3_C74E18AB5267B277_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xF624E00)
#define CLASS_3_C74E18AB5267B277_METHOD_3_7A8604A90B40E6A9_OFFSET UNITYSDK_OFFSET(0xF624A20)
#define CLASS_3_C74E18AB5267B277_METHOD_3_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xF624E10)
#define CLASS_3_C74E18AB5267B277_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF624C80)
#define CLASS_3_C74E18AB5267B277_METHOD_3_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xF624FA0)
#define CLASS_3_C74E18AB5267B277_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xF624CE0)
#define CLASS_3_C74E18AB5267B277_METHOD_3_C813ED51B36FFD80_OFFSET UNITYSDK_OFFSET(0xF625000)
#define CLASS_3_C74E18AB5267B277_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF624740)
#define CLASS_3_C74E18AB5267B277__CCTOR_OFFSET UNITYSDK_OFFSET(0xF624900)
#define CLASS_3_C74E18AB5267B277__CTOR_OFFSET UNITYSDK_OFFSET(0xF624980)

inline static constexpr unsigned int Class_3_C74E18AB5267B277_TypeDefinitionIndex = 41169;

class Class_3_C74E18AB5267B277 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_22 = 0x62; // 0x0
	::System::Collections::Generic::Dictionary_2<::Enum_3_6815F0F1C8AD8B20, ::Class_1_B35239AFC3E70F48*>* Field_3_23; // 0x48
	::System::Collections::Generic::List_1<::System::Double>* Field_3_8; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_65DF5970183BBA63>* Field_3_0; // 0x58
	::System::Boolean Field_3_14; // 0x60
	::System::Boolean Field_3_13; // 0x61
	::System::Int32 Field_3_1; // 0x64
	::System::Single Field_3_6; // 0x68
	::System::Single Field_3_12; // 0x6C
	::System::Int32 Field_3_9; // 0x70
	::Enum_3_6815F0F1C8AD8B20 Field_3_4; // 0x74
	::System::Single Field_3_18; // 0x78
	::System::Single Field_3_10; // 0x7C
	::System::Single Field_3_17; // 0x80
	::System::Single Field_3_7; // 0x84
	::System::Double Field_3_5; // 0x88
	::System::Single Field_3_16; // 0x90
	::System::Int32 Field_3_11; // 0x94
	::System::Single Field_3_15; // 0x98
	::System::Single Field_3_19; // 0x9C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_7A8604A90B40E6A9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_7A8604A90B40E6A9_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Enum_3_6815F0F1C8AD8B20 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_6815F0F1C8AD8B20(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	static ::Class_3_C74E18AB5267B277* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_C74E18AB5267B277*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_3_00A968F776BCC204(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_00A968F776BCC204_OFFSET))(this, a1);
	}

	::System::Single Method_3_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_3_C813ED51B36FFD80(::Enum_3_6815F0F1C8AD8B20 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_6815F0F1C8AD8B20))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_C813ED51B36FFD80_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C74E18AB5267B277_METHOD_3_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
