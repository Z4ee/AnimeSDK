#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/Class_4_B39E1AA89D98DED2_Enum_3_B4B78138CF90752C.h"
#include "unitysdk/Class_4_B39E1AA89D98DED2_Struct_2_091E41F7E0E918A2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_B39E1AA89D98DED2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12584500)
#define CLASS_4_B39E1AA89D98DED2_METHOD_4_7810D6DCCECD04DA_OFFSET UNITYSDK_OFFSET(0x125847A0)
#define CLASS_4_B39E1AA89D98DED2_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12584710)
#define CLASS_4_B39E1AA89D98DED2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x125845D0)
#define CLASS_4_B39E1AA89D98DED2__CCTOR_OFFSET UNITYSDK_OFFSET(0x12584550)
#define CLASS_4_B39E1AA89D98DED2__CTOR_OFFSET UNITYSDK_OFFSET(0x12584680)

inline static constexpr unsigned int Class_4_B39E1AA89D98DED2_TypeDefinitionIndex = 67707;

class Class_4_B39E1AA89D98DED2 : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_1 = 0x221; // 0x0
	::System::Collections::Generic::List_1<::Class_4_B39E1AA89D98DED2_Struct_2_091E41F7E0E918A2>* Field_4_5; // 0x50
	::System::Collections::Generic::List_1<::Class_4_B39E1AA89D98DED2_Struct_2_091E41F7E0E918A2>* Field_4_6; // 0x58
	::System::Boolean Field_4_7; // 0x60
	::Class_4_B39E1AA89D98DED2_Enum_3_B4B78138CF90752C Field_4_0; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_B39E1AA89D98DED2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B39E1AA89D98DED2__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B39E1AA89D98DED2_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B39E1AA89D98DED2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B39E1AA89D98DED2_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_B39E1AA89D98DED2* Method_4_7810D6DCCECD04DA()
	{
		return ((::Class_4_B39E1AA89D98DED2*(*)())((::PBYTE)hIl2Cpp + CLASS_4_B39E1AA89D98DED2_METHOD_4_7810D6DCCECD04DA_OFFSET))();
	}
};
