#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class StringMemoryDictionary_1; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define CLASS_1_CAEDCDB90D07B7CD_METHOD_1_3C7D5D806F946DCB_OFFSET UNITYSDK_OFFSET(0x12A69940)
#define CLASS_1_CAEDCDB90D07B7CD_METHOD_1_61254A0A16456962_OFFSET UNITYSDK_OFFSET(0x12A69D30)
#define CLASS_1_CAEDCDB90D07B7CD_METHOD_1_C360905A5FBF19F8_OFFSET UNITYSDK_OFFSET(0x12A69B70)
#define CLASS_1_CAEDCDB90D07B7CD_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x12A694E0)
#define CLASS_1_CAEDCDB90D07B7CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A6A1D0)
#define CLASS_1_CAEDCDB90D07B7CD__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6A1C0)

inline static constexpr unsigned int Class_1_CAEDCDB90D07B7CD_TypeDefinitionIndex = 64669;

class Class_1_CAEDCDB90D07B7CD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CAEDCDB90D07B7CD_TypeDefinitionIndex)->GetStaticField(0x40030);
	}
	static ::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>** StaticGet_Field_1_1()
	{
		return (::RPG::Client::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::TriggerEffect*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CAEDCDB90D07B7CD_TypeDefinitionIndex)->GetStaticField(0x40038);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CAEDCDB90D07B7CD_TypeDefinitionIndex)->GetStaticField(0x40040);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CAEDCDB90D07B7CD_TypeDefinitionIndex)->GetStaticField(0x40048);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAEDCDB90D07B7CD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CAEDCDB90D07B7CD__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CAEDCDB90D07B7CD_METHOD_1_EAD10B3E55E2C4C5_OFFSET))();
	}

	static ::Il2CppArray<::RPG::GameCore::TriggerEffect*>* Method_1_3C7D5D806F946DCB(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Il2CppArray<::RPG::GameCore::TriggerEffect*>*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CAEDCDB90D07B7CD_METHOD_1_3C7D5D806F946DCB_OFFSET))(a1, a2, a3);
	}

	static ::Struct_2_0288E507E2813FBB_1 Method_1_61254A0A16456962(::System::String* a1)
	{
		return ((::Struct_2_0288E507E2813FBB_1(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CAEDCDB90D07B7CD_METHOD_1_61254A0A16456962_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::TriggerEffect*>* Method_1_C360905A5FBF19F8(::Struct_2_0288E507E2813FBB_1 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::TriggerEffect*>*(*)(::Struct_2_0288E507E2813FBB_1))((::PBYTE)hIl2Cpp + CLASS_1_CAEDCDB90D07B7CD_METHOD_1_C360905A5FBF19F8_OFFSET))(a1);
	}
};
