#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewContentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A10B52E49B18C483_METHOD_1_9A97CC9BA4751B18_OFFSET UNITYSDK_OFFSET(0x19B810B0)
#define CLASS_1_A10B52E49B18C483__CTOR_OFFSET UNITYSDK_OFFSET(0x19B81300)

inline static constexpr unsigned int Class_1_A10B52E49B18C483_TypeDefinitionIndex = 13268;

class Class_1_A10B52E49B18C483 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x30
	::RPG::GameCore::LimaoNewsInterviewContentType Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A10B52E49B18C483__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_9A97CC9BA4751B18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A10B52E49B18C483*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A10B52E49B18C483*&))((::PBYTE)hIl2Cpp + CLASS_1_A10B52E49B18C483_METHOD_1_9A97CC9BA4751B18_OFFSET))(a1, a2);
	}
};
