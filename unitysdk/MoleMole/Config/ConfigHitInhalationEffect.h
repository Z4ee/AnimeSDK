#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12716BE0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12716550)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12716C40)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x127165D0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12716F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitInhalationEffect_TypeDefinitionIndex = 64714;

	class ConfigHitInhalationEffect : public ::System::Object
	{
	public:
		::System::Single MaxInhalationDistance; // 0x10
		::System::Boolean UseInhalation; // 0x14
		::System::Boolean ApplyAttackerFaceDir; // 0x15
		::System::Single TargetHeight; // 0x18

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
