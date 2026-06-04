#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/System/Object.h"

class Class_1_0F724F8EDC601A3C;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198A6350)
#define RPG_GAMECORE_LOADINGDESCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198A6D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescRow_TypeDefinitionIndex = 13314;

	class LoadingDescRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* LockParamForOr; // 0x10
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* ForceParamForOr; // 0x18
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* ForceParam; // 0x20
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* UnlockParamForOr; // 0x28
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* LockParam; // 0x30
		::Il2CppArray<::Class_1_0F724F8EDC601A3C*>* UnlockParam; // 0x38
		::System::UInt32 ImageID; // 0x40
		::System::UInt32 Weight; // 0x44
		::System::UInt32 MaxLevel; // 0x48
		::RPG::GameCore::LoadingDescGroup Group; // 0x4C
		::System::UInt32 MinWorldLevel; // 0x50
		::RPG::Client::TextID DescTextmapID; // 0x58
		::System::UInt32 ID; // 0x68
		::System::UInt32 MinLevel; // 0x6C
		::RPG::Client::TextID TitleTextmapID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadingDescRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingDescRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
