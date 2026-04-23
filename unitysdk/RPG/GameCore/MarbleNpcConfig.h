#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLENPCCONFIG_METHOD_2_D84400464A92AF26_OFFSET UNITYSDK_OFFSET(0x18AA10C0)
#define RPG_GAMECORE_MARBLENPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA1240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleNpcConfig_TypeDefinitionIndex = 17972;

	class MarbleNpcConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupId; // 0x10
		::Il2CppArray<::System::UInt32>* AnchorIds; // 0x18
		::Il2CppArray<::System::UInt32>* NpcIds; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D84400464A92AF26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLENPCCONFIG_METHOD_2_D84400464A92AF26_OFFSET))(a1, a2);
		}
	};
}
