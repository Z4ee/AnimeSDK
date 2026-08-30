#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraShakeTemplateSingleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1CF7CD90)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_A793ACEF4315151A_OFFSET UNITYSDK_OFFSET(0x1CF7CAC0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_E24554BA31F36DCA_OFFSET UNITYSDK_OFFSET(0x1CF7C9F0)
#define RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7CAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraShakeTemplateConfig_TypeDefinitionIndex = 16267;

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

		::RPG::GameCore::CameraShakeTemplateSingleConfig* Method_2_A793ACEF4315151A(::System::String* a1)
		{
			return ((::RPG::GameCore::CameraShakeTemplateSingleConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_A793ACEF4315151A_OFFSET))(this, a1);
		}

		::System::Void Method_2_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERASHAKETEMPLATECONFIG_METHOD_2_A239DF324AF4215D_OFFSET))(this);
		}
	};
}
