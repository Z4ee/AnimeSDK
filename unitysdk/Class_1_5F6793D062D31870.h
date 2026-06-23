#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GeneralGraphicQualityProfile; }
namespace System { class String; }

#define CLASS_1_5F6793D062D31870_METHOD_1_37A69B336B2E88FB_OFFSET UNITYSDK_OFFSET(0x16353650)
#define CLASS_1_5F6793D062D31870_METHOD_1_53D4B1EA3972B461_OFFSET UNITYSDK_OFFSET(0x16353570)
#define CLASS_1_5F6793D062D31870_METHOD_1_BF5E2DCAE0BF038A_1_OFFSET UNITYSDK_OFFSET(0x16353980)
#define CLASS_1_5F6793D062D31870_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x163536E0)
#define CLASS_1_5F6793D062D31870_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16353530)
#define CLASS_1_5F6793D062D31870__CTOR_OFFSET UNITYSDK_OFFSET(0x16353520)

inline static constexpr unsigned int Class_1_5F6793D062D31870_TypeDefinitionIndex = 53471;

class Class_1_5F6793D062D31870 : public ::System::Object
{
public:
	::MoleMole::GeneralGraphicQualityProfile* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::GeneralGraphicQualityProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GeneralGraphicQualityProfile*))((::PBYTE)hIl2Cpp + CLASS_1_5F6793D062D31870__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F6793D062D31870_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_53D4B1EA3972B461(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F6793D062D31870_METHOD_1_53D4B1EA3972B461_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F6793D062D31870_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F6793D062D31870_METHOD_1_BF5E2DCAE0BF038A_1_OFFSET))(this);
	}

	::System::Void Method_1_37A69B336B2E88FB(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F6793D062D31870_METHOD_1_37A69B336B2E88FB_OFFSET))(this, a1, a2, a3);
	}
};
