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

#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF2410)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF2420)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF2750)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF2990)
#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF2950)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SetGroupMemberTransformCfg_Class_3_1D758DA9751B59E2_TypeDefinitionIndex = 62382;

	class SetGroupMemberTransformCfg_Class_3_1D758DA9751B59E2 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SetGroupMemberTransformCfg_Class_3_1D758DA9751B59E2_TypeDefinitionIndex)->GetStaticField(0x48DA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SetGroupMemberTransformCfg_Class_3_1D758DA9751B59E2_TypeDefinitionIndex)->GetStaticField(0x48DA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::SetGroupMemberTransformCfg*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::SetGroupMemberTransformCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::SetGroupMemberTransformCfg*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SetGroupMemberTransformCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG_CLASS_3_1D758DA9751B59E2_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
