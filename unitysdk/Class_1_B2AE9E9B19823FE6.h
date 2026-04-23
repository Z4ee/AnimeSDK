#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StringCase.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class String; }

#define CLASS_1_B2AE9E9B19823FE6_METHOD_1_57793BBDC4F790CE_OFFSET UNITYSDK_OFFSET(0x19D69730)
#define CLASS_1_B2AE9E9B19823FE6_SET_OFFSET UNITYSDK_OFFSET(0x19D696E0)
#define CLASS_1_B2AE9E9B19823FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x19D696D0)

inline static constexpr unsigned int Class_1_B2AE9E9B19823FE6_TypeDefinitionIndex = 9649;

class Class_1_B2AE9E9B19823FE6 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::Client::StringCase Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::StringCase a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::StringCase))((::PBYTE)hIl2Cpp + CLASS_1_B2AE9E9B19823FE6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2AE9E9B19823FE6_SET_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_57793BBDC4F790CE(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_B2AE9E9B19823FE6_METHOD_1_57793BBDC4F790CE_OFFSET))(a1);
	}
};
