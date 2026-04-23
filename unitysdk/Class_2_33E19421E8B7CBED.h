#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvSetIgnoreCollision; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_33E19421E8B7CBED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9597FF0)
#define CLASS_2_33E19421E8B7CBED_METHOD_2_68412A7C5C00CA62_OFFSET UNITYSDK_OFFSET(0x9598070)
#define CLASS_2_33E19421E8B7CBED_METHOD_2_AA357C2E4B6A63F8_OFFSET UNITYSDK_OFFSET(0x9598600)
#define CLASS_2_33E19421E8B7CBED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9597170)
#define CLASS_2_33E19421E8B7CBED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9597620)
#define CLASS_2_33E19421E8B7CBED_TICK_OFFSET UNITYSDK_OFFSET(0x9597F90)
#define CLASS_2_33E19421E8B7CBED__CCTOR_OFFSET UNITYSDK_OFFSET(0x95989D0)
#define CLASS_2_33E19421E8B7CBED__CTOR_OFFSET UNITYSDK_OFFSET(0x95970E0)

inline static constexpr unsigned int Class_2_33E19421E8B7CBED_TypeDefinitionIndex = 48470;

class Class_2_33E19421E8B7CBED : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_2_6()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_33E19421E8B7CBED_TypeDefinitionIndex)->GetStaticField(0x5E5B0);
	}
	::RPG::GameCore::GameEntityList* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_5; // 0x20
	::RPG::GameCore::AdvSetIgnoreCollision* Field_2_1; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::RPG::GameCore::GameEntityList* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_2_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetIgnoreCollision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetIgnoreCollision*))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_68412A7C5C00CA62(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_METHOD_2_68412A7C5C00CA62_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA357C2E4B6A63F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_33E19421E8B7CBED_METHOD_2_AA357C2E4B6A63F8_OFFSET))(this, a1);
	}
};
