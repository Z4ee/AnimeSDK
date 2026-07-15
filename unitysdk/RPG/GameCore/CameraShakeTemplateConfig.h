#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraShakeTemplateSingleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_4BCCEAA8ABD0E2AF_OFFSET UNITYSDK_OFFSET(0x1B709DA0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1B70A040)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_E24554BA31F36DCA_OFFSET UNITYSDK_OFFSET(0x1B709CD0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B709D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraShakeTemplateConfig_TypeDefinitionIndex = 15791;

	class CameraShakeTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CameraShakeTemplateSingleConfig*>* SingleTemplateList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::CameraShakeTemplateSingleConfig*>* _CacheDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E24554BA31F36DCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraShakeTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraShakeTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_E24554BA31F36DCA_OFFSET))(a1, a2);
		}

		::RPG::GameCore::CameraShakeTemplateSingleConfig* Method_2_4BCCEAA8ABD0E2AF(::System::String* a1)
		{
			return ((::RPG::GameCore::CameraShakeTemplateSingleConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_4BCCEAA8ABD0E2AF_OFFSET))(this, a1);
		}

		::System::Void Method_2_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_A239DF324AF4215D_OFFSET))(this);
		}
	};
}
