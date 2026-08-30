#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierPlayerChangeEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_9EEAF77F4115D4FA_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x17AFE1F0)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_0A7450AABE61E278_OFFSET UNITYSDK_OFFSET(0x17AFD8F0)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_26607FBDCE24B1D0_OFFSET UNITYSDK_OFFSET(0x17AFE0F0)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_39E4B299C143F018_OFFSET UNITYSDK_OFFSET(0x17AFDD60)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_47614828655E04EE_OFFSET UNITYSDK_OFFSET(0x17AFD0B0)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x17AFDF80)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_A5015AA5634490EB_OFFSET UNITYSDK_OFFSET(0x17AFE020)
#define CLASS_1_9EEAF77F4115D4FA_METHOD_1_DA7D5FED1E10712C_OFFSET UNITYSDK_OFFSET(0x17AFDBB0)
#define CLASS_1_9EEAF77F4115D4FA_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x17AFE200)
#define CLASS_1_9EEAF77F4115D4FA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AFE210)
#define CLASS_1_9EEAF77F4115D4FA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFCFA0)

inline static constexpr unsigned int Class_1_9EEAF77F4115D4FA_TypeDefinitionIndex = 55386;

class Class_1_9EEAF77F4115D4FA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KJLLAFEBBMG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EEAF77F4115D4FA_TypeDefinitionIndex)->GetStaticField(0x8640);
	}
	static ::System::Int32* StaticGet_JEJLEFAMBAK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EEAF77F4115D4FA_TypeDefinitionIndex)->GetStaticField(0x8644);
	}
	static ::System::Int32* StaticGet_LMEDHJLHMFM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EEAF77F4115D4FA_TypeDefinitionIndex)->GetStaticField(0x8648);
	}
	::Il2CppArray<::UnityEngine::Renderer*>* JEKLDIIKPLI; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* OIPDNIJEMAF; // 0x18
	::RPG::GameCore::ModifierPlayerChangeEffect* DOCBCODGIEH; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* GDJKHEEEPJM; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* KFOBOAGEAML; // 0x30
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x38
	::UnityEngine::Vector4 BKOECPKLOGD; // 0x40
	::UnityEngine::Color KAPOKDONACI; // 0x50
	::System::Single KHCBCLOMOHE; // 0x60
	::System::Int32 GMDBHJKEAEI; // 0x64
	::System::Single AHNCHIOFGLB; // 0x68

	::System::Void _ctor(::RPG::GameCore::ModifierPlayerChangeEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierPlayerChangeEffect*))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_47614828655E04EE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_47614828655E04EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0A7450AABE61E278(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_0A7450AABE61E278_OFFSET))(this, a1);
	}

	::System::Single Method_1_DA7D5FED1E10712C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_DA7D5FED1E10712C_OFFSET))(this);
	}

	::Struct_2_331ACDD60B60D2E3 Method_1_39E4B299C143F018()
	{
		return ((::Struct_2_331ACDD60B60D2E3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_39E4B299C143F018_OFFSET))(this);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Method_1_26607FBDCE24B1D0(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_26607FBDCE24B1D0_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_331ACDD60B60D2E3 Method_1_A5015AA5634490EB(::Struct_2_331ACDD60B60D2E3 a1, ::Struct_2_331ACDD60B60D2E3 a2, ::System::Single a3)
	{
		return ((::Struct_2_331ACDD60B60D2E3(*)(::PVOID, ::Struct_2_331ACDD60B60D2E3, ::Struct_2_331ACDD60B60D2E3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_METHOD_1_A5015AA5634490EB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9EEAF77F4115D4FA_SET_ENTITY_OFFSET))(this, a1);
	}
};
