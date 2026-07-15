#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0B306B15445B2FC1_METHOD_1_C779E333F2875688_OFFSET UNITYSDK_OFFSET(0x103E6CF0)
#define CLASS_1_0B306B15445B2FC1__CTOR_OFFSET UNITYSDK_OFFSET(0x103E7020)

inline static constexpr unsigned int Class_1_0B306B15445B2FC1_TypeDefinitionIndex = 11167;

class Class_1_0B306B15445B2FC1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x48
	::RPG::GameCore::FateRinHouguOwnerType Field_1_8; // 0x4C
	::System::UInt32 Field_1_9; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B306B15445B2FC1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C779E333F2875688(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0B306B15445B2FC1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0B306B15445B2FC1*&))((::PBYTE)hIl2Cpp + CLASS_1_0B306B15445B2FC1_METHOD_1_C779E333F2875688_OFFSET))(a1, a2);
	}
};
