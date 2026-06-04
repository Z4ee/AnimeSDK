#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_360C00D6092F4D31;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define CLASS_1_C587B6DD326D56E5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14603440)
#define CLASS_1_C587B6DD326D56E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x14603480)
#define CLASS_1_C587B6DD326D56E5__CTOR_OFFSET UNITYSDK_OFFSET(0x14603310)

inline static constexpr unsigned int Class_1_C587B6DD326D56E5_TypeDefinitionIndex = 72295;

class Class_1_C587B6DD326D56E5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C587B6DD326D56E5_TypeDefinitionIndex)->GetStaticField(0x54DA0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C587B6DD326D56E5_TypeDefinitionIndex)->GetStaticField(0x54DA8);
	}
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* Field_1_2; // 0x10
	::Class_2_360C00D6092F4D31* Field_1_3; // 0x18

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_C587B6DD326D56E5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C587B6DD326D56E5__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C587B6DD326D56E5_EXECUTE_OFFSET))(this);
	}
};
