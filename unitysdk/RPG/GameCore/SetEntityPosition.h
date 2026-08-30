#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYPOSITION_METHOD_3_3D44CB3BB23C6241_OFFSET UNITYSDK_OFFSET(0x1E8293D0)
#define RPG_GAMECORE_SETENTITYPOSITION_METHOD_3_B11FC59FC2746F71_OFFSET UNITYSDK_OFFSET(0x1E829330)
#define RPG_GAMECORE_SETENTITYPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E829390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityPosition_TypeDefinitionIndex = 23481;

	class SetEntityPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x38
		::RPG::GameCore::DynamicFloat* OffsetZ; // 0x40
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x48
		::System::Boolean UpdateRootOffset; // 0x50
		::System::Boolean SetRotation; // 0x51
		::RPG::GameCore::DynamicFloat* YawAngle; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B11FC59FC2746F71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYPOSITION_METHOD_3_B11FC59FC2746F71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D44CB3BB23C6241(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYPOSITION_METHOD_3_3D44CB3BB23C6241_OFFSET))(a1, a2);
		}
	};
}
