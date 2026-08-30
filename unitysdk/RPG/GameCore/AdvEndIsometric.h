#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_8D9DAC7F4C905B79_OFFSET UNITYSDK_OFFSET(0x1CDC7860)
#define RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_8FE5649592E2167C_OFFSET UNITYSDK_OFFSET(0x1CDC7930)
#define RPG_GAMECORE_ADVENDISOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC7920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEndIsometric_TypeDefinitionIndex = 21961;

	class AdvEndIsometric : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D9DAC7F4C905B79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEndIsometric*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEndIsometric*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_8D9DAC7F4C905B79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FE5649592E2167C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEndIsometric* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEndIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_8FE5649592E2167C_OFFSET))(a1, a2);
		}
	};
}
