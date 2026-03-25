#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_METHOD_3_AC836B5819EDAB58_OFFSET UNITYSDK_OFFSET(0x176E18C0)
#define RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_METHOD_3_D6A207820FD5B015_OFFSET UNITYSDK_OFFSET(0x176E19A0)
#define RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176E1940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetCustomAssetPreloadState_TypeDefinitionIndex = 21002;

	class SetTargetCustomAssetPreloadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* GroupName; // 0x20
		::System::Boolean Preload; // 0x28
		::Il2CppArray<::System::String*>* PathList; // 0x30
		::System::Int32 PreloadCount; // 0x38
		::System::Boolean Immediately; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC836B5819EDAB58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetCustomAssetPreloadState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetCustomAssetPreloadState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_METHOD_3_AC836B5819EDAB58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6A207820FD5B015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetCustomAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetCustomAssetPreloadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_METHOD_3_D6A207820FD5B015_OFFSET))(a1, a2);
		}
	};
}
