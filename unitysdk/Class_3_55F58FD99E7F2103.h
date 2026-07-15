#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class PivotBasedFractureMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_55F58FD99E7F2103_LATETICK_OFFSET UNITYSDK_OFFSET(0x160B2050)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x160B1DD0)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x160B1FB0)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x160B2010)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x160B1D90)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CB3266143E5794D4_OFFSET UNITYSDK_OFFSET(0x160B1F30)
#define CLASS_3_55F58FD99E7F2103__CCTOR_OFFSET UNITYSDK_OFFSET(0x160B27F0)
#define CLASS_3_55F58FD99E7F2103__CTOR_OFFSET UNITYSDK_OFFSET(0x160B27E0)

inline static constexpr unsigned int Class_3_55F58FD99E7F2103_TypeDefinitionIndex = 67536;

class Class_3_55F58FD99E7F2103 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B80);
	}
	static ::System::Int32* StaticGet_Field_3_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B84);
	}
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B88);
	}
	static ::System::Int32* StaticGet_Field_3_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B8C);
	}
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B90);
	}
	static ::System::Int32* StaticGet_Field_3_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B94);
	}
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B98);
	}
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7B9C);
	}
	static ::System::Int32* StaticGet_Field_3_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7BA0);
	}
	static ::System::Int32* StaticGet_Field_3_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7BA4);
	}
	static ::System::Int32* StaticGet_Field_3_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7BA8);
	}
	::UnityEngine::MaterialPropertyBlock* Field_3_11; // 0x38
	::UnityEngine::Renderer* Field_3_12; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103__CCTOR_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void LateTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103_LATETICK_OFFSET))(this, a1);
	}

	::RPG::Client::PivotBasedFractureMonoPlugin* Method_3_CB3266143E5794D4()
	{
		return ((::RPG::Client::PivotBasedFractureMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55F58FD99E7F2103_METHOD_3_CB3266143E5794D4_OFFSET))(this);
	}
};
