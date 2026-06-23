#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_834;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3BCCF62D4C0D4F61___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1A96C570)
#define CLASS_1_3BCCF62D4C0D4F61___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A96C520)
#define CLASS_1_3BCCF62D4C0D4F61___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96C560)

inline static constexpr unsigned int Class_1_3BCCF62D4C0D4F61___c_TypeDefinitionIndex = 17471;

class Class_1_3BCCF62D4C0D4F61___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_834*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_834*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BCCF62D4C0D4F61___c_TypeDefinitionIndex)->GetStaticField(0x7890);
	}
	static ::Class_1_3BCCF62D4C0D4F61___c** StaticGet___9()
	{
		return (::Class_1_3BCCF62D4C0D4F61___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BCCF62D4C0D4F61___c_TypeDefinitionIndex)->GetStaticField(0x7898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BCCF62D4C0D4F61___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCCF62D4C0D4F61___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_834* a1, ::Class_2_208CC9941471731A_834* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_834*, ::Class_2_208CC9941471731A_834*))((::PBYTE)hIl2Cpp + CLASS_1_3BCCF62D4C0D4F61___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
