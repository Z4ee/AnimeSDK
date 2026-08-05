#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCPERFORMANCESCORETABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x12D3A630)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_DESERIALIZEFROMFILE_OFFSET UNITYSDK_OFFSET(0x12D3B590)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D3AD30)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_GETSCORE_OFFSET UNITYSDK_OFFSET(0x12D3A690)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x12D3A0E0)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_LOADFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D3A0F0)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_SERIALIZETOFILE_OFFSET UNITYSDK_OFFSET(0x12D3B350)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D3A7E0)
#define NPCCROWD_NPCPERFORMANCESCORETABLE_TRYGETSCORE_OFFSET UNITYSDK_OFFSET(0x12D3A730)
#define NPCCROWD_NPCPERFORMANCESCORETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D3B740)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceScoreTable_TypeDefinitionIndex = 84261;

	class NPCPerformanceScoreTable : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _scores; // 0x10
		::Il2CppArray<::System::Int32>* _voIds; // 0x18
		::System::Int32 _count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_GET_COUNT_OFFSET))(this);
		}

		::System::Void LoadFromBinary(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_LOADFROMBINARY_OFFSET))(this, data);
		}

		::System::Single GetScore(::System::Int32 voId)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_GETSCORE_OFFSET))(this, voId);
		}

		::System::Boolean TryGetScore(::System::Int32 voId, ::System::Single& score)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_TRYGETSCORE_OFFSET))(this, voId, score);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_CLEAR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* Serialize(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* voIdToScore)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_SERIALIZE_OFFSET))(voIdToScore);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Deserialize(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_DESERIALIZE_OFFSET))(data);
		}

		static ::System::Int32 SerializeToFile(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* voIdToScore, ::System::String* filePath)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_SERIALIZETOFILE_OFFSET))(voIdToScore, filePath);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* DeserializeFromFile(::System::String* filePath)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE_DESERIALIZEFROMFILE_OFFSET))(filePath);
		}
	};
}
