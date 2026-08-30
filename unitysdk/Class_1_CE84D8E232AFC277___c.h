#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CE84D8E232AFC277___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F86E00)
#define CLASS_1_CE84D8E232AFC277___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F86E40)
#define CLASS_1_CE84D8E232AFC277___C___EXECUTESWITCHPHASE_B__9_3_OFFSET UNITYSDK_OFFSET(0x17F86E50)

inline static constexpr unsigned int Class_1_CE84D8E232AFC277___c_TypeDefinitionIndex = 75824;

class Class_1_CE84D8E232AFC277___c : public ::System::Object
{
public:
	static ::Class_1_CE84D8E232AFC277___c** StaticGet___9()
	{
		return (::Class_1_CE84D8E232AFC277___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE84D8E232AFC277___c_TypeDefinitionIndex)->GetStaticField(0x55560);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__9_3()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE84D8E232AFC277___c_TypeDefinitionIndex)->GetStaticField(0x55568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277___C__CTOR_OFFSET))(this);
	}

	::System::Void __ExecuteSwitchPhase_b__9_3(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_CE84D8E232AFC277___C___EXECUTESWITCHPHASE_B__9_3_OFFSET))(this, a1);
	}
};
