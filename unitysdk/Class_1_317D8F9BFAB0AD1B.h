#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_606;
class Class_1_075C34D03AFA1215_7;
class Class_1_7ED05899B4F4C7F2;
class Class_1_D4A3432279006B16;
class Class_1_ED80D3EC77F13F93;
namespace Proto { class PlayerAssistInfo; }
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class String; }

#define CLASS_1_317D8F9BFAB0AD1B_METHOD_1_2CF3B9E6F9212A65_OFFSET UNITYSDK_OFFSET(0x141D0C70)
#define CLASS_1_317D8F9BFAB0AD1B_METHOD_1_3ED7DA1A91073B12_OFFSET UNITYSDK_OFFSET(0x141D0F10)
#define CLASS_1_317D8F9BFAB0AD1B_METHOD_1_81753C9902B50395_OFFSET UNITYSDK_OFFSET(0x141D0E10)
#define CLASS_1_317D8F9BFAB0AD1B_METHOD_1_8B6470D2E2D24ED9_OFFSET UNITYSDK_OFFSET(0x141D11B0)
#define CLASS_1_317D8F9BFAB0AD1B_METHOD_1_A6ECA4FE42B7A719_OFFSET UNITYSDK_OFFSET(0x141D10C0)
#define CLASS_1_317D8F9BFAB0AD1B_METHOD_1_AB6286125329D332_OFFSET UNITYSDK_OFFSET(0x141D0B30)
#define CLASS_1_317D8F9BFAB0AD1B__CTOR_OFFSET UNITYSDK_OFFSET(0x141D09F0)

inline static constexpr unsigned int Class_1_317D8F9BFAB0AD1B_TypeDefinitionIndex = 58684;

class Class_1_317D8F9BFAB0AD1B : public ::System::Object
{
public:
	::Class_1_ED80D3EC77F13F93* Field_1_0; // 0x10
	::Class_1_7ED05899B4F4C7F2* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_606* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_D4A3432279006B16* a1, ::Class_0_16E4307DCC419505_606* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D4A3432279006B16*, ::Class_0_16E4307DCC419505_606*))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::Avatar* Method_1_AB6286125329D332(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_075C34D03AFA1215_7* a4)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32, ::System::String*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B_METHOD_1_AB6286125329D332_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::Avatar* Method_1_81753C9902B50395(::Proto::PlayerAssistInfo* a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B_METHOD_1_81753C9902B50395_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CF3B9E6F9212A65(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2, ::System::String* a3, ::Class_1_075C34D03AFA1215_7* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32, ::System::String*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B_METHOD_1_2CF3B9E6F9212A65_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3ED7DA1A91073B12(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B_METHOD_1_3ED7DA1A91073B12_OFFSET))(this, a1);
	}

	::Struct_2_AAD4F4215611A944 Method_1_A6ECA4FE42B7A719(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B_METHOD_1_A6ECA4FE42B7A719_OFFSET))(this, a1, a2);
	}

	::Struct_2_AAD4F4215611A944 Method_1_8B6470D2E2D24ED9(::Proto::PlayerAssistInfo* a1)
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_317D8F9BFAB0AD1B_METHOD_1_8B6470D2E2D24ED9_OFFSET))(this, a1);
	}
};
