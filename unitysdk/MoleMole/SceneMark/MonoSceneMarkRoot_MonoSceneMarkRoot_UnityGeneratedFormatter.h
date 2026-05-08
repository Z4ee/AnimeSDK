#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::SceneMark { class MonoSceneMarkRoot; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1386A400)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1386A410)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1386A6B0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1386A8A0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1386A860)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int MonoSceneMarkRoot_MonoSceneMarkRoot_UnityGeneratedFormatter_TypeDefinitionIndex = 62755;

	class MonoSceneMarkRoot_MonoSceneMarkRoot_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SceneMark::MonoSceneMarkRoot*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::SceneMark::SceneMarkNode*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::SceneMark::SceneMarkNode*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_MonoSceneMarkRoot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40560);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_MonoSceneMarkRoot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40568);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_MonoSceneMarkRoot_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SceneMark::MonoSceneMarkRoot*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SceneMark::MonoSceneMarkRoot*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_MONOSCENEMARKROOT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
