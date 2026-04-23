#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B553C21756B27967_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x183A1410)
#define CLASS_1_B553C21756B27967__CTOR_OFFSET UNITYSDK_OFFSET(0x183A1AB0)

inline static constexpr unsigned int Class_1_B553C21756B27967_TypeDefinitionIndex = 13195;

class Class_1_B553C21756B27967 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_4; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_18; // 0x18
	::System::String* Field_1_10; // 0x20
	::System::String* Field_1_11; // 0x28
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x38
	::System::String* Field_1_14; // 0x40
	::System::String* Field_1_13; // 0x48
	::System::UInt32 Field_1_12; // 0x50
	::System::UInt32 Field_1_3; // 0x54
	::RPG::Client::TextID Field_1_16; // 0x58
	::System::UInt32 Field_1_8; // 0x68
	::System::UInt32 Field_1_0; // 0x6C
	::System::UInt32 Field_1_5; // 0x70
	::RPG::GameCore::LimaoNewsOfficeSurveyType Field_1_17; // 0x74
	::System::UInt32 Field_1_6; // 0x78
	::RPG::GameCore::LimaoNewsPostSubmitType Field_1_2; // 0x7C
	::RPG::GameCore::LimaoNewsPostType Field_1_9; // 0x80
	::RPG::Client::TextID Field_1_15; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B553C21756B27967*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B553C21756B27967*&))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
