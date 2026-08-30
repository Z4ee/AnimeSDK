#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_B07B88BEE4F9FC96_4_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1C708020)
#define CLASS_1_B07B88BEE4F9FC96_4_CONVERT_OFFSET UNITYSDK_OFFSET(0x1C707F60)
#define CLASS_1_B07B88BEE4F9FC96_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7080F0)

inline static constexpr unsigned int Class_1_B07B88BEE4F9FC96_4_TypeDefinitionIndex = 44020;

class Class_1_B07B88BEE4F9FC96_4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_4__CTOR_OFFSET))(this);
	}

	::System::UInt32 Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_4_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_B07B88BEE4F9FC96_4_CONVERTBOXED_OFFSET))(this, a1);
	}
};
