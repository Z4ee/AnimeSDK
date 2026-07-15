#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_METHOD_3_45EC3D352790AA75_OFFSET UNITYSDK_OFFSET(0x1A065690)
#define RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_METHOD_3_DFBE4C43E1AB49F6_OFFSET UNITYSDK_OFFSET(0x1A065650)
#define RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A065680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachNishastagaItemToScene_TypeDefinitionIndex = 21332;

	class AttachNishastagaItemToScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ItemGroupID; // 0x18
		::System::UInt32 ItemPropID; // 0x1C
		::System::UInt32 ItemIndex; // 0x20
		::System::UInt32 TargetGroupID; // 0x24
		::System::UInt32 TargetPropID; // 0x28
		::System::String* TargetAttachPointPath; // 0x30
		::System::Boolean Reset; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DFBE4C43E1AB49F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachNishastagaItemToScene*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachNishastagaItemToScene*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_METHOD_3_DFBE4C43E1AB49F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45EC3D352790AA75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachNishastagaItemToScene* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachNishastagaItemToScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHNISHASTAGAITEMTOSCENE_METHOD_3_45EC3D352790AA75_OFFSET))(a1, a2);
		}
	};
}
