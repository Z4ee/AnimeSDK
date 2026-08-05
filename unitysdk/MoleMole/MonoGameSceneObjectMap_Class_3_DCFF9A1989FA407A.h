#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoGameSceneObjectMap; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11D4C7B0)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11D4C7C0)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A_WRITE_OFFSET UNITYSDK_OFFSET(0x11D4C950)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D4CAB0)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4CA70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGameSceneObjectMap_Class_3_DCFF9A1989FA407A_TypeDefinitionIndex = 90380;

	class MonoGameSceneObjectMap_Class_3_DCFF9A1989FA407A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoGameSceneObjectMap*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGameSceneObjectMap_Class_3_DCFF9A1989FA407A_TypeDefinitionIndex)->GetStaticField(0x4FE10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGameSceneObjectMap_Class_3_DCFF9A1989FA407A_TypeDefinitionIndex)->GetStaticField(0x4FE18);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoGameSceneObjectMap*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGameSceneObjectMap*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoGameSceneObjectMap*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGameSceneObjectMap*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_CLASS_3_DCFF9A1989FA407A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
