#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_2D2ED3997A3DA709;
namespace System { class String; }

#define CLASS_1_2F965EEA2FCEF2B1_METHOD_1_2067178A42DB21A5_OFFSET UNITYSDK_OFFSET(0x1923ADE0)
#define CLASS_1_2F965EEA2FCEF2B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1923AE70)

inline static constexpr unsigned int Class_1_2F965EEA2FCEF2B1_TypeDefinitionIndex = 59952;

class Class_1_2F965EEA2FCEF2B1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F965EEA2FCEF2B1__CTOR_OFFSET))(this);
	}

	::Class_1_2D2ED3997A3DA709* Method_1_2067178A42DB21A5(::System::String* a1, ::RPG::GameCore::GenderType a2)
	{
		return ((::Class_1_2D2ED3997A3DA709*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_2F965EEA2FCEF2B1_METHOD_1_2067178A42DB21A5_OFFSET))(this, a1, a2);
	}
};
