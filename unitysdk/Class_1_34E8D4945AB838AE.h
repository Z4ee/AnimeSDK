#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_34E8D4945AB838AE_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x185D8380)
#define CLASS_1_34E8D4945AB838AE__CTOR_OFFSET UNITYSDK_OFFSET(0x185D86A0)

inline static constexpr unsigned int Class_1_34E8D4945AB838AE_TypeDefinitionIndex = 11015;

class Class_1_34E8D4945AB838AE : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x10
	::System::String* Field_1_4; // 0x18
	::RPG::GameCore::FateBuffRarityType Field_1_5; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::UInt32 Field_1_1; // 0x28
	::RPG::Client::TextID Field_1_7; // 0x30
	::System::UInt32 Field_1_6; // 0x40
	::System::UInt32 Field_1_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34E8D4945AB838AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_34E8D4945AB838AE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_34E8D4945AB838AE*&))((::PBYTE)hIl2Cpp + CLASS_1_34E8D4945AB838AE_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
