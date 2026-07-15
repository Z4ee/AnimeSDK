#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_93C60D7E85A35949_METHOD_2_C82BDBCAA7E7DC47_OFFSET UNITYSDK_OFFSET(0x1B262A20)
#define CLASS_2_93C60D7E85A35949__CTOR_OFFSET UNITYSDK_OFFSET(0x1B262DE0)

inline static constexpr unsigned int Class_2_93C60D7E85A35949_TypeDefinitionIndex = 19347;

class Class_2_93C60D7E85A35949 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::System::String*>* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x1D
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24
	::System::Single Field_2_6; // 0x28
	::System::Single Field_2_7; // 0x2C
	::System::Single Field_2_8; // 0x30
	::System::Single Field_2_9; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C60D7E85A35949__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C82BDBCAA7E7DC47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_93C60D7E85A35949*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_93C60D7E85A35949*&))((::PBYTE)hIl2Cpp + CLASS_2_93C60D7E85A35949_METHOD_2_C82BDBCAA7E7DC47_OFFSET))(a1, a2);
	}
};
