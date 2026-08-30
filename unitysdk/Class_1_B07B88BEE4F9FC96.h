#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_B07B88BEE4F9FC96_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1C70B6B0)
#define CLASS_1_B07B88BEE4F9FC96_CONVERT_OFFSET UNITYSDK_OFFSET(0x1C70B570)
#define CLASS_1_B07B88BEE4F9FC96__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70B800)

inline static constexpr unsigned int Class_1_B07B88BEE4F9FC96_TypeDefinitionIndex = 44014;

class Class_1_B07B88BEE4F9FC96 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_CONVERTBOXED_OFFSET))(this, a1);
	}
};
