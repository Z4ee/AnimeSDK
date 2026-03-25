#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_6BE204EFAD569F8E_OFFSET UNITYSDK_OFFSET(0x1767B350)
#define RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_F2896E765C3D892C_OFFSET UNITYSDK_OFFSET(0x1767AA60)
#define RPG_GAMECORE_SOCOMPOSITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1767B5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SOCompositeConfig_TypeDefinitionIndex = 18329;

	class SOCompositeConfig : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* WaitMessages; // 0x18
		::System::Boolean CompleteAfterMessage; // 0x20
		::System::Boolean DisableLookAt; // 0x21
		::System::Boolean EnableTalk; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F2896E765C3D892C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOCompositeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOCompositeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_F2896E765C3D892C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BE204EFAD569F8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOCompositeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOCompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_6BE204EFAD569F8E_OFFSET))(a1, a2);
		}
	};
}
