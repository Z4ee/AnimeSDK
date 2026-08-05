#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134FCCF0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134FC690)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x134FCD50)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x134FC710)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x134FD090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitInhalationEffect_TypeDefinitionIndex = 87075;

	class ConfigHitInhalationEffect : public ::System::Object
	{
	public:
		::System::Single TargetHeight; // 0x10
		::System::Boolean ApplyAttackerFaceDir; // 0x14
		::System::Boolean UseInhalation; // 0x15
		::System::Single MaxInhalationDistance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
