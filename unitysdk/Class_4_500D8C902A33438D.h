#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"

#define CLASS_4_500D8C902A33438D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1453CE20)
#define CLASS_4_500D8C902A33438D_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x1453CFE0)
#define CLASS_4_500D8C902A33438D_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1453CF50)
#define CLASS_4_500D8C902A33438D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1453CEF0)
#define CLASS_4_500D8C902A33438D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1453CE70)
#define CLASS_4_500D8C902A33438D__CTOR_OFFSET UNITYSDK_OFFSET(0x1453CF40)

inline static constexpr unsigned int Class_4_500D8C902A33438D_TypeDefinitionIndex = 61828;

class Class_4_500D8C902A33438D : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x226; // 0x0
	::System::Boolean Field_4_6; // 0x50
	::System::Boolean Field_4_7; // 0x51
	::System::Int32 Field_4_5; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_500D8C902A33438D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_500D8C902A33438D__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_500D8C902A33438D_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_500D8C902A33438D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_500D8C902A33438D_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_500D8C902A33438D* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_500D8C902A33438D*(*)())((::PBYTE)hIl2Cpp + CLASS_4_500D8C902A33438D_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}
};
