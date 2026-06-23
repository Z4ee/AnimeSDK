#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B57604365300A64;
class Class_2_208CC9941471731A_111;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_699998D4E6F32559___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x11AEC200)
#define CLASS_2_699998D4E6F32559___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x11AEC1A0)
#define CLASS_2_699998D4E6F32559___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AEC150)
#define CLASS_2_699998D4E6F32559___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEC190)

inline static constexpr unsigned int Class_2_699998D4E6F32559___c_TypeDefinitionIndex = 44553;

class Class_2_699998D4E6F32559___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_8B57604365300A64*>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::Class_1_8B57604365300A64*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_699998D4E6F32559___c_TypeDefinitionIndex)->GetStaticField(0x4C640);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_111*>** StaticGet___9__79_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_111*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_699998D4E6F32559___c_TypeDefinitionIndex)->GetStaticField(0x4C648);
	}
	static ::Class_2_699998D4E6F32559___c** StaticGet___9()
	{
		return (::Class_2_699998D4E6F32559___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_699998D4E6F32559___c_TypeDefinitionIndex)->GetStaticField(0x4C650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_8B57604365300A64* a1, ::Class_1_8B57604365300A64* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8B57604365300A64*, ::Class_1_8B57604365300A64*))((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_111* a1, ::Class_2_208CC9941471731A_111* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_111*, ::Class_2_208CC9941471731A_111*))((::PBYTE)hIl2Cpp + CLASS_2_699998D4E6F32559___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
