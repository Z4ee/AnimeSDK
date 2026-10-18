#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEditorDebugCapsuleDirection.h"
#include "unitysdk/RPG/GameCore/LittleGameEditorDebugDrawShapeType.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_ABC8A46868091AAD_OFFSET UNITYSDK_OFFSET(0x1D7B3530)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_BDFB077473067B4F_OFFSET UNITYSDK_OFFSET(0x1D7B34D0)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1D7B3900)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0x1D7B3920)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_3_OFFSET UNITYSDK_OFFSET(0x1D7B3940)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_4_OFFSET UNITYSDK_OFFSET(0x1D7B3960)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D7B38E0)
#define RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEditorDebugDrawConfig_TypeDefinitionIndex = 18859;

	class LittleGameEditorDebugDrawConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsDebugDraw; // 0x10
		::RPG::GameCore::LittleGameEditorDebugDrawShapeType Shape; // 0x14
		::RPG::MColor GizmoColor; // 0x18
		::RPG::MVector3 Center; // 0x28
		::RPG::GameCore::LittleGameEditorDebugCapsuleDirection Direction; // 0x34
		::System::Single Radius; // 0x38
		::RPG::MVector3 Size; // 0x3C
		::System::Single Height; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDFB077473067B4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEditorDebugDrawConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEditorDebugDrawConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_BDFB077473067B4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABC8A46868091AAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEditorDebugDrawConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEditorDebugDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_ABC8A46868091AAD_OFFSET))(a1, a2);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_1_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_2_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_3_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEDITORDEBUGDRAWCONFIG_METHOD_3_F0E307B84478A272_4_OFFSET))(this);
		}
	};
}
