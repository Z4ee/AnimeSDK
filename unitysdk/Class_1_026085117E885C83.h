#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsUserType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_026085117E885C83_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x182111C0)
#define CLASS_1_026085117E885C83__CTOR_OFFSET UNITYSDK_OFFSET(0x182113E0)

inline static constexpr unsigned int Class_1_026085117E885C83_TypeDefinitionIndex = 13177;

class Class_1_026085117E885C83 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::GameCore::LimaoNewsUserType Field_1_3; // 0x18
	::System::UInt32 Field_1_0; // 0x1C
	::RPG::Client::TextID Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_026085117E885C83__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_026085117E885C83*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_026085117E885C83*&))((::PBYTE)hIl2Cpp + CLASS_1_026085117E885C83_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};
