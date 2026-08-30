#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightElationSkillConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB09D60)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB09DA0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C___GETCONFIGS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1BB09DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectElationSkill___c_TypeDefinitionIndex = 65437;

	class GridFightTraitEffectElationSkill___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitEffectElationSkill___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitEffectElationSkill___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitEffectElationSkill___c_TypeDefinitionIndex)->GetStaticField(0x49620);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitEffectElationSkill___c_TypeDefinitionIndex)->GetStaticField(0x49628);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightElationSkillConfig* __GetConfigs_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightElationSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C___GETCONFIGS_B__1_0_OFFSET))(this, a1);
		}
	};
}
