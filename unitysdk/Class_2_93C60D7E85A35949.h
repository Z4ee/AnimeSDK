#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_93C60D7E85A35949_METHOD_2_C82BDBCAA7E7DC47_OFFSET UNITYSDK_OFFSET(0x1CFF0680)
#define CLASS_2_93C60D7E85A35949__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF0A40)

inline static constexpr unsigned int Class_2_93C60D7E85A35949_TypeDefinitionIndex = 19889;

class Class_2_93C60D7E85A35949 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::System::String*>* KKAAENBGDKI; // 0x10
	::System::Single NIGKPPNPBOA; // 0x18
	::System::Single IDCIEMGLMDP; // 0x1C
	::System::Single CLIBJAPJEFI; // 0x20
	::System::Single NAPCGLPKPGN; // 0x24
	::System::Single MKIEEKHILOI; // 0x28
	::System::Single OKIJCIDLMDD; // 0x2C
	::System::Boolean LPBOONOCHMD; // 0x30
	::System::Boolean OGCDIADPCGJ; // 0x31
	::System::Single IDHLPHBPOBK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C60D7E85A35949__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C82BDBCAA7E7DC47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_93C60D7E85A35949*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_93C60D7E85A35949*&))((::PBYTE)hIl2Cpp + CLASS_2_93C60D7E85A35949_METHOD_2_C82BDBCAA7E7DC47_OFFSET))(a1, a2);
	}
};
