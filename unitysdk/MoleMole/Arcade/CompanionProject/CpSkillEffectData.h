#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8664E76D40232F76.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1EB3DD60)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3DD50)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectData_TypeDefinitionIndex = 92988;

	class CpSkillEffectData : public ::System::Object
	{
	public:
		::System::Int32 idx; // 0x10
		::Enum_3_8664E76D40232F76 effectType; // 0x14
		::System::Int32 startFrame; // 0x18
		::System::Int32 endFrame; // 0x1C
		::System::Int32 trackOrder; // 0x20
		::System::Boolean autoDestroy; // 0x24
		::System::Boolean brakeDestroy; // 0x25

		::System::Void _ctor(::Enum_3_8664E76D40232F76 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_8664E76D40232F76))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTDATA_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
		}
	};
}
