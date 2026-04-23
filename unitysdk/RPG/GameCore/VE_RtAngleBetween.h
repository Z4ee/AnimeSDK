#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtDirConfig; }

#define RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_B143ABA5CBB39D9F_OFFSET UNITYSDK_OFFSET(0x190EE1F0)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_EB3660720CAA4692_OFFSET UNITYSDK_OFFSET(0x190EE1B0)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x190EE1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtAngleBetween_TypeDefinitionIndex = 23279;

	class VE_RtAngleBetween : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::RtDirConfig* Dir1; // 0x20
		::RPG::GameCore::RtDirConfig* Dir2; // 0x28
		::System::Boolean Abs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB3660720CAA4692(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtAngleBetween*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtAngleBetween*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_EB3660720CAA4692_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B143ABA5CBB39D9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_METHOD_3_B143ABA5CBB39D9F_OFFSET))(a1, a2);
		}
	};
}
