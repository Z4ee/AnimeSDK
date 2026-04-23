#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_18FCCBA13445A673_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x1842E400)
#define CLASS_3_18FCCBA13445A673_METHOD_3_BE513DA00D254FDB_OFFSET UNITYSDK_OFFSET(0x1842E480)
#define CLASS_3_18FCCBA13445A673__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E450)

inline static constexpr unsigned int Class_3_18FCCBA13445A673_TypeDefinitionIndex = 20329;

class Class_3_18FCCBA13445A673 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_6; // 0x20
	::System::Boolean Field_3_3; // 0x28
	::System::Boolean Field_3_7; // 0x29
	::System::Boolean Field_3_2; // 0x2A
	::System::Boolean Field_3_4; // 0x2B
	::System::Boolean Field_3_1; // 0x2C
	::System::Single Field_3_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18FCCBA13445A673__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_18FCCBA13445A673*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_18FCCBA13445A673*&))((::PBYTE)hIl2Cpp + CLASS_3_18FCCBA13445A673_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BE513DA00D254FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_18FCCBA13445A673* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_18FCCBA13445A673*))((::PBYTE)hIl2Cpp + CLASS_3_18FCCBA13445A673_METHOD_3_BE513DA00D254FDB_OFFSET))(a1, a2);
	}
};
