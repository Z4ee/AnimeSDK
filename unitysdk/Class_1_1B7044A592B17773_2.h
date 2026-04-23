#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingSkillRow; }
namespace System { class String; }

#define CLASS_1_1B7044A592B17773_2_GET_ID_OFFSET UNITYSDK_OFFSET(0xAA53670)
#define CLASS_1_1B7044A592B17773_2_METHOD_1_2F2F834C19C446FE_OFFSET UNITYSDK_OFFSET(0xAA53690)
#define CLASS_1_1B7044A592B17773_2_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xAA53760)
#define CLASS_1_1B7044A592B17773_2_METHOD_1_A1EA7A32F3914B21_OFFSET UNITYSDK_OFFSET(0xAA536F0)
#define CLASS_1_1B7044A592B17773_2_SET_ID_OFFSET UNITYSDK_OFFSET(0xAA53680)
#define CLASS_1_1B7044A592B17773_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAA53650)

inline static constexpr unsigned int Class_1_1B7044A592B17773_2_TypeDefinitionIndex = 56673;

class Class_1_1B7044A592B17773_2 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChenLingSkillRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_SET_ID_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingSkillRow* Method_1_2F2F834C19C446FE()
	{
		return ((::RPG::GameCore::ChenLingSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_METHOD_1_2F2F834C19C446FE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_A1EA7A32F3914B21()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_METHOD_1_A1EA7A32F3914B21_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_2_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
