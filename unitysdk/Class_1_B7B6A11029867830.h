#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_B7B6A11029867830_METHOD_1_417A218C63D0B3DA_OFFSET UNITYSDK_OFFSET(0x1B9D5250)
#define CLASS_1_B7B6A11029867830__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D5500)

inline static constexpr unsigned int Class_1_B7B6A11029867830_TypeDefinitionIndex = 13652;

class Class_1_B7B6A11029867830 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x28
	::RPG::GameCore::FixPoint Field_1_3; // 0x30
	::RPG::GameCore::FixPoint Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7B6A11029867830__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_417A218C63D0B3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B7B6A11029867830*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B7B6A11029867830*&))((::PBYTE)hIl2Cpp + CLASS_1_B7B6A11029867830_METHOD_1_417A218C63D0B3DA_OFFSET))(a1, a2);
	}
};
