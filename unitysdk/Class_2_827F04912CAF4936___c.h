#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_676;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_827F04912CAF4936___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x138EF1F0)
#define CLASS_2_827F04912CAF4936___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x138EF1A0)
#define CLASS_2_827F04912CAF4936___C__CTOR_OFFSET UNITYSDK_OFFSET(0x138EF1E0)

inline static constexpr unsigned int Class_2_827F04912CAF4936___c_TypeDefinitionIndex = 60993;

class Class_2_827F04912CAF4936___c : public ::System::Object
{
public:
	static ::Class_2_827F04912CAF4936___c** StaticGet___9()
	{
		return (::Class_2_827F04912CAF4936___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_827F04912CAF4936___c_TypeDefinitionIndex)->GetStaticField(0x3B4E0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_676*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_676*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_827F04912CAF4936___c_TypeDefinitionIndex)->GetStaticField(0x3B4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_676* a1, ::Class_2_208CC9941471731A_676* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_676*, ::Class_2_208CC9941471731A_676*))((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
