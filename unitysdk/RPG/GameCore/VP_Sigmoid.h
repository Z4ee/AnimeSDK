#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VP_SIGMOID_METHOD_3_99EC068108000D71_OFFSET UNITYSDK_OFFSET(0x190F0ED0)
#define RPG_GAMECORE_VP_SIGMOID_METHOD_3_CA1FAC7460F0171C_OFFSET UNITYSDK_OFFSET(0x190F0E50)
#define RPG_GAMECORE_VP_SIGMOID__CTOR_OFFSET UNITYSDK_OFFSET(0x190F0EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Sigmoid_TypeDefinitionIndex = 23050;

	class VP_Sigmoid : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA1FAC7460F0171C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Sigmoid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Sigmoid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_METHOD_3_CA1FAC7460F0171C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99EC068108000D71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Sigmoid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Sigmoid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_METHOD_3_99EC068108000D71_OFFSET))(a1, a2);
		}
	};
}
