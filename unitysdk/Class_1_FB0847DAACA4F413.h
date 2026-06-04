#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_925886ED8B0F22DC;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define CLASS_1_FB0847DAACA4F413_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFEC180)
#define CLASS_1_FB0847DAACA4F413__CTOR_OFFSET UNITYSDK_OFFSET(0xAFEC1D0)

inline static constexpr unsigned int Class_1_FB0847DAACA4F413_TypeDefinitionIndex = 52189;

class Class_1_FB0847DAACA4F413 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_3_925886ED8B0F22DC* Field_1_1; // 0x18
	::RPG::GameCore::AnimParamRangeEntry* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Boolean Field_1_6; // 0x2E
	::System::Boolean Field_1_7; // 0x2F
	::System::Boolean Field_1_8; // 0x30
	::System::Boolean Field_1_9; // 0x31
	::System::Single Field_1_10; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0847DAACA4F413__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0847DAACA4F413_DISPOSE_OFFSET))(this);
	}
};
