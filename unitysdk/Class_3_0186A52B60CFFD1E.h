#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBaseHitStateSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0186A52B60CFFD1E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1280F3B0)
#define CLASS_3_0186A52B60CFFD1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1280F770)
#define CLASS_3_0186A52B60CFFD1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1280F380)

inline static constexpr unsigned int Class_3_0186A52B60CFFD1E_TypeDefinitionIndex = 51544;

class Class_3_0186A52B60CFFD1E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBaseHitStateSpeed*>
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_0186A52B60CFFD1E_TypeDefinitionIndex)->GetStaticField(0x67F0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBaseHitStateSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBaseHitStateSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_0186A52B60CFFD1E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0186A52B60CFFD1E__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0186A52B60CFFD1E_ONTASKBEGIN_OFFSET))(this);
	}
};
