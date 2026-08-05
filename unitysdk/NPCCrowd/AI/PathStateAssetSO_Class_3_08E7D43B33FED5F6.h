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

#define NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11926940)
#define NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11926950)
#define NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6_WRITE_OFFSET UNITYSDK_OFFSET(0x11926C60)
#define NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x11926E70)
#define NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6__CTOR_OFFSET UNITYSDK_OFFSET(0x11926E30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathStateAssetSO_Class_3_08E7D43B33FED5F6_TypeDefinitionIndex = 81246;

	class PathStateAssetSO_Class_3_08E7D43B33FED5F6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NPCCrowd::AI::PathStateAssetSO*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_Class_3_08E7D43B33FED5F6_TypeDefinitionIndex)->GetStaticField(0x45520);
		}
		static ::Sirenix::Serialization::Serializer_1<::NPCCrowd::AI::PathGraphStateGlobalConfig*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::NPCCrowd::AI::PathGraphStateGlobalConfig*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_Class_3_08E7D43B33FED5F6_TypeDefinitionIndex)->GetStaticField(0x45528);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_Class_3_08E7D43B33FED5F6_TypeDefinitionIndex)->GetStaticField(0x45530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*>**)Il2CppClass::FromTypeDefinitionIndex(PathStateAssetSO_Class_3_08E7D43B33FED5F6_TypeDefinitionIndex)->GetStaticField(0x45538);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::NPCCrowd::AI::PathStateAssetSO*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathStateAssetSO*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::NPCCrowd::AI::PathStateAssetSO*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathStateAssetSO*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSTATEASSETSO_CLASS_3_08E7D43B33FED5F6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
