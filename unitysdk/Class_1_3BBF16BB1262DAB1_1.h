#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3BBF16BB1262DAB1_1_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1D1A1C50)
#define CLASS_1_3BBF16BB1262DAB1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A22A0)

inline static constexpr unsigned int Class_1_3BBF16BB1262DAB1_1_TypeDefinitionIndex = 15061;

class Class_1_3BBF16BB1262DAB1_1 : public ::System::Object
{
public:
	::System::String* LCNLDGGAOBH; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
	::System::String* DOKOMKFGOOC; // 0x20
	::Il2CppArray<::System::UInt32>* JEHDKAKMCGC; // 0x28
	::System::String* OHBMLDNKGMD; // 0x30
	::System::String* BCGJNNDCIFH; // 0x38
	::System::UInt32 JJKLIJNFIBB; // 0x40
	::System::UInt32 KLOEJIMMPJM; // 0x44
	::RPG::Client::TextID PJNNPOKJEFD; // 0x48
	::RPG::Client::TextID NMAHGFAPENI; // 0x58
	::RPG::Client::TextID MJOOFPBABEA; // 0x68
	::System::UInt32 PILOLAAEAHB; // 0x78
	::System::Boolean GIFCDPFAKKP; // 0x7C
	::RPG::Client::TextID DDGDJCKKHPH; // 0x80
	::RPG::Client::TextID FBOICELIKNJ; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BBF16BB1262DAB1_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3BBF16BB1262DAB1_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3BBF16BB1262DAB1_1*&))((::PBYTE)hIl2Cpp + CLASS_1_3BBF16BB1262DAB1_1_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
