#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::AI { class AttractorClusterConfig; }
namespace NPCCrowd::AI { class AttractorConfigAssetSO; }
namespace NPCCrowd::AI { class AttractorInstance; }
namespace NPCCrowd::AI { class AttractorLinkConfig; }
namespace NPCCrowd::AI { class AttractorTemplate; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xD2268A0)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xD2268B0)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xD226C10)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD226E60)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD226E20)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorConfigAssetSO_AttractorConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex = 53701;

	class AttractorConfigAssetSO_AttractorConfigAssetSO_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::AI::AttractorConfigAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_AttractorConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3D0B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_AttractorConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3D0B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_AttractorConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3D0C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_AttractorConfigAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3D0C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::AttractorConfigAssetSO*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AttractorConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NPCCrowd::AI::AttractorConfigAssetSO*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_ATTRACTORCONFIGASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
