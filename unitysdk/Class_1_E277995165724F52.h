#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_F939197C243AEA34;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimLightningConfig; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_E277995165724F52_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11E21C00)
#define CLASS_1_E277995165724F52_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11E22250)
#define CLASS_1_E277995165724F52_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x11E22020)
#define CLASS_1_E277995165724F52_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x11E22070)
#define CLASS_1_E277995165724F52_METHOD_1_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0x11E22770)
#define CLASS_1_E277995165724F52_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x11E224F0)
#define CLASS_1_E277995165724F52_METHOD_1_18ED3561638C3714_OFFSET UNITYSDK_OFFSET(0x11E22DD0)
#define CLASS_1_E277995165724F52_METHOD_1_49284295ADA99254_OFFSET UNITYSDK_OFFSET(0x11E22F80)
#define CLASS_1_E277995165724F52_METHOD_1_7165B8C420328007_OFFSET UNITYSDK_OFFSET(0x11E234D0)
#define CLASS_1_E277995165724F52_METHOD_1_81494B39F487DDC8_OFFSET UNITYSDK_OFFSET(0x11E23330)
#define CLASS_1_E277995165724F52_METHOD_1_871B8A82C521286A_OFFSET UNITYSDK_OFFSET(0x11E23DD0)
#define CLASS_1_E277995165724F52_METHOD_1_A11102BDB84BA59F_OFFSET UNITYSDK_OFFSET(0x11E222D0)
#define CLASS_1_E277995165724F52_METHOD_1_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0x11E21EC0)
#define CLASS_1_E277995165724F52_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x11E242C0)
#define CLASS_1_E277995165724F52_METHOD_1_AAE62CCE22BF6DE4_OFFSET UNITYSDK_OFFSET(0x11E227C0)
#define CLASS_1_E277995165724F52_METHOD_1_ABFDCAB2EBE17174_OFFSET UNITYSDK_OFFSET(0x11E21C50)
#define CLASS_1_E277995165724F52_METHOD_1_C226CD7F53DA913E_OFFSET UNITYSDK_OFFSET(0x11E229E0)
#define CLASS_1_E277995165724F52_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E24280)
#define CLASS_1_E277995165724F52_METHOD_1_E9CACBD1DC19ED90_OFFSET UNITYSDK_OFFSET(0x11E24140)
#define CLASS_1_E277995165724F52_METHOD_1_EDABE44B1D0BF6DB_OFFSET UNITYSDK_OFFSET(0x11E24510)
#define CLASS_1_E277995165724F52_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x11E22540)
#define CLASS_1_E277995165724F52__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E24650)
#define CLASS_1_E277995165724F52__CTOR_OFFSET UNITYSDK_OFFSET(0x11E21960)

inline static constexpr unsigned int Class_1_E277995165724F52_TypeDefinitionIndex = 70836;

class Class_1_E277995165724F52 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E277995165724F52_TypeDefinitionIndex)->GetStaticField(0x50810);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E277995165724F52_TypeDefinitionIndex)->GetStaticField(0xFD40);
	}
	// static const ::System::Int32 Field_1_5 = 0x20; // 0x0
	// static const ::System::Single Field_1_8; // 0x0
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x10
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x18
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0x20
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52__CCTOR_OFFSET))();
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_EXECUTE_OFFSET))(this);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_0BDFAC56E6B704CB_1_OFFSET))(this);
	}

	::System::Void Method_1_ABFDCAB2EBE17174()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_ABFDCAB2EBE17174_OFFSET))(this);
	}

	::System::Void Method_1_A11102BDB84BA59F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_A11102BDB84BA59F_OFFSET))(this);
	}

	::System::Void Method_1_AAE62CCE22BF6DE4(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_AAE62CCE22BF6DE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_A74F1CF3E25BC135_OFFSET))(this);
	}

	::System::Boolean Method_1_18ED3561638C3714(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F939197C243AEA34* a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F939197C243AEA34*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_18ED3561638C3714_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_49284295ADA99254(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::FiveDimLightningConfig* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Vector3, ::RPG::GameCore::FiveDimLightningConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_49284295ADA99254_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C226CD7F53DA913E(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_C226CD7F53DA913E_OFFSET))(this, a1);
	}

	::System::Void Method_1_81494B39F487DDC8(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_81494B39F487DDC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_871B8A82C521286A(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimLightningStateType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimLightningStateType))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_871B8A82C521286A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9CACBD1DC19ED90(::Class_2_9DD8A46984F1AFFD* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_E9CACBD1DC19ED90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7165B8C420328007(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_F939197C243AEA34* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_F939197C243AEA34*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_7165B8C420328007_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_EDABE44B1D0BF6DB(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_E277995165724F52_METHOD_1_EDABE44B1D0BF6DB_OFFSET))(this, a1, a2, a3, a4);
	}
};
