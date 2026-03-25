#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF9AFA361B92221;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuManagerConfig; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }

#define CLASS_1_FA650FF6E6D7727B_METHOD_1_5865D5D8700319FC_OFFSET UNITYSDK_OFFSET(0x167CDE20)
#define CLASS_1_FA650FF6E6D7727B_METHOD_1_A0343326C82B0D03_OFFSET UNITYSDK_OFFSET(0x167CDF40)
#define CLASS_1_FA650FF6E6D7727B_METHOD_1_A1E1A38E5364276C_OFFSET UNITYSDK_OFFSET(0x167CDFF0)
#define CLASS_1_FA650FF6E6D7727B__CTOR_OFFSET UNITYSDK_OFFSET(0x167CE090)

inline static constexpr unsigned int Class_1_FA650FF6E6D7727B_TypeDefinitionIndex = 33436;

class Class_1_FA650FF6E6D7727B : public ::System::Object
{
public:
	::Class_1_4CF9AFA361B92221* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimDanmuManagerConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA650FF6E6D7727B__CTOR_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* Method_1_5865D5D8700319FC(::System::UInt32 a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA650FF6E6D7727B_METHOD_1_5865D5D8700319FC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimDanmuTrack* Method_1_A1E1A38E5364276C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FiveDimDanmuTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA650FF6E6D7727B_METHOD_1_A1E1A38E5364276C_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_A0343326C82B0D03(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA650FF6E6D7727B_METHOD_1_A0343326C82B0D03_OFFSET))(this, a1);
	}
};
