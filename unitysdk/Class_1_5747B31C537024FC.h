#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5747B31C537024FC_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1BD548B0)
#define CLASS_1_5747B31C537024FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD54C00)

inline static constexpr unsigned int Class_1_5747B31C537024FC_TypeDefinitionIndex = 12020;

class Class_1_5747B31C537024FC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30
	::RPG::Client::TextID Field_1_5; // 0x40
	::System::UInt32 Field_1_6; // 0x50
	::System::UInt32 Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5747B31C537024FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5747B31C537024FC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5747B31C537024FC*&))((::PBYTE)hIl2Cpp + CLASS_1_5747B31C537024FC_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
