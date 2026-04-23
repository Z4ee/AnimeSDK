#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6AE08EF87FF0FFCC_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9E533E0)
#define CLASS_1_6AE08EF87FF0FFCC_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9E533B0)
#define CLASS_1_6AE08EF87FF0FFCC_METHOD_1_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x9E53490)
#define CLASS_1_6AE08EF87FF0FFCC_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x9E53740)
#define CLASS_1_6AE08EF87FF0FFCC_METHOD_1_82C3869CC1ACE107_OFFSET UNITYSDK_OFFSET(0x9E53860)
#define CLASS_1_6AE08EF87FF0FFCC_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x9E53400)
#define CLASS_1_6AE08EF87FF0FFCC_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x9E533F0)
#define CLASS_1_6AE08EF87FF0FFCC_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9E533D0)
#define CLASS_1_6AE08EF87FF0FFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x9E53970)

inline static constexpr unsigned int Class_1_6AE08EF87FF0FFCC_TypeDefinitionIndex = 57740;

class Class_1_6AE08EF87FF0FFCC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* Field_1_0; // 0x10
	::RPG::AvatarSystem::Avatar* _Avatar_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_347*>* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::Struct_2_AAD4F4215611A944 _Identifier_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC__CTOR_OFFSET))(this);
	}

	::Struct_2_AAD4F4215611A944 get_Identifier()
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_AAD4F4215611A944 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::Avatar* get_Avatar()
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_GET_AVATAR_OFFSET))(this);
	}

	::System::Void set_Avatar(::RPG::AvatarSystem::Avatar* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_SET_AVATAR_OFFSET))(this, value);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_METHOD_1_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_82C3869CC1ACE107(::System::Object* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6AE08EF87FF0FFCC_METHOD_1_82C3869CC1ACE107_OFFSET))(this, a1, a2);
	}
};
