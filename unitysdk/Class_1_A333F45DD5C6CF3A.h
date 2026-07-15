#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_641;
class Class_1_075C34D03AFA1215_7;
class Class_1_7ED05899B4F4C7F2;
class Class_1_D4A3432279006B16;
class Class_1_ED80D3EC77F13F93;
namespace Proto { class PlayerAssistInfo; }
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class String; }

#define CLASS_1_A333F45DD5C6CF3A_METHOD_1_3ED7DA1A91073B12_OFFSET UNITYSDK_OFFSET(0x179C0B60)
#define CLASS_1_A333F45DD5C6CF3A_METHOD_1_81753C9902B50395_OFFSET UNITYSDK_OFFSET(0x179C0A60)
#define CLASS_1_A333F45DD5C6CF3A_METHOD_1_A74CD6869A4022DD_OFFSET UNITYSDK_OFFSET(0x179C0840)
#define CLASS_1_A333F45DD5C6CF3A_METHOD_1_AB33636578A9D74E_OFFSET UNITYSDK_OFFSET(0x179C0DC0)
#define CLASS_1_A333F45DD5C6CF3A_METHOD_1_AB6286125329D332_OFFSET UNITYSDK_OFFSET(0x179C0700)
#define CLASS_1_A333F45DD5C6CF3A_METHOD_1_AC23DC02E8A8AAD0_OFFSET UNITYSDK_OFFSET(0x179C0D10)
#define CLASS_1_A333F45DD5C6CF3A__CTOR_OFFSET UNITYSDK_OFFSET(0x179C05C0)

inline static constexpr unsigned int Class_1_A333F45DD5C6CF3A_TypeDefinitionIndex = 59955;

class Class_1_A333F45DD5C6CF3A : public ::System::Object
{
public:
	::Class_1_ED80D3EC77F13F93* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_641* Field_1_1; // 0x18
	::Class_1_7ED05899B4F4C7F2* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_D4A3432279006B16* a1, ::Class_0_16E4307DCC419505_641* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D4A3432279006B16*, ::Class_0_16E4307DCC419505_641*))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::Avatar* Method_1_AB6286125329D332(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_075C34D03AFA1215_7* a4)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32, ::System::String*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A_METHOD_1_AB6286125329D332_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::Avatar* Method_1_81753C9902B50395(::Proto::PlayerAssistInfo* a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A_METHOD_1_81753C9902B50395_OFFSET))(this, a1);
	}

	::System::Void Method_1_A74CD6869A4022DD(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_075C34D03AFA1215_7* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32, ::System::String*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A_METHOD_1_A74CD6869A4022DD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3ED7DA1A91073B12(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A_METHOD_1_3ED7DA1A91073B12_OFFSET))(this, a1);
	}

	::Struct_2_AAD4F4215611A944 Method_1_AC23DC02E8A8AAD0(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A_METHOD_1_AC23DC02E8A8AAD0_OFFSET))(this, a1, a2);
	}

	::Struct_2_AAD4F4215611A944 Method_1_AB33636578A9D74E(::Proto::PlayerAssistInfo* a1)
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A333F45DD5C6CF3A_METHOD_1_AB33636578A9D74E_OFFSET))(this, a1);
	}
};
