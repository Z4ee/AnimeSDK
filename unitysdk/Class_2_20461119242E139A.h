#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_13AA04B154DB8B62;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterHudComponent; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_20461119242E139A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE882F00)
#define CLASS_2_20461119242E139A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE883020)
#define CLASS_2_20461119242E139A_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xE882490)
#define CLASS_2_20461119242E139A_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xE8825C0)
#define CLASS_2_20461119242E139A_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xE882880)
#define CLASS_2_20461119242E139A_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xE8829F0)
#define CLASS_2_20461119242E139A_METHOD_2_1BC131126DF4723D_OFFSET UNITYSDK_OFFSET(0xE882B60)
#define CLASS_2_20461119242E139A_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0xE882660)
#define CLASS_2_20461119242E139A_METHOD_2_614288621F812149_OFFSET UNITYSDK_OFFSET(0xE882620)
#define CLASS_2_20461119242E139A_METHOD_2_7588156DD6071C11_OFFSET UNITYSDK_OFFSET(0xE882980)
#define CLASS_2_20461119242E139A_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0xE8827F0)
#define CLASS_2_20461119242E139A_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0xE882C80)
#define CLASS_2_20461119242E139A_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xE882DD0)
#define CLASS_2_20461119242E139A_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xE882CE0)
#define CLASS_2_20461119242E139A_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0xE8826F0)
#define CLASS_2_20461119242E139A_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xE8826B0)
#define CLASS_2_20461119242E139A_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xE882750)
#define CLASS_2_20461119242E139A_ONRETURN_OFFSET UNITYSDK_OFFSET(0xE882920)
#define CLASS_2_20461119242E139A__CTOR_OFFSET UNITYSDK_OFFSET(0xE883110)
#define CLASS_2_20461119242E139A__ONBIND_OFFSET UNITYSDK_OFFSET(0xE882320)

inline static constexpr unsigned int Class_2_20461119242E139A_TypeDefinitionIndex = 71383;

class Class_2_20461119242E139A : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::GameCore::CharacterHudComponent* ILCDDGCKNEP; // 0x60
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x68
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
	::UnityEngine::Transform* GIMFNPMDJMD; // 0x78
	::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x80
	::Class_2_13AA04B154DB8B62* AKNLKEAMBEG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_GET_TRANS_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_614288621F812149_OFFSET))(this);
	}

	::RPG::GameCore::TeamType Method_2_583D59500575D856()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_583D59500575D856_OFFSET))(this);
	}

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_7588156DD6071C11(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_7588156DD6071C11_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_1BC131126DF4723D(::RPG::GameCore::EntityRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_1BC131126DF4723D_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20461119242E139A_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
