#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_57CE76CDADE932BE_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDDB950)
#define CLASS_1_57CE76CDADE932BE_1___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0xBDDB9A0)
#define CLASS_1_57CE76CDADE932BE_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDB990)

inline static constexpr unsigned int Class_1_57CE76CDADE932BE_1___c_TypeDefinitionIndex = 65646;

class Class_1_57CE76CDADE932BE_1___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_57CE76CDADE932BE_1___c_TypeDefinitionIndex)->GetStaticField(0x59E50);
	}
	static ::Class_1_57CE76CDADE932BE_1___c** StaticGet___9()
	{
		return (::Class_1_57CE76CDADE932BE_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_57CE76CDADE932BE_1___c_TypeDefinitionIndex)->GetStaticField(0x59E58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_1___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57CE76CDADE932BE_1___C__CREATEITEM_B__1_0_OFFSET))(this);
	}
};
