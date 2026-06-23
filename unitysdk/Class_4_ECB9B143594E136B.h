#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"

#define CLASS_4_ECB9B143594E136B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x131949F0)
#define CLASS_4_ECB9B143594E136B_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x13194B20)
#define CLASS_4_ECB9B143594E136B_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13194BA0)
#define CLASS_4_ECB9B143594E136B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13194AC0)
#define CLASS_4_ECB9B143594E136B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13194A40)
#define CLASS_4_ECB9B143594E136B__CTOR_OFFSET UNITYSDK_OFFSET(0x13194B10)

inline static constexpr unsigned int Class_4_ECB9B143594E136B_TypeDefinitionIndex = 70043;

class Class_4_ECB9B143594E136B : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x21E; // 0x0
	::System::Int32 Field_4_2; // 0x50
	::System::Int32 Field_4_3; // 0x54
	::System::Boolean Field_4_1; // 0x58
	::MoleMole::HollowEntityConfig_CampType Field_4_4; // 0x5C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_ECB9B143594E136B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ECB9B143594E136B__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ECB9B143594E136B_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ECB9B143594E136B_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_ECB9B143594E136B* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_ECB9B143594E136B*(*)())((::PBYTE)hIl2Cpp + CLASS_4_ECB9B143594E136B_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ECB9B143594E136B_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
