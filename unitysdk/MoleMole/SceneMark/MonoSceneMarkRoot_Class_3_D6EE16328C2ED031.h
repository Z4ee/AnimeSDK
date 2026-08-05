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

#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136EB550)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136EB560)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031_WRITE_OFFSET UNITYSDK_OFFSET(0x136EB7B0)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031__CCTOR_OFFSET UNITYSDK_OFFSET(0x136EB970)
#define MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031__CTOR_OFFSET UNITYSDK_OFFSET(0x136EB930)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int MonoSceneMarkRoot_Class_3_D6EE16328C2ED031_TypeDefinitionIndex = 53733;

	class MonoSceneMarkRoot_Class_3_D6EE16328C2ED031 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SceneMark::MonoSceneMarkRoot*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::SceneMark::SceneMarkNode*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::SceneMark::SceneMarkNode*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_Class_3_D6EE16328C2ED031_TypeDefinitionIndex)->GetStaticField(0x4D800);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::SceneMark::SceneMarkNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_Class_3_D6EE16328C2ED031_TypeDefinitionIndex)->GetStaticField(0x4D808);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::SceneMark::SceneMarkNode*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMarkRoot_Class_3_D6EE16328C2ED031_TypeDefinitionIndex)->GetStaticField(0x4D810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SceneMark::MonoSceneMarkRoot*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SceneMark::MonoSceneMarkRoot*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::MonoSceneMarkRoot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_MONOSCENEMARKROOT_CLASS_3_D6EE16328C2ED031_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
