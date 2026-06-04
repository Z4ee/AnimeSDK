#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_B7B6A11029867830_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x193A4B50)
#define CLASS_1_B7B6A11029867830__CTOR_OFFSET UNITYSDK_OFFSET(0x193A4E00)

inline static constexpr unsigned int Class_1_B7B6A11029867830_TypeDefinitionIndex = 13504;

class Class_1_B7B6A11029867830 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B6A11029867830__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B7B6A11029867830*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B7B6A11029867830*&))((::PBYTE)hIl2Cpp + CLASS_1_B7B6A11029867830_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
