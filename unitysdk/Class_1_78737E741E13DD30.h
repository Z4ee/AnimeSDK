#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ResidentPossessionConfig; }
namespace RPG::GameCore { class ResidentPossessionInfo; }
namespace RPG::GameCore { template <typename T> class StringMemoryDictionary_1; }
namespace System { class String; }

#define CLASS_1_78737E741E13DD30_METHOD_1_27582CD0F165C549_OFFSET UNITYSDK_OFFSET(0x8F48150)
#define CLASS_1_78737E741E13DD30_METHOD_1_A6724AD2DA5C0F32_OFFSET UNITYSDK_OFFSET(0x8F47A50)
#define CLASS_1_78737E741E13DD30_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x8F48250)
#define CLASS_1_78737E741E13DD30_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x8F47D90)
#define CLASS_1_78737E741E13DD30__CTOR_OFFSET UNITYSDK_OFFSET(0x8F48300)

inline static constexpr unsigned int Class_1_78737E741E13DD30_TypeDefinitionIndex = 52713;

class Class_1_78737E741E13DD30 : public ::System::Object
{
public:
	static ::RPG::GameCore::ResidentPossessionConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::ResidentPossessionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78737E741E13DD30_TypeDefinitionIndex)->GetStaticField(0x5BD30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78737E741E13DD30_TypeDefinitionIndex)->GetStaticField(0x5BD38);
	}
	static ::RPG::GameCore::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*>** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::StringMemoryDictionary_1<::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78737E741E13DD30_TypeDefinitionIndex)->GetStaticField(0x5BD40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78737E741E13DD30_TypeDefinitionIndex)->GetStaticField(0x5BD48);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78737E741E13DD30__CTOR_OFFSET))(this);
	}

	static ::Struct_2_0288E507E2813FBB Method_1_A6724AD2DA5C0F32(::System::String* a1)
	{
		return ((::Struct_2_0288E507E2813FBB(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_78737E741E13DD30_METHOD_1_A6724AD2DA5C0F32_OFFSET))(a1);
	}

	static ::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>* Method_1_27582CD0F165C549(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::ResidentPossessionInfo*>*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_78737E741E13DD30_METHOD_1_27582CD0F165C549_OFFSET))(a1);
	}

	static ::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78737E741E13DD30_METHOD_1_BE4EBC8FF4054312_OFFSET))();
	}

	static ::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78737E741E13DD30_METHOD_1_EAD10B3E55E2C4C5_OFFSET))();
	}
};
