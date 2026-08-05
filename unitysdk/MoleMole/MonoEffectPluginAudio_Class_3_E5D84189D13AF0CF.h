#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginAudio; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1384CF60)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1384CF70)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF_WRITE_OFFSET UNITYSDK_OFFSET(0x1384D280)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1384D4A0)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1384D460)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAudio_Class_3_E5D84189D13AF0CF_TypeDefinitionIndex = 67142;

	class MonoEffectPluginAudio_Class_3_E5D84189D13AF0CF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectPluginAudio*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAudio_Class_3_E5D84189D13AF0CF_TypeDefinitionIndex)->GetStaticField(0x3FA10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginAudio*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginAudio*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginAudio*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginAudio*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_CLASS_3_E5D84189D13AF0CF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
