#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }

#define MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E1AD0)
#define MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E1EF0)
#define MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E1B30)
#define MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E1F70)
#define MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E29A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectAutoDynamicValue_TypeDefinitionIndex = 88815;

	class EffectAutoDynamicValue : public ::System::Object
	{
	public:
		::MoleMole::Config::DynamicFloat* EffHoldTime; // 0x10
		::MoleMole::Config::DynamicFloat* EffFadeOutTime; // 0x18
		::MoleMole::Config::DynamicInt* EffectTarget; // 0x20
		::MoleMole::Config::DynamicFloat* EffFadeInTime; // 0x28
		::MoleMole::Config::DynamicFloat* EffStartSizeY; // 0x30
		::MoleMole::Config::DynamicFloat* EffStartSizeX; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE__CTOR_OFFSET))(this);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTAUTODYNAMICVALUE_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
