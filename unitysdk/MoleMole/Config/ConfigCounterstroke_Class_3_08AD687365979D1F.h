#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class ConfigCounterstroke; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1436CE90)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1436CEA0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F_WRITE_OFFSET UNITYSDK_OFFSET(0x1436D1B0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1436D3D0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1436D390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCounterstroke_Class_3_08AD687365979D1F_TypeDefinitionIndex = 62297;

	class ConfigCounterstroke_Class_3_08AD687365979D1F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCounterstroke*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCounterstroke_Class_3_08AD687365979D1F_TypeDefinitionIndex)->GetStaticField(0x36470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCounterstroke_Class_3_08AD687365979D1F_TypeDefinitionIndex)->GetStaticField(0x36478);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::AniamtorParamsSetting*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::AniamtorParamsSetting*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCounterstroke_Class_3_08AD687365979D1F_TypeDefinitionIndex)->GetStaticField(0x36480);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCounterstroke*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCounterstroke*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCounterstroke*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCounterstroke*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_CLASS_3_08AD687365979D1F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
