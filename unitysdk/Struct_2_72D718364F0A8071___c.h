#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
namespace System { template <typename T> class Comparison_1; }

#define STRUCT_2_72D718364F0A8071___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0xD0880B0)
#define STRUCT_2_72D718364F0A8071___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD088060)
#define STRUCT_2_72D718364F0A8071___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD0880A0)

inline static constexpr unsigned int Struct_2_72D718364F0A8071___c_TypeDefinitionIndex = 68942;

class Struct_2_72D718364F0A8071___c : public ::System::Object
{
public:
	static ::Struct_2_72D718364F0A8071___c** StaticGet___9()
	{
		return (::Struct_2_72D718364F0A8071___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_72D718364F0A8071___c_TypeDefinitionIndex)->GetStaticField(0x35620);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_296*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_296*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_72D718364F0A8071___c_TypeDefinitionIndex)->GetStaticField(0x35628);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_72D718364F0A8071___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_72D718364F0A8071___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_296* a1, ::Class_2_208CC9941471731A_296* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_296*, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + STRUCT_2_72D718364F0A8071___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
