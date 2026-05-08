#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"

#define CLASS_4_5B6053BCF731B667_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x180B5700)
#define CLASS_4_5B6053BCF731B667_METHOD_4_56837B75C42A33D0_OFFSET UNITYSDK_OFFSET(0x180B5940)
#define CLASS_4_5B6053BCF731B667_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x180B58B0)
#define CLASS_4_5B6053BCF731B667_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x180B57D0)
#define CLASS_4_5B6053BCF731B667__CCTOR_OFFSET UNITYSDK_OFFSET(0x180B5750)
#define CLASS_4_5B6053BCF731B667__CTOR_OFFSET UNITYSDK_OFFSET(0x180B5820)

inline static constexpr unsigned int Class_4_5B6053BCF731B667_TypeDefinitionIndex = 73462;

class Class_4_5B6053BCF731B667 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x21E; // 0x0
	::MoleMole::HollowEntityConfig_CampType Field_4_4; // 0x50
	::System::Int32 Field_4_2; // 0x54
	::System::Int32 Field_4_3; // 0x58
	::System::Boolean Field_4_1; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_5B6053BCF731B667__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B6053BCF731B667__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B6053BCF731B667_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B6053BCF731B667_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B6053BCF731B667_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_5B6053BCF731B667* Method_4_56837B75C42A33D0()
	{
		return ((::Class_4_5B6053BCF731B667*(*)())((::PBYTE)hIl2Cpp + CLASS_4_5B6053BCF731B667_METHOD_4_56837B75C42A33D0_OFFSET))();
	}
};
