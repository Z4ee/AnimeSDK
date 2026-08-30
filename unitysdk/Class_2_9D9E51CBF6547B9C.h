#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_9D9E51CBF6547B9C_METHOD_2_2F4B6108E2917C18_OFFSET UNITYSDK_OFFSET(0x1CFE0FF0)
#define CLASS_2_9D9E51CBF6547B9C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE1170)

inline static constexpr unsigned int Class_2_9D9E51CBF6547B9C_TypeDefinitionIndex = 20821;

class Class_2_9D9E51CBF6547B9C : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* KAHGDLPDJCD; // 0x10
	::System::String* AAMGOJCABAC; // 0x18
	::System::UInt32 BIKLAFLEIOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9E51CBF6547B9C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_2F4B6108E2917C18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_9D9E51CBF6547B9C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_9D9E51CBF6547B9C*&))((::PBYTE)hIl2Cpp + CLASS_2_9D9E51CBF6547B9C_METHOD_2_2F4B6108E2917C18_OFFSET))(a1, a2);
	}
};
