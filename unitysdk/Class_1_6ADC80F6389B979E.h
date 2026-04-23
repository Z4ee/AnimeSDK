#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class OnEventCallBack; }

#define CLASS_1_6ADC80F6389B979E_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x9A20B80)
#define CLASS_1_6ADC80F6389B979E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9A20BE0)
#define CLASS_1_6ADC80F6389B979E_METHOD_1_9B8E5DC06BFA4147_OFFSET UNITYSDK_OFFSET(0x9A20A80)
#define CLASS_1_6ADC80F6389B979E__CTOR_OFFSET UNITYSDK_OFFSET(0x9A20B70)

inline static constexpr unsigned int Class_1_6ADC80F6389B979E_TypeDefinitionIndex = 62917;

class Class_1_6ADC80F6389B979E : public ::System::Object
{
public:
	::RPG::GameCore::OnEventCallBack* Field_1_2; // 0x10
	::RPG::GameCore::EventManager* Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::RPG::GameCore::EventType Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ADC80F6389B979E__CTOR_OFFSET))(this);
	}

	static ::Class_1_6ADC80F6389B979E* Method_1_9B8E5DC06BFA4147(::RPG::GameCore::EventType a1, ::System::UInt32 a2, ::RPG::GameCore::OnEventCallBack* a3, ::RPG::GameCore::EventManager* a4)
	{
		return ((::Class_1_6ADC80F6389B979E*(*)(::RPG::GameCore::EventType, ::System::UInt32, ::RPG::GameCore::OnEventCallBack*, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + CLASS_1_6ADC80F6389B979E_METHOD_1_9B8E5DC06BFA4147_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ADC80F6389B979E_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ADC80F6389B979E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
