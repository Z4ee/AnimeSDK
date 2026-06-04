#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define CLASS_1_A18B9FA619C34230_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1925A520)
#define CLASS_1_A18B9FA619C34230__CTOR_OFFSET UNITYSDK_OFFSET(0x1925AA20)

inline static constexpr unsigned int Class_1_A18B9FA619C34230_TypeDefinitionIndex = 14333;

class Class_1_A18B9FA619C34230 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x40
	::System::UInt32 Field_1_6; // 0x44
	::RPG::Client::TextID Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x58
	::System::UInt32 Field_1_9; // 0x5C
	::RPG::Client::TextID Field_1_10; // 0x60
	::RPG::Client::TextID Field_1_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A18B9FA619C34230__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A18B9FA619C34230*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A18B9FA619C34230*&))((::PBYTE)hIl2Cpp + CLASS_1_A18B9FA619C34230_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
