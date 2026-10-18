#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/WhiteBoxValidationSeverity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_22233FCE064B8C06_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15991900)
#define CLASS_1_22233FCE064B8C06__CTOR_OFFSET UNITYSDK_OFFSET(0x15991960)

inline static constexpr unsigned int Class_1_22233FCE064B8C06_TypeDefinitionIndex = 48950;

class Class_1_22233FCE064B8C06 : public ::System::Object
{
public:
	::System::String* OOPKIKDJLOK; // 0x10
	::System::String* CAJPAGKBBML; // 0x18
	::UnityEngine::Object* MCLLALGABAB; // 0x20
	::System::String* KOKJDEKFPDH; // 0x28
	::System::String* GGCIGGGOLHG; // 0x30
	::RPGTools::LDWhiteBox::WhiteBoxValidationSeverity CJFGCAMPOFI; // 0x38
	::System::Single IEIDJBIPIKG; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22233FCE064B8C06__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22233FCE064B8C06_TOSTRING_OFFSET))(this);
	}
};
