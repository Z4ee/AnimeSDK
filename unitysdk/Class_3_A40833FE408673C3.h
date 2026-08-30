#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_A40833FE408673C3_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1D1E9270)
#define CLASS_3_A40833FE408673C3_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1D1E9230)
#define CLASS_3_A40833FE408673C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E9260)

inline static constexpr unsigned int Class_3_A40833FE408673C3_TypeDefinitionIndex = 21194;

class Class_3_A40833FE408673C3 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* MMMJJJOGBBI; // 0x18
	::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20
	::System::Boolean IJJCPANIEPG; // 0x28
	::System::Boolean NANMKBGJCEB; // 0x29
	::System::Boolean FMLMJLMDBPF; // 0x2A
	::System::Boolean DLHKHJGAAKN; // 0x2B
	::System::Boolean GEOPPFCKACN; // 0x2C
	::System::Single IKIOEBEGLJE; // 0x30

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
