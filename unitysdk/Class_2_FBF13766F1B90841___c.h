#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FBF13766F1B90841___C_METHOD_1_4458DC56A49A73B1_OFFSET UNITYSDK_OFFSET(0xEC92FE0)
#define CLASS_2_FBF13766F1B90841___C_METHOD_1_BA3DED77E3C4A66D_OFFSET UNITYSDK_OFFSET(0xEC92FF0)
#define CLASS_2_FBF13766F1B90841___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC92F90)
#define CLASS_2_FBF13766F1B90841___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEC92FD0)

inline static constexpr unsigned int Class_2_FBF13766F1B90841___c_TypeDefinitionIndex = 85861;

class Class_2_FBF13766F1B90841___c : public ::System::Object
{
public:
	static ::Class_2_FBF13766F1B90841___c** StaticGet___9()
	{
		return (::Class_2_FBF13766F1B90841___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBF13766F1B90841___c_TypeDefinitionIndex)->GetStaticField(0x442B0);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::UInt32>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBF13766F1B90841___c_TypeDefinitionIndex)->GetStaticField(0x442B8);
	}
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FBF13766F1B90841___c_TypeDefinitionIndex)->GetStaticField(0x442C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4458DC56A49A73B1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841___C_METHOD_1_4458DC56A49A73B1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_BA3DED77E3C4A66D(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841___C_METHOD_1_BA3DED77E3C4A66D_OFFSET))(this, a1);
	}
};
