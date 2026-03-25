#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OFFLINECULLINGINDEX_METHOD_2_538B1F6B67BE399B_OFFSET UNITYSDK_OFFSET(0x1747A830)
#define RPG_GAMECORE_OFFLINECULLINGINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1747AC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineCullingIndex_TypeDefinitionIndex = 17580;

	class OfflineCullingIndex : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Is3DIndex; // 0x10
		::System::Int32 VolumeIndex; // 0x14
		::System::Int32 Priority; // 0x18
		::System::Int64 DataIndex; // 0x20
		::RPG::MVector3 CullingRangeCenter; // 0x28
		::RPG::MVector3 CullingRangeSize; // 0x34
		::System::String* CullingDataPath; // 0x40
		::System::Int64 CullingVFSIndex; // 0x48
		::Il2CppArray<::System::Int64>* ChildDataIndex; // 0x50
		::Il2CppArray<::RPG::MVector3>* ChildDataCenter; // 0x58
		::Il2CppArray<::RPG::MVector3>* ChildDataSize; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_538B1F6B67BE399B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OfflineCullingIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfflineCullingIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGINDEX_METHOD_2_538B1F6B67BE399B_OFFSET))(a1, a2);
		}
	};
}
