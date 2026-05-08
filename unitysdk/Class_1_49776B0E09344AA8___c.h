#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }

#define CLASS_1_49776B0E09344AA8___C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x16686F40)
#define CLASS_1_49776B0E09344AA8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16686EF0)
#define CLASS_1_49776B0E09344AA8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16686F30)

inline static constexpr unsigned int Class_1_49776B0E09344AA8___c_TypeDefinitionIndex = 57729;

class Class_1_49776B0E09344AA8___c : public ::System::Object
{
public:
	static ::DG::Tweening::Core::DOGetter_1<::System::Single>** StaticGet___9__16_0()
	{
		return (::DG::Tweening::Core::DOGetter_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49776B0E09344AA8___c_TypeDefinitionIndex)->GetStaticField(0x45530);
	}
	static ::Class_1_49776B0E09344AA8___c** StaticGet___9()
	{
		return (::Class_1_49776B0E09344AA8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49776B0E09344AA8___c_TypeDefinitionIndex)->GetStaticField(0x45538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49776B0E09344AA8___C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
