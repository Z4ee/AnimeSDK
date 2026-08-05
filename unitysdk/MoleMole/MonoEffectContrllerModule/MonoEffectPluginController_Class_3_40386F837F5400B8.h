#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x191A50E0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x191A50F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8_WRITE_OFFSET UNITYSDK_OFFSET(0x191A51C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x191A52B0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8__CTOR_OFFSET UNITYSDK_OFFSET(0x191A5270)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int MonoEffectPluginController_Class_3_40386F837F5400B8_TypeDefinitionIndex = 45305;

	class MonoEffectPluginController_Class_3_40386F837F5400B8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::MonoEffectContrllerModule::SetupModule>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::MonoEffectContrllerModule::SetupModule>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginController_Class_3_40386F837F5400B8_TypeDefinitionIndex)->GetStaticField(0x48E50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_MONOEFFECTPLUGINCONTROLLER_CLASS_3_40386F837F5400B8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
