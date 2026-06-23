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

#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E93230)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E93240)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E93420)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E935C0)
#define MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E93580)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGameSceneObjectMap_MonoGameSceneObjectMap_UnityGeneratedFormatter_TypeDefinitionIndex = 56179;

	class MonoGameSceneObjectMap_MonoGameSceneObjectMap_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoGameSceneObjectMap*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGameSceneObjectMap_MonoGameSceneObjectMap_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44EA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Animator*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoGameSceneObjectMap_MonoGameSceneObjectMap_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44EA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoGameSceneObjectMap*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGameSceneObjectMap*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoGameSceneObjectMap*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGameSceneObjectMap*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMESCENEOBJECTMAP_MONOGAMESCENEOBJECTMAP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
