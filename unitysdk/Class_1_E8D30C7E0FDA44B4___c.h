#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_E8D30C7E0FDA44B4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15917F00)
#define CLASS_1_E8D30C7E0FDA44B4___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0x15917F50)
#define CLASS_1_E8D30C7E0FDA44B4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15917F40)

inline static constexpr unsigned int Class_1_E8D30C7E0FDA44B4___c_TypeDefinitionIndex = 65633;

class Class_1_E8D30C7E0FDA44B4___c : public ::System::Object
{
public:
	static ::Class_1_E8D30C7E0FDA44B4___c** StaticGet___9()
	{
		return (::Class_1_E8D30C7E0FDA44B4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D30C7E0FDA44B4___c_TypeDefinitionIndex)->GetStaticField(0x5F280);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8D30C7E0FDA44B4___c_TypeDefinitionIndex)->GetStaticField(0x5F288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8D30C7E0FDA44B4___C__CREATEITEM_B__1_0_OFFSET))(this);
	}
};
