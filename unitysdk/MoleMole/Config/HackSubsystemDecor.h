#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BB510)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172BB460)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x172BB350)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0x172BB5A0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x172BB340)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_AC579A30E4B62C46_OFFSET UNITYSDK_OFFSET(0x172BB610)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x172BB450)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_CBD895A8E277EEB3_OFFSET UNITYSDK_OFFSET(0x172BB770)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x172BB4E0)
#define MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x172BB600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackSubsystemDecor_TypeDefinitionIndex = 85176;

	class HackSubsystemDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::HackSubsystemDecor* Method_2_AC579A30E4B62C46(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::HackSubsystemDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_AC579A30E4B62C46_OFFSET))(a1);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::HackSubsystemDecor* Method_2_CBD895A8E277EEB3(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::HackSubsystemDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_CBD895A8E277EEB3_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKSUBSYSTEMDECOR_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
	};
}
