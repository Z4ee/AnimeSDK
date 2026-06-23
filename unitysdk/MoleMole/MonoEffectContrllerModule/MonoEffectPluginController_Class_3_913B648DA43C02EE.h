#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1418F770)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1418F780)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE_WRITE_OFFSET UNITYSDK_OFFSET(0x1418F8B0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1418F9F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1418F9B0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int MonoEffectPluginController_Class_3_913B648DA43C02EE_TypeDefinitionIndex = 53027;

	class MonoEffectPluginController_Class_3_913B648DA43C02EE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MonoEffectContrllerModule::SetupModule>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MonoEffectContrllerModule::SetupModule>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginController_Class_3_913B648DA43C02EE_TypeDefinitionIndex)->GetStaticField(0x485D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_913B648DA43C02EE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
