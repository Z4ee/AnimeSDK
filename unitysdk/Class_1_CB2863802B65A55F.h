#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_CB2863802B65A55F_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1BB98D20)
#define CLASS_1_CB2863802B65A55F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB99040)

inline static constexpr unsigned int Class_1_CB2863802B65A55F_TypeDefinitionIndex = 11114;

class Class_1_CB2863802B65A55F : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::RPG::GameCore::FateBuffRarityType Field_1_6; // 0x30
	::RPG::Client::TextID Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB2863802B65A55F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_CB2863802B65A55F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_CB2863802B65A55F*&))((::PBYTE)hIl2Cpp + CLASS_1_CB2863802B65A55F_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
