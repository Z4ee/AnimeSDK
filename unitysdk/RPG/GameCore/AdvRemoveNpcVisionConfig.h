#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_METHOD_3_28FDF4294B61D62C_OFFSET UNITYSDK_OFFSET(0x1865FC50)
#define RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_METHOD_3_DCFA5F3F87840E3D_OFFSET UNITYSDK_OFFSET(0x1865FBD0)
#define RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1865FC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRemoveNpcVisionConfig_TypeDefinitionIndex = 19287;

	class AdvRemoveNpcVisionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* VisionName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCFA5F3F87840E3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRemoveNpcVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRemoveNpcVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_METHOD_3_DCFA5F3F87840E3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28FDF4294B61D62C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRemoveNpcVisionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRemoveNpcVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_METHOD_3_28FDF4294B61D62C_OFFSET))(a1, a2);
		}
	};
}
