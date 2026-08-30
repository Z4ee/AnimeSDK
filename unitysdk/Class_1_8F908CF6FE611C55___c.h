#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F908CF6FE611C55___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD819C0)
#define CLASS_1_8F908CF6FE611C55___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDD81A00)
#define CLASS_1_8F908CF6FE611C55___C__ISFOCUSED_B__2_0_OFFSET UNITYSDK_OFFSET(0xDD81A10)

inline static constexpr unsigned int Class_1_8F908CF6FE611C55___c_TypeDefinitionIndex = 50203;

class Class_1_8F908CF6FE611C55___c : public ::System::Object
{
public:
	static ::Class_1_8F908CF6FE611C55___c** StaticGet___9()
	{
		return (::Class_1_8F908CF6FE611C55___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F908CF6FE611C55___c_TypeDefinitionIndex)->GetStaticField(0x667C0);
	}
	static ::System::Func_2<::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F908CF6FE611C55___c_TypeDefinitionIndex)->GetStaticField(0x667C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__CTOR_OFFSET))(this);
	}

	::System::Action_1<::System::Boolean>* _IsFocused_b__2_0(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55___C__ISFOCUSED_B__2_0_OFFSET))(this, a1);
	}
};
