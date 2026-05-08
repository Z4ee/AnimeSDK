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

#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x170E3520)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71_READMEMBER_OFFSET UNITYSDK_OFFSET(0x170E3530)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71_WRITE_OFFSET UNITYSDK_OFFSET(0x170E3660)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71__CCTOR_OFFSET UNITYSDK_OFFSET(0x170E37A0)
#define MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71__CTOR_OFFSET UNITYSDK_OFFSET(0x170E3760)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectSelfAttachPoint_Class_3_FA7307B4868A1D71_TypeDefinitionIndex = 73886;

	class MonoEffectSelfAttachPoint_Class_3_FA7307B4868A1D71 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoEffectSelfAttachPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectSelfAttachPoint_Class_3_FA7307B4868A1D71_TypeDefinitionIndex)->GetStaticField(0x49570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectSelfAttachPoint*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectSelfAttachPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoEffectSelfAttachPoint*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectSelfAttachPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTSELFATTACHPOINT_CLASS_3_FA7307B4868A1D71_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
