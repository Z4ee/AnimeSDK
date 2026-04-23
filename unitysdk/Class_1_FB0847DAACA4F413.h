#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_925886ED8B0F22DC;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define CLASS_1_FB0847DAACA4F413_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128BC240)
#define CLASS_1_FB0847DAACA4F413__CTOR_OFFSET UNITYSDK_OFFSET(0x128BC290)

inline static constexpr unsigned int Class_1_FB0847DAACA4F413_TypeDefinitionIndex = 51521;

class Class_1_FB0847DAACA4F413 : public ::System::Object
{
public:
	::RPG::GameCore::AnimParamRangeEntry* Field_1_8; // 0x10
	::Class_3_925886ED8B0F22DC* Field_1_9; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Single Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Boolean Field_1_7; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Boolean Field_1_4; // 0x32
	::System::Boolean Field_1_3; // 0x33
	::System::Boolean Field_1_10; // 0x34
	::System::Boolean Field_1_5; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0847DAACA4F413__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB0847DAACA4F413_DISPOSE_OFFSET))(this);
	}
};
