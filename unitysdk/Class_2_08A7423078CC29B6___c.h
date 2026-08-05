#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_08A7423078CC29B6___C_METHOD_1_30E1342B30B71849_OFFSET UNITYSDK_OFFSET(0x17002F90)
#define CLASS_2_08A7423078CC29B6___C_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x17003000)
#define CLASS_2_08A7423078CC29B6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17002F40)
#define CLASS_2_08A7423078CC29B6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17002F80)

inline static constexpr unsigned int Class_2_08A7423078CC29B6___c_TypeDefinitionIndex = 66296;

class Class_2_08A7423078CC29B6___c : public ::System::Object
{
public:
	static ::Class_2_08A7423078CC29B6___c** StaticGet___9()
	{
		return (::Class_2_08A7423078CC29B6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08A7423078CC29B6___c_TypeDefinitionIndex)->GetStaticField(0x4EEA0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__16_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08A7423078CC29B6___c_TypeDefinitionIndex)->GetStaticField(0x4EEA8);
	}
	static ::System::Func_1<::MoleMole::EntityHandle>** StaticGet___9__15_0()
	{
		return (::System::Func_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08A7423078CC29B6___c_TypeDefinitionIndex)->GetStaticField(0x4EEB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_08A7423078CC29B6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08A7423078CC29B6___C__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_30E1342B30B71849()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08A7423078CC29B6___C_METHOD_1_30E1342B30B71849_OFFSET))(this);
	}

	::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08A7423078CC29B6___C_METHOD_1_F24A112B56A2E4B4_OFFSET))(this);
	}
};
