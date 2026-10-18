#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_A40833FE408673C3_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1D288E60)
#define CLASS_3_A40833FE408673C3_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1D288E20)
#define CLASS_3_A40833FE408673C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D288E50)

inline static constexpr unsigned int Class_3_A40833FE408673C3_TypeDefinitionIndex = 21440;

class Class_3_A40833FE408673C3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x18
	::Il2CppArray<::System::String*>* MMMJJJOGBBI; // 0x20
	::System::Boolean IJJCPANIEPG; // 0x28
	::System::Boolean DLHKHJGAAKN; // 0x29
	::System::Boolean FMLMJLMDBPF; // 0x2A
	::System::Single IKIOEBEGLJE; // 0x2C
	::System::Boolean GEOPPFCKACN; // 0x30
	::System::Boolean NANMKBGJCEB; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A40833FE408673C3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A40833FE408673C3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A40833FE408673C3*&))((::PBYTE)hIl2Cpp + CLASS_3_A40833FE408673C3_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A40833FE408673C3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A40833FE408673C3*))((::PBYTE)hIl2Cpp + CLASS_3_A40833FE408673C3_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};
