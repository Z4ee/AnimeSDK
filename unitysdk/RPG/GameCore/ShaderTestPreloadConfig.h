#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShaderTestPreloadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHADERTESTPRELOADCONFIG_METHOD_2_2DD464DF39BF9C90_OFFSET UNITYSDK_OFFSET(0x1E09A340)
#define RPG_GAMECORE_SHADERTESTPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09A520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderTestPreloadConfig_TypeDefinitionIndex = 16183;

	class ShaderTestPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ShaderTestPreloadItem*>* AvatarMaterialList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ShaderTestPreloadItem*>* NPCMaterialList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ShaderTestPreloadItem*>* MonsterMaterialList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2DD464DF39BF9C90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderTestPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderTestPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADCONFIG_METHOD_2_2DD464DF39BF9C90_OFFSET))(a1, a2);
		}
	};
}
