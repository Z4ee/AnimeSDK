#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/BabelTowerFloorInfoTemplate.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_473.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETDAMAGESCOREBASE_OFFSET UNITYSDK_OFFSET(0x1608BDE0)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATHPFINALSCOREPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1608BE40)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATTIMEFINALSCOREMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1608BEA0)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1608C090)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1608BDD0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int BabelFloorInfoTemplateExt_TypeDefinitionIndex = 12077;

	class BabelFloorInfoTemplateExt : public ::MoleMole::FlatBuffers::Config::BabelTowerFloorInfoTemplate
	{
	public:
		static ::System::Int32* StaticGet_HundredThousandDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BabelFloorInfoTemplateExt_TypeDefinitionIndex)->GetStaticField(0x3E60);
		}

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_473 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_473, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CCTOR_OFFSET))();
		}

		::System::Single GetDamageScoreBase()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETDAMAGESCOREBASE_OFFSET))(this);
		}

		::System::Single GetFloatHpFinalScorePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATHPFINALSCOREPERCENTAGE_OFFSET))(this);
		}

		::System::Single GetFloatTimeFinalScoreMultiplier(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATTIMEFINALSCOREMULTIPLIER_OFFSET))(this, time);
		}
	};
}
