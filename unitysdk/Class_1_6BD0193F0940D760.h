#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define CLASS_1_6BD0193F0940D760_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x184526A0)
#define CLASS_1_6BD0193F0940D760__CTOR_OFFSET UNITYSDK_OFFSET(0x18452BB0)

inline static constexpr unsigned int Class_1_6BD0193F0940D760_TypeDefinitionIndex = 14276;

class Class_1_6BD0193F0940D760 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* Field_1_4; // 0x10
	::System::String* Field_1_8; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_7; // 0x20
	::System::String* Field_1_10; // 0x28
	::RPG::Client::TextID Field_1_11; // 0x30
	::System::UInt32 Field_1_1; // 0x40
	::System::UInt32 Field_1_0; // 0x44
	::System::UInt32 Field_1_3; // 0x48
	::System::UInt32 Field_1_2; // 0x4C
	::RPG::Client::TextID Field_1_6; // 0x50
	::RPG::Client::TextID Field_1_5; // 0x60
	::RPG::Client::TextID Field_1_9; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BD0193F0940D760__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6BD0193F0940D760*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6BD0193F0940D760*&))((::PBYTE)hIl2Cpp + CLASS_1_6BD0193F0940D760_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
