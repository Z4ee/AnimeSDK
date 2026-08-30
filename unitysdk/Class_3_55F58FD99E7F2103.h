#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class PivotBasedFractureMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_55F58FD99E7F2103_LATETICK_OFFSET UNITYSDK_OFFSET(0x18928B80)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x18928900)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18928AE0)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18928B40)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x189288C0)
#define CLASS_3_55F58FD99E7F2103_METHOD_3_CB3266143E5794D4_OFFSET UNITYSDK_OFFSET(0x18928A60)
#define CLASS_3_55F58FD99E7F2103__CCTOR_OFFSET UNITYSDK_OFFSET(0x18929320)
#define CLASS_3_55F58FD99E7F2103__CTOR_OFFSET UNITYSDK_OFFSET(0x18929310)

inline static constexpr unsigned int Class_3_55F58FD99E7F2103_TypeDefinitionIndex = 70659;

class Class_3_55F58FD99E7F2103 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_LAKLBPKDKBP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x77F0);
	}
	static ::System::Int32* StaticGet_IIKOLHDHGBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x77F4);
	}
	static ::System::Int32* StaticGet_LNOIIDNGDAD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x77F8);
	}
	static ::System::Int32* StaticGet_PMBJBLOEOIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x77FC);
	}
	static ::System::Int32* StaticGet_KPDHDAOEFPH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7800);
	}
	static ::System::Int32* StaticGet_DDCOEPJNLIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7804);
	}
	static ::System::Int32* StaticGet_DNOIIDPGDCD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7808);
	}
	static ::System::Int32* StaticGet_CJDMIIKGIIA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x780C);
	}
	static ::System::Int32* StaticGet_FAJJHIJEFMK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7810);
	}
	static ::System::Int32* StaticGet_CMLDHKCIJHK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7814);
	}
	static ::System::Int32* StaticGet_BPAHAGEDLDG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_55F58FD99E7F2103_TypeDefinitionIndex)->GetStaticField(0x7818);
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
