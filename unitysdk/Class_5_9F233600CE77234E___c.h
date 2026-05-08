#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_9F233600CE77234E___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x13F93AD0)
#define CLASS_5_9F233600CE77234E___C_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x13F93090)
#define CLASS_5_9F233600CE77234E___C_METHOD_1_6660E692D9A5BA8C_OFFSET UNITYSDK_OFFSET(0x13F93530)
#define CLASS_5_9F233600CE77234E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F93040)
#define CLASS_5_9F233600CE77234E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F93080)

inline static constexpr unsigned int Class_5_9F233600CE77234E___c_TypeDefinitionIndex = 54934;

class Class_5_9F233600CE77234E___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__1_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9F233600CE77234E___c_TypeDefinitionIndex)->GetStaticField(0x44320);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9F233600CE77234E___c_TypeDefinitionIndex)->GetStaticField(0x44328);
	}
	static ::Class_5_9F233600CE77234E___c** StaticGet___9()
	{
		return (::Class_5_9F233600CE77234E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9F233600CE77234E___c_TypeDefinitionIndex)->GetStaticField(0x44330);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_9F233600CE77234E___c_TypeDefinitionIndex)->GetStaticField(0x44338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E___C_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_6660E692D9A5BA8C()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E___C_METHOD_1_6660E692D9A5BA8C_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}
};
