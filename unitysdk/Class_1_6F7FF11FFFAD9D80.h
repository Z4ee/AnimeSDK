#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class StringMemoryDictionary_1; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define CLASS_1_6F7FF11FFFAD9D80_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xBAC3040)
#define CLASS_1_6F7FF11FFFAD9D80_METHOD_1_61254A0A16456962_OFFSET UNITYSDK_OFFSET(0xBAC38F0)
#define CLASS_1_6F7FF11FFFAD9D80_METHOD_1_C360905A5FBF19F8_OFFSET UNITYSDK_OFFSET(0xBAC3740)
#define CLASS_1_6F7FF11FFFAD9D80_METHOD_1_C86F5CDE70ECE614_OFFSET UNITYSDK_OFFSET(0xBAC34E0)
#define CLASS_1_6F7FF11FFFAD9D80__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAC3DC0)
#define CLASS_1_6F7FF11FFFAD9D80__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC3DB0)

inline static constexpr unsigned int Class_1_6F7FF11FFFAD9D80_TypeDefinitionIndex = 70147;

class Class_1_6F7FF11FFFAD9D80 : public ::System::Object
{
public:
	static ::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>** StaticGet_HMGFBENLJGM()
	{
		return (::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F7FF11FFFAD9D80_TypeDefinitionIndex)->GetStaticField(0x1EA90);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_KLFMBIKGOHO()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F7FF11FFFAD9D80_TypeDefinitionIndex)->GetStaticField(0x1EA98);
	}
	static ::System::String** StaticGet_PNAACJGPAFD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F7FF11FFFAD9D80_TypeDefinitionIndex)->GetStaticField(0x1EAA0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_PFCDNDJGGMB()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F7FF11FFFAD9D80_TypeDefinitionIndex)->GetStaticField(0x1EAA8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7FF11FFFAD9D80__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F7FF11FFFAD9D80__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F7FF11FFFAD9D80_METHOD_1_33E2FA8E6403B93D_OFFSET))();
	}

	static ::Il2CppArray<::RPG::GameCore::TriggerEffect*>* Method_1_C86F5CDE70ECE614(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::RPG::GameCore::TriggerEffect*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F7FF11FFFAD9D80_METHOD_1_C86F5CDE70ECE614_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_0288E507E2813FBB_1 Method_1_61254A0A16456962(::System::String* a1)
	{
		return ((::Struct_2_0288E507E2813FBB_1(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F7FF11FFFAD9D80_METHOD_1_61254A0A16456962_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::TriggerEffect*>* Method_1_C360905A5FBF19F8(::Struct_2_0288E507E2813FBB_1 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::TriggerEffect*>*(*)(::Struct_2_0288E507E2813FBB_1))((::PBYTE)hIl2Cpp + CLASS_1_6F7FF11FFFAD9D80_METHOD_1_C360905A5FBF19F8_OFFSET))(a1);
	}
};
