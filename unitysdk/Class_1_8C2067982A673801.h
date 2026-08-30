#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueRoomAttributeCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8C2067982A673801_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1DDEE4C0)
#define CLASS_1_8C2067982A673801__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEE790)

inline static constexpr unsigned int Class_1_8C2067982A673801_TypeDefinitionIndex = 14894;

class Class_1_8C2067982A673801 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
	::RPG::Client::TextID NMAHGFAPENI; // 0x20
	::RPG::Client::TextID MJOOFPBABEA; // 0x30
	::System::UInt32 HHPFKDEBMGP; // 0x40
	::RPG::GameCore::RogueRoomAttributeCategory OOMBNFMJLEO; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2067982A673801__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8C2067982A673801*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8C2067982A673801*&))((::PBYTE)hIl2Cpp + CLASS_1_8C2067982A673801_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
