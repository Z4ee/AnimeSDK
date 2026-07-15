#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_383;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ED80D3EC77F13F93_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x160A9960)
#define CLASS_1_ED80D3EC77F13F93_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x160A9930)
#define CLASS_1_ED80D3EC77F13F93_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x160A9A10)
#define CLASS_1_ED80D3EC77F13F93_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x160A9980)
#define CLASS_1_ED80D3EC77F13F93_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x160A9DB0)
#define CLASS_1_ED80D3EC77F13F93_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x160A9CB0)
#define CLASS_1_ED80D3EC77F13F93_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x160A9970)
#define CLASS_1_ED80D3EC77F13F93_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x160A9950)
#define CLASS_1_ED80D3EC77F13F93__CTOR_OFFSET UNITYSDK_OFFSET(0x160A9EA0)

inline static constexpr unsigned int Class_1_ED80D3EC77F13F93_TypeDefinitionIndex = 59818;

class Class_1_ED80D3EC77F13F93 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Avatar* _Avatar_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_383*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* Field_1_2; // 0x20
	::Struct_2_AAD4F4215611A944 _Identifier_k__BackingField; // 0x28
	::System::Boolean Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93__CTOR_OFFSET))(this);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_AAD4F4215611A944 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* get_Avatar()
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_GET_AVATAR_OFFSET))(this);
	}

	::System::Void set_Avatar(::RPG::AvatarSystem::Avatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_SET_AVATAR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED80D3EC77F13F93_METHOD_1_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}
};
