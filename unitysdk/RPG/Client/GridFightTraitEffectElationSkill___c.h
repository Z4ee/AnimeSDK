#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightElationSkillConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5B90C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B9100)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C___GETCONFIGS_B__1_0_OFFSET UNITYSDK_OFFSET(0xA5B9110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectElationSkill___c_TypeDefinitionIndex = 60198;

	class GridFightTraitEffectElationSkill___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitEffectElationSkill___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitEffectElationSkill___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitEffectElationSkill___c_TypeDefinitionIndex)->GetStaticField(0x1B020);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightElationSkillConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitEffectElationSkill___c_TypeDefinitionIndex)->GetStaticField(0x1B028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightElationSkillConfig* __GetConfigs_b__1_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightElationSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTELATIONSKILL___C___GETCONFIGS_B__1_0_OFFSET))(this, x);
		}
	};
}
