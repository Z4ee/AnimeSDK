#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphStateGlobalConfig; }
namespace NPCCrowd::AI { class PathStateAssetSO; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xEBC2050)
#define NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xEBC2060)
#define NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xEBC23C0)
#define NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBC2610)
#define NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC25D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathStateAssetSO_PathStateAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex = 84577;

	class PathStateAssetSO_PathStateAssetSO_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::AI::PathStateAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_PathStateAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A950);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_PathStateAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A958);
		}
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::AI::PathGraphStateGlobalConfig*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::AI::PathGraphStateGlobalConfig*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_PathStateAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_PathStateAssetSO_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3A968);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::PathStateAssetSO*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathStateAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::NPCCrowd::AI::PathStateAssetSO*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathStateAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_PATHSTATEASSETSO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
