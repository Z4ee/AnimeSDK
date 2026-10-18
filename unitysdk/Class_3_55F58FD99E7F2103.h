#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class PivotBasedFractureMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_55F58FD99E7F2103_LATETICK_OFFSET UNITYSDK_OFFSET(0xEB86680)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xEB86400)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xEB865E0)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xEB86640)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEB863C0)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CB3266143E5794D4_OFFSET UNITYSDK_OFFSET(0xEB86560)
#define CLASS_3_55F58FD99E7F2103__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB86E20)
#define CLASS_3_55F58FD99E7F2103__CTOR_OFFSET UNITYSDK_OFFSET(0xEB86E10)

inline static constexpr unsigned int Class_3_55F58FD99E7F2103_TypeDefinitionIndex = 70695;

class Class_3_55F58FD99E7F2103 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_IIKOLHDHGBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13230);
	}
	static ::System::Int32* StaticGet_LNOIIDNGDAD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13234);
	}
	static ::System::Int32* StaticGet_FAJJHIJEFMK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13238);
	}
	static ::System::Int32* StaticGet_KPDHDAOEFPH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x1323C);
	}
	static ::System::Int32* StaticGet_BPAHAGEDLDG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13240);
	}
	static ::System::Int32* StaticGet_CJDMIIKGIIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13244);
	}
	static ::System::Int32* StaticGet_DDCOEPJNLIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13248);
	}
	static ::System::Int32* StaticGet_PMBJBLOEOIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x1324C);
	}
	static ::System::Int32* StaticGet_CMLDHKCIJHK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13250);
	}
	static ::System::Int32* StaticGet_LAKLBPKDKBP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13254);
	}
	static ::System::Int32* StaticGet_DNOIIDPGDCD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x13258);
	}
	::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x38
	::UnityEngine::Renderer* JAMDAALMOAL; // 0x40

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
