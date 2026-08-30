#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropDestruct.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_METHOD_4_237A6E4D0D8ADF2E_OFFSET UNITYSDK_OFFSET(0x1D364130)
#define RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_METHOD_4_7E524DC126577E0C_OFFSET UNITYSDK_OFFSET(0x1D363FB0)
#define RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D363F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestructImmediately_TypeDefinitionIndex = 21819;

	class PropDestructImmediately : public ::RPG::GameCore::PropDestruct
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_237A6E4D0D8ADF2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestructImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestructImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_METHOD_4_237A6E4D0D8ADF2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E524DC126577E0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestructImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestructImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_METHOD_4_7E524DC126577E0C_OFFSET))(a1, a2);
		}
	};
}
