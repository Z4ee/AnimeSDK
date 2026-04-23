#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR_METHOD_2_0E0D12D066B66B3E_OFFSET UNITYSDK_OFFSET(0x18B58AC0)
#define RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18B58C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarCustomColor_TypeDefinitionIndex = 22640;

	class MonsterEnergyBarCustomColor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ProgressColor; // 0x10
		::System::String* FillColor; // 0x18
		::System::String* ChangeEffColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0E0D12D066B66B3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterEnergyBarCustomColor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterEnergyBarCustomColor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARCUSTOMCOLOR_METHOD_2_0E0D12D066B66B3E_OFFSET))(a1, a2);
		}
	};
}
