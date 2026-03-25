#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"

class Class_1_401B04C8577D73B5;
namespace RPG::GameCore { class LockUISkillOperation; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_167AFAD699D9FC8C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11036AB0)
#define CLASS_2_167AFAD699D9FC8C_METHOD_2_090F2DE299BBAEE5_OFFSET UNITYSDK_OFFSET(0x11036ED0)
#define CLASS_2_167AFAD699D9FC8C_METHOD_2_DAA078F38264227A_OFFSET UNITYSDK_OFFSET(0x11037100)
#define CLASS_2_167AFAD699D9FC8C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11036AF0)
#define CLASS_2_167AFAD699D9FC8C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x110371F0)
#define CLASS_2_167AFAD699D9FC8C_TICK_OFFSET UNITYSDK_OFFSET(0x11037240)
#define CLASS_2_167AFAD699D9FC8C__CTOR_OFFSET UNITYSDK_OFFSET(0x11036AA0)

inline static constexpr unsigned int Class_2_167AFAD699D9FC8C_TypeDefinitionIndex = 45308;

class Class_2_167AFAD699D9FC8C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LockUISkillOperation* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockUISkillOperation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_090F2DE299BBAEE5(::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>* a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C_METHOD_2_090F2DE299BBAEE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAA078F38264227A(::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>* a1, ::RPG::GameCore::ControlSkillType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_401B04C8577D73B5*>*, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + CLASS_2_167AFAD699D9FC8C_METHOD_2_DAA078F38264227A_OFFSET))(this, a1, a2);
	}
};
