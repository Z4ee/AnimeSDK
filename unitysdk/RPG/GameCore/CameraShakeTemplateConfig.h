#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraShakeTemplateSingleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_5BCD8A29929F2A67_OFFSET UNITYSDK_OFFSET(0x187B6E70)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_80A29442A2186008_OFFSET UNITYSDK_OFFSET(0x187B6F50)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x187B7250)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187B6F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraShakeTemplateConfig_TypeDefinitionIndex = 15557;

	class CameraShakeTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CameraShakeTemplateSingleConfig*>* SingleTemplateList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::CameraShakeTemplateSingleConfig*>* _CacheDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5BCD8A29929F2A67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraShakeTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraShakeTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_5BCD8A29929F2A67_OFFSET))(a1, a2);
		}

		::RPG::GameCore::CameraShakeTemplateSingleConfig* Method_2_80A29442A2186008(::System::String* a1)
		{
			return ((::RPG::GameCore::CameraShakeTemplateSingleConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_80A29442A2186008_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}
	};
}
