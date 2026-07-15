#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewDecoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_E8D3C253AACBAAAD_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1B2E0B40)
#define CLASS_1_E8D3C253AACBAAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E0F10)

inline static constexpr unsigned int Class_1_E8D3C253AACBAAAD_TypeDefinitionIndex = 13413;

class Class_1_E8D3C253AACBAAAD : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::Il2CppArray<::RPG::GameCore::LimaoNewsInterviewDecoType>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::Client::TextID Field_1_5; // 0x38
	::RPG::Client::TextID Field_1_6; // 0x48
	::System::UInt32 Field_1_7; // 0x58
	::System::UInt32 Field_1_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D3C253AACBAAAD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E8D3C253AACBAAAD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E8D3C253AACBAAAD*&))((::PBYTE)hIl2Cpp + CLASS_1_E8D3C253AACBAAAD_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
