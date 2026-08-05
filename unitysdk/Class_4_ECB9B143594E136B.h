#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"

#define CLASS_4_ECB9B143594E136B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF741F00)
#define CLASS_4_ECB9B143594E136B_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0xF742040)
#define CLASS_4_ECB9B143594E136B_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF7420C0)
#define CLASS_4_ECB9B143594E136B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF741FD0)
#define CLASS_4_ECB9B143594E136B__CCTOR_OFFSET UNITYSDK_OFFSET(0xF741F50)
#define CLASS_4_ECB9B143594E136B__CTOR_OFFSET UNITYSDK_OFFSET(0xF742030)

inline static constexpr unsigned int Class_4_ECB9B143594E136B_TypeDefinitionIndex = 70406;

class Class_4_ECB9B143594E136B : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_0 = 0x21E; // 0x0
	::System::Int32 Field_4_6; // 0x50
	::System::Boolean Field_4_7; // 0x54
	::System::Int32 Field_4_5; // 0x58
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
