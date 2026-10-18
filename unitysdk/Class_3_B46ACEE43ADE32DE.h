#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_B46ACEE43ADE32DE_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1CDE2790)
#define CLASS_3_B46ACEE43ADE32DE_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1CDE2730)
#define CLASS_3_B46ACEE43ADE32DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE2780)

inline static constexpr unsigned int Class_3_B46ACEE43ADE32DE_TypeDefinitionIndex = 16834;

class Class_3_B46ACEE43ADE32DE : public ::RPG::GameCore::MarbleTaskConfig
{
public:
	::System::String* HEOANNBNGEI; // 0x10
	::System::String* BJFKIIAHHJA; // 0x18
	::System::UInt32 MAGEFLCHECM; // 0x20
	::System::Int32 IANALINIBNG; // 0x24
	::System::Int32 ICGEPEDFMAL; // 0x28
	::RPG::GameCore::MarbleTarget HILNFHCPEAD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B46ACEE43ADE32DE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B46ACEE43ADE32DE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B46ACEE43ADE32DE*&))((::PBYTE)hIl2Cpp + CLASS_3_B46ACEE43ADE32DE_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B46ACEE43ADE32DE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B46ACEE43ADE32DE*))((::PBYTE)hIl2Cpp + CLASS_3_B46ACEE43ADE32DE_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
