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

#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172BD5E0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172BD5F0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4_WRITE_OFFSET UNITYSDK_OFFSET(0x172BD9A0)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BDC10)
#define MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4__CTOR_OFFSET UNITYSDK_OFFSET(0x172BDBD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4_TypeDefinitionIndex = 46887;

	class ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ScenePeformAnimatorParam*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4_TypeDefinitionIndex)->GetStaticField(0x3F6F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4_TypeDefinitionIndex)->GetStaticField(0x3F6F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4_TypeDefinitionIndex)->GetStaticField(0x3F700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4_TypeDefinitionIndex)->GetStaticField(0x3F708);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePeformAnimatorParam_Class_3_D38F2A850AF30BA4_TypeDefinitionIndex)->GetStaticField(0x3F710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ScenePeformAnimatorParam*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScenePeformAnimatorParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ScenePeformAnimatorParam*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePeformAnimatorParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPEFORMANIMATORPARAM_CLASS_3_D38F2A850AF30BA4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
