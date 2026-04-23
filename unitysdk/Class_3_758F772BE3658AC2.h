#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightShowRightCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_758F772BE3658AC2_METHOD_3_BF96DD2CB9CE433A_OFFSET UNITYSDK_OFFSET(0xB7C6990)
#define CLASS_3_758F772BE3658AC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7C65C0)
#define CLASS_3_758F772BE3658AC2__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7C6B30)
#define CLASS_3_758F772BE3658AC2__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C6590)

inline static constexpr unsigned int Class_3_758F772BE3658AC2_TypeDefinitionIndex = 53631;

class Class_3_758F772BE3658AC2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GridFightShowRightCutIn*>
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_758F772BE3658AC2_TypeDefinitionIndex)->GetStaticField(0x6A1B0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowRightCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowRightCutIn*))((::PBYTE)hIl2Cpp + CLASS_3_758F772BE3658AC2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_758F772BE3658AC2__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_758F772BE3658AC2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_BF96DD2CB9CE433A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_758F772BE3658AC2_METHOD_3_BF96DD2CB9CE433A_OFFSET))(this, a1);
	}
};
