#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_360C00D6092F4D31;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define CLASS_1_C587B6DD326D56E5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16FC6510)
#define CLASS_1_C587B6DD326D56E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FC6550)
#define CLASS_1_C587B6DD326D56E5__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC63E0)

inline static constexpr unsigned int Class_1_C587B6DD326D56E5_TypeDefinitionIndex = 77304;

class Class_1_C587B6DD326D56E5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_DAAKOJMCPOJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C587B6DD326D56E5_TypeDefinitionIndex)->GetStaticField(0x65480);
	}
	static ::System::String** StaticGet_NHPMFOEICCO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C587B6DD326D56E5_TypeDefinitionIndex)->GetStaticField(0x65488);
	}
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* MBBMBOMFIGF; // 0x10
	::Class_2_360C00D6092F4D31* EEFMDEHLLFI; // 0x18

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
