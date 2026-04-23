#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEPHONEONCHARACTER_METHOD_3_4AB16BBA17C7FCB9_OFFSET UNITYSDK_OFFSET(0x18843F30)
#define RPG_GAMECORE_CREATEPHONEONCHARACTER_METHOD_3_AE5F20A649060CDE_OFFSET UNITYSDK_OFFSET(0x18843FB0)
#define RPG_GAMECORE_CREATEPHONEONCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18843F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePhoneOnCharacter_TypeDefinitionIndex = 19862;

	class CreatePhoneOnCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsDestroy; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupNpcID; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Boolean IsForUI; // 0x30
		::System::String* AttachPoint; // 0x38
		::RPG::MVector3 PositionOffset; // 0x40
		::RPG::MVector3 RotationOffset; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPHONEONCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AB16BBA17C7FCB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePhoneOnCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePhoneOnCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPHONEONCHARACTER_METHOD_3_4AB16BBA17C7FCB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE5F20A649060CDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPHONEONCHARACTER_METHOD_3_AE5F20A649060CDE_OFFSET))(a1, a2);
		}
	};
}
