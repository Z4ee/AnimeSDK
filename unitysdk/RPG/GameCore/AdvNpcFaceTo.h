#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EWaitFaceToTaskFinishMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ADVNPCFACETO_METHOD_3_61A32E4441B12701_OFFSET UNITYSDK_OFFSET(0x1D6BE9C0)
#define RPG_GAMECORE_ADVNPCFACETO_METHOD_3_D533B012BBFECA4F_OFFSET UNITYSDK_OFFSET(0x1D6BE970)
#define RPG_GAMECORE_ADVNPCFACETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BE9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcFaceTo_TypeDefinitionIndex = 20101;

	class AdvNpcFaceTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* AreaNameDS; // 0x30
		::RPG::GameCore::DynamicString* AnchorNameDS; // 0x38
		::RPG::MVector3 TargetPosition; // 0x40
		::System::Single Duration; // 0x4C
		::System::Boolean SteerImmediately; // 0x50
		::System::Boolean FinishImmadiate; // 0x51
		::RPG::GameCore::EWaitFaceToTaskFinishMode WaitFinishMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D533B012BBFECA4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFaceTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFaceTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETO_METHOD_3_D533B012BBFECA4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61A32E4441B12701(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFaceTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFaceTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFACETO_METHOD_3_61A32E4441B12701_OFFSET))(a1, a2);
		}
	};
}
