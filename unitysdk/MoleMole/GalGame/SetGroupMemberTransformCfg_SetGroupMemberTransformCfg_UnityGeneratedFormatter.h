#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::GalGame { class SetGroupMemberTransformCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B33E20)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B33E30)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18B341B0)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B34430)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B343F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SetGroupMemberTransformCfg_SetGroupMemberTransformCfg_UnityGeneratedFormatter_TypeDefinitionIndex = 40599;

	class SetGroupMemberTransformCfg_SetGroupMemberTransformCfg_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SetGroupMemberTransformCfg_SetGroupMemberTransformCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39DD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SetGroupMemberTransformCfg_SetGroupMemberTransformCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x39DD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::SetGroupMemberTransformCfg*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::SetGroupMemberTransformCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::SetGroupMemberTransformCfg*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SetGroupMemberTransformCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_SETGROUPMEMBERTRANSFORMCFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
