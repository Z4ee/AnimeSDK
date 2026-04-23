#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterReplaceMaterialPartShow; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER_METHOD_2_97B66EE1753DDD2A_OFFSET UNITYSDK_OFFSET(0x187D7170)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x187D7320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialRender_TypeDefinitionIndex = 16549;

	class CharacterReplaceMaterialRender : public ::RPG::GameCore::JsonConfig
	{
	public:
		// static const ::System::String* RENDER_NAME_RESIDENT_POSSESSION; // 0x0
		::System::String* RenderName; // 0x10
		::Il2CppArray<::System::UInt32>* MaterialIndexList; // 0x18
		::Il2CppArray<::System::String*>* MaterialPathList; // 0x20
		::RPG::GameCore::CharacterReplaceMaterialPartShow* PartShow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_97B66EE1753DDD2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialRender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialRender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDER_METHOD_2_97B66EE1753DDD2A_OFFSET))(a1, a2);
		}
	};
}
