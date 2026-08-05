#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_ExecuteGlobal; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B6460)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B6470)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B6600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B6760)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B6720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ExecuteGlobal_Class_3_2D7AA3C76A3D91FC_TypeDefinitionIndex = 41704;

	class ConfigSoundAction_ExecuteGlobal_Class_3_2D7AA3C76A3D91FC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_ExecuteGlobal_Class_3_2D7AA3C76A3D91FC_TypeDefinitionIndex)->GetStaticField(0x3C900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CLASS_3_2D7AA3C76A3D91FC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
