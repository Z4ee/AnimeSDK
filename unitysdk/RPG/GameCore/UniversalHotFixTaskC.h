#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKC_METHOD_4_45F5B52820437D8D_OFFSET UNITYSDK_OFFSET(0x1D2B2EF0)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKC_METHOD_4_962EFA6CE9315676_OFFSET UNITYSDK_OFFSET(0x1D2B1AE0)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B1AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskC_TypeDefinitionIndex = 23095;

	class UniversalHotFixTaskC : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45F5B52820437D8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKC_METHOD_4_45F5B52820437D8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_962EFA6CE9315676(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKC_METHOD_4_962EFA6CE9315676_OFFSET))(a1, a2);
		}
	};
}
