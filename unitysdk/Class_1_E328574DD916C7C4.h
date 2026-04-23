#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_E328574DD916C7C4_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1915B750)
#define CLASS_1_E328574DD916C7C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1915B9B0)

inline static constexpr unsigned int Class_1_E328574DD916C7C4_TypeDefinitionIndex = 14604;

class Class_1_E328574DD916C7C4 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::RPG::Client::TextID Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E328574DD916C7C4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E328574DD916C7C4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E328574DD916C7C4*&))((::PBYTE)hIl2Cpp + CLASS_1_E328574DD916C7C4_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
