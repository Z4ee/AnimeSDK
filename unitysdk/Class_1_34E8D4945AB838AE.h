#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_34E8D4945AB838AE_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x16C2E0E0)
#define CLASS_1_34E8D4945AB838AE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2E400)

inline static constexpr unsigned int Class_1_34E8D4945AB838AE_TypeDefinitionIndex = 10764;

class Class_1_34E8D4945AB838AE : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::RPG::GameCore::FateBuffRarityType Field_1_5; // 0x24
	::RPG::Client::TextID Field_1_7; // 0x28
	::System::UInt32 Field_1_0; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::System::UInt32 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34E8D4945AB838AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_34E8D4945AB838AE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_34E8D4945AB838AE*&))((::PBYTE)hIl2Cpp + CLASS_1_34E8D4945AB838AE_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
