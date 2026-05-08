#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

#define CLASS_4_500D8C902A33438D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xFB80720)
#define CLASS_4_500D8C902A33438D_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0xFB808E0)
#define CLASS_4_500D8C902A33438D_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xFB80850)
#define CLASS_4_500D8C902A33438D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xFB807F0)
#define CLASS_4_500D8C902A33438D__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB80770)
#define CLASS_4_500D8C902A33438D__CTOR_OFFSET UNITYSDK_OFFSET(0xFB80840)

inline static constexpr unsigned int Class_4_500D8C902A33438D_TypeDefinitionIndex = 65056;

class Class_4_500D8C902A33438D : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x226; // 0x0
	::System::Int32 Field_4_3; // 0x50
	::System::Boolean Field_4_1; // 0x54
	::System::Boolean Field_4_2; // 0x55

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
