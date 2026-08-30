#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_6952C3AB7827DD62_AnimTriggerType.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureTriggerAnimStateWithMove; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6952C3AB7827DD62_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFCD780)
#define CLASS_2_6952C3AB7827DD62_METHOD_2_0454B7FDD412C329_OFFSET UNITYSDK_OFFSET(0xBFCEAA0)
#define CLASS_2_6952C3AB7827DD62_METHOD_2_41176640AA91A763_OFFSET UNITYSDK_OFFSET(0xBFCE180)
#define CLASS_2_6952C3AB7827DD62_METHOD_2_495FF15112EFBE61_OFFSET UNITYSDK_OFFSET(0xBFCDB10)
#define CLASS_2_6952C3AB7827DD62_METHOD_2_522C6266F72AB644_OFFSET UNITYSDK_OFFSET(0xBFCDDA0)
#define CLASS_2_6952C3AB7827DD62_METHOD_2_D0B3B59B70BE0FFC_OFFSET UNITYSDK_OFFSET(0xBFCDA90)
#define CLASS_2_6952C3AB7827DD62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFCD7C0)
#define CLASS_2_6952C3AB7827DD62_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFCE0D0)
#define CLASS_2_6952C3AB7827DD62_TICK_OFFSET UNITYSDK_OFFSET(0xBFCE120)
#define CLASS_2_6952C3AB7827DD62__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFCF380)
#define CLASS_2_6952C3AB7827DD62__CTOR_OFFSET UNITYSDK_OFFSET(0xBFCD6C0)

inline static constexpr unsigned int Class_2_6952C3AB7827DD62_TypeDefinitionIndex = 58070;

class Class_2_6952C3AB7827DD62 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Int32* StaticGet_NPNAIPNHBGP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6952C3AB7827DD62_TypeDefinitionIndex)->GetStaticField(0x15650);
	}
	static ::System::Int32* StaticGet_AMMDFNIBOKO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6952C3AB7827DD62_TypeDefinitionIndex)->GetStaticField(0x15654);
	}
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AdventureTriggerAnimStateWithMove* OFKGLJOAMLD; // 0x20
	::System::Int32 APNGJPMPMOB; // 0x28
	::Class_2_6952C3AB7827DD62_AnimTriggerType ALACEJLHIAI; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAnimStateWithMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_522C6266F72AB644(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_METHOD_2_522C6266F72AB644_OFFSET))(this, a1);
	}

	::System::Void Method_2_495FF15112EFBE61(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_METHOD_2_495FF15112EFBE61_OFFSET))(this, a1);
	}

	::System::Void Method_2_41176640AA91A763(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_METHOD_2_41176640AA91A763_OFFSET))(this, a1);
	}

	::System::Void Method_2_0454B7FDD412C329(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_METHOD_2_0454B7FDD412C329_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D0B3B59B70BE0FFC(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_6952C3AB7827DD62_METHOD_2_D0B3B59B70BE0FFC_OFFSET))(this, a1);
	}
};
