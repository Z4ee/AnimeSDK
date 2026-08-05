#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectSelfAttachPoint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149FD600)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149FD610)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D_WRITE_OFFSET UNITYSDK_OFFSET(0x149FD6E0)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D__CCTOR_OFFSET UNITYSDK_OFFSET(0x149FD7D0)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD790)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSelfAttachPoint_Class_3_3661F94245F3268D_TypeDefinitionIndex = 45155;

	class MonoEffectSelfAttachPoint_Class_3_3661F94245F3268D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectSelfAttachPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectSelfAttachPoint_Class_3_3661F94245F3268D_TypeDefinitionIndex)->GetStaticField(0x327C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectSelfAttachPoint*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectSelfAttachPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectSelfAttachPoint*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectSelfAttachPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_3661F94245F3268D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
