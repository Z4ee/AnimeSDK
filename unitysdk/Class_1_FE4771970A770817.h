#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define CLASS_1_FE4771970A770817_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1D2BF2B0)
#define CLASS_1_FE4771970A770817_CONVERT_OFFSET UNITYSDK_OFFSET(0x1D2BF270)
#define CLASS_1_FE4771970A770817__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BEF90)

inline static constexpr unsigned int Class_1_FE4771970A770817_TypeDefinitionIndex = 42418;

class Class_1_FE4771970A770817 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4771970A770817__CTOR_OFFSET))(this);
	}

	::System::String* Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_FE4771970A770817_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_FE4771970A770817_CONVERTBOXED_OFFSET))(this, a1);
	}
};
