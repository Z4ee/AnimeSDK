#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x181DE6D0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x181DE6E0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x181DEAE0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181DED80)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x181DED40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex = 69693;

	class ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ScenePeformAnimatorParam*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x486F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x486F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48708);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_ScenePeformAnimatorParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ScenePeformAnimatorParam*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScenePeformAnimatorParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ScenePeformAnimatorParam*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePeformAnimatorParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_SCENEPEFORMANIMATORPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
