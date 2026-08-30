#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_METHOD_4_561B7EBCBC0C9E1E_OFFSET UNITYSDK_OFFSET(0x1DB41220)
#define RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_METHOD_4_7C4A0B5365AA36DD_OFFSET UNITYSDK_OFFSET(0x1DB411E0)
#define RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB41210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_AttachAIStatus_TypeDefinitionIndex = 19881;

	class ST_Side_AttachAIStatus : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIStatus>* AIStatusTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C4A0B5365AA36DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_AttachAIStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_AttachAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_METHOD_4_7C4A0B5365AA36DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_561B7EBCBC0C9E1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_AttachAIStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_AttachAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ATTACHAISTATUS_METHOD_4_561B7EBCBC0C9E1E_OFFSET))(a1, a2);
		}
	};
}
