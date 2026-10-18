#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace System { class String; }

#define STRUCT_2_7ADC47CBF4CDE3DB_GET_BASEJSONPATH_OFFSET UNITYSDK_OFFSET(0x1D30)
#define STRUCT_2_7ADC47CBF4CDE3DB_GET_DLCPATH01_OFFSET UNITYSDK_OFFSET(0x94D0)
#define STRUCT_2_7ADC47CBF4CDE3DB_GET_DLCPATH02_OFFSET UNITYSDK_OFFSET(0x94F0)
#define STRUCT_2_7ADC47CBF4CDE3DB_GET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x1D40)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_4ABCDF2586D50461_OFFSET UNITYSDK_OFFSET(0x3C388D0)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_4E00AB02DBFBB1C2_OFFSET UNITYSDK_OFFSET(0x1CDA6B90)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_586C7553EE6B79AE_OFFSET UNITYSDK_OFFSET(0x1CDA6B60)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_69C598B3A75CC344_OFFSET UNITYSDK_OFFSET(0x3C38A20)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x3C389E0)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x3C38A00)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x3C389C0)
#define STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x3C389A0)
#define STRUCT_2_7ADC47CBF4CDE3DB_SET_BASEJSONPATH_OFFSET UNITYSDK_OFFSET(0x94B0)
#define STRUCT_2_7ADC47CBF4CDE3DB_SET_DLCPATH01_OFFSET UNITYSDK_OFFSET(0x94E0)
#define STRUCT_2_7ADC47CBF4CDE3DB_SET_DLCPATH02_OFFSET UNITYSDK_OFFSET(0x9500)
#define STRUCT_2_7ADC47CBF4CDE3DB_SET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x94C0)
#define STRUCT_2_7ADC47CBF4CDE3DB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C38990)
#define STRUCT_2_7ADC47CBF4CDE3DB__CTOR_OFFSET UNITYSDK_OFFSET(0x3C38950)

inline static constexpr unsigned int Struct_2_7ADC47CBF4CDE3DB_TypeDefinitionIndex = 24839;

struct alignas(8) Struct_2_7ADC47CBF4CDE3DB
{
	::System::String* _BaseJsonPath_k__BackingField; // 0x10
	::System::String* _OverridePath_k__BackingField; // 0x18
	::System::String* _DLCPath01_k__BackingField; // 0x20
	::System::String* _DLCPath02_k__BackingField; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_BaseJsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_GET_BASEJSONPATH_OFFSET))(this);
	}

	::System::Void set_BaseJsonPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_SET_BASEJSONPATH_OFFSET))(this, a1);
	}

	::System::String* get_OverridePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_GET_OVERRIDEPATH_OFFSET))(this);
	}

	::System::Void set_OverridePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_SET_OVERRIDEPATH_OFFSET))(this, a1);
	}

	::System::String* get_DLCPath01()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_GET_DLCPATH01_OFFSET))(this);
	}

	::System::Void set_DLCPath01(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_SET_DLCPATH01_OFFSET))(this, a1);
	}

	::System::String* get_DLCPath02()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_GET_DLCPATH02_OFFSET))(this);
	}

	::System::Void set_DLCPath02(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_SET_DLCPATH02_OFFSET))(this, a1);
	}

	::System::Void Method_2_4ABCDF2586D50461(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_4ABCDF2586D50461_OFFSET))(this, a1);
	}

	static ::Struct_2_7ADC47CBF4CDE3DB Method_2_586C7553EE6B79AE(::System::String* a1)
	{
		return ((::Struct_2_7ADC47CBF4CDE3DB(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_586C7553EE6B79AE_OFFSET))(a1);
	}

	static ::System::String* Method_2_4E00AB02DBFBB1C2(::Struct_2_7ADC47CBF4CDE3DB a1)
	{
		return ((::System::String*(*)(::Struct_2_7ADC47CBF4CDE3DB))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_4E00AB02DBFBB1C2_OFFSET))(a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F24A112B56A2E4B4_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_F0E307B84478A272_2_OFFSET))(this);
	}

	::RPG::GameCore::CharacterConfig* Method_2_69C598B3A75CC344()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7ADC47CBF4CDE3DB_METHOD_2_69C598B3A75CC344_OFFSET))(this);
	}
};
