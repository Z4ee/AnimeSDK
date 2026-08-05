#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149FD4A0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149FD4B0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7_WRITE_OFFSET UNITYSDK_OFFSET(0x149FD4C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD4D0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int SetupModule_Class_3_08B28BED7AE3D0A7_TypeDefinitionIndex = 64247;

	class SetupModule_Class_3_08B28BED7AE3D0A7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectContrllerModule::SetupModule>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectContrllerModule::SetupModule& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::SetupModule&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectContrllerModule::SetupModule& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::SetupModule&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_SETUPMODULE_CLASS_3_08B28BED7AE3D0A7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
