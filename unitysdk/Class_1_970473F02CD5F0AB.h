#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_970473F02CD5F0AB_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x16E0DB60)
#define CLASS_1_970473F02CD5F0AB__CTOR_OFFSET UNITYSDK_OFFSET(0x16E0DF80)

inline static constexpr unsigned int Class_1_970473F02CD5F0AB_TypeDefinitionIndex = 10727;

class Class_1_970473F02CD5F0AB : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::RPG::GameCore::FateAreaType Field_1_8; // 0x2C
	::RPG::Client::TextID Field_1_4; // 0x30
	::RPG::Client::TextID Field_1_3; // 0x40
	::RPG::Client::TextID Field_1_5; // 0x50
	::System::UInt32 Field_1_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_970473F02CD5F0AB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_970473F02CD5F0AB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_970473F02CD5F0AB*&))((::PBYTE)hIl2Cpp + CLASS_1_970473F02CD5F0AB_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
