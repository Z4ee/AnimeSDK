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

#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15B6E710)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15B6E720)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D_WRITE_OFFSET UNITYSDK_OFFSET(0x15B6EA30)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B6EC50)
#define NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6EC10)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorConfigAssetSO_Class_3_96FE0BA5F62DDE6D_TypeDefinitionIndex = 45453;

	class AttractorConfigAssetSO_Class_3_96FE0BA5F62DDE6D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::AI::AttractorConfigAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorTemplate*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_Class_3_96FE0BA5F62DDE6D_TypeDefinitionIndex)->GetStaticField(0x4DB80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorClusterConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_Class_3_96FE0BA5F62DDE6D_TypeDefinitionIndex)->GetStaticField(0x4DB88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorInstance*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_Class_3_96FE0BA5F62DDE6D_TypeDefinitionIndex)->GetStaticField(0x4DB90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorLinkConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttractorConfigAssetSO_Class_3_96FE0BA5F62DDE6D_TypeDefinitionIndex)->GetStaticField(0x4DB98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::AttractorConfigAssetSO*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::AttractorConfigAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NPCCrowd::AI::AttractorConfigAssetSO*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorConfigAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORCONFIGASSETSO_CLASS_3_96FE0BA5F62DDE6D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
