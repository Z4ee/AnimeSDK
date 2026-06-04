#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_7D46F1066EF90FA6_5;
class Class_1_B2F03AF2376A5DC0;
class Class_1_D94DE62B6FBACBEE;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B638B471FA6B79D1_METHOD_1_23D843E3C6034180_OFFSET UNITYSDK_OFFSET(0xA59B820)
#define CLASS_1_B638B471FA6B79D1_METHOD_1_516B288F8E366B49_OFFSET UNITYSDK_OFFSET(0xA59B550)
#define CLASS_1_B638B471FA6B79D1_METHOD_1_DADDE85C223C9E39_OFFSET UNITYSDK_OFFSET(0xA59B5A0)
#define CLASS_1_B638B471FA6B79D1_METHOD_1_E5711DD469507973_OFFSET UNITYSDK_OFFSET(0xA59B790)
#define CLASS_1_B638B471FA6B79D1__CTOR_OFFSET UNITYSDK_OFFSET(0xA59B420)

inline static constexpr unsigned int Class_1_B638B471FA6B79D1_TypeDefinitionIndex = 58779;

class Class_1_B638B471FA6B79D1 : public ::System::Object
{
public:
	::Class_1_D94DE62B6FBACBEE* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::Avatar*>* Field_1_1; // 0x18
	::Class_1_B2F03AF2376A5DC0* Field_1_2; // 0x20
	::Class_1_7D46F1066EF90FA6_5* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_D94DE62B6FBACBEE* a1, ::Class_1_B2F03AF2376A5DC0* a2, ::Class_1_7D46F1066EF90FA6_5* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D94DE62B6FBACBEE*, ::Class_1_B2F03AF2376A5DC0*, ::Class_1_7D46F1066EF90FA6_5*))((::PBYTE)hIl2Cpp + CLASS_1_B638B471FA6B79D1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_516B288F8E366B49(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_B638B471FA6B79D1_METHOD_1_516B288F8E366B49_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5711DD469507973(::RPG::AvatarSystem::Avatar* a1, ::Struct_2_AAD4F4215611A944& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::Avatar*, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_B638B471FA6B79D1_METHOD_1_E5711DD469507973_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_DADDE85C223C9E39(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_B638B471FA6B79D1_METHOD_1_DADDE85C223C9E39_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_23D843E3C6034180(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_B638B471FA6B79D1_METHOD_1_23D843E3C6034180_OFFSET))(this, a1);
	}
};
