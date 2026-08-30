#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingDescGroup.h"
#include "unitysdk/RPG/GameCore/LoadingFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOADINGFUNCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D20B110)
#define RPG_GAMECORE_LOADINGFUNCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20B320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingFuncConfigRow_TypeDefinitionIndex = 13878;

	class LoadingFuncConfigRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LoadingDescGroup, ::System::UInt32>* LoadingRandomParam; // 0x10
		::Il2CppArray<::System::UInt32>* LoadingFuncTypeParam; // 0x18
		::System::UInt32 RandomNumber; // 0x20
		::RPG::GameCore::LoadingFuncType LoadingFuncType; // 0x24
		::System::UInt32 LoadingFuncID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGFUNCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadingFuncConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadingFuncConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGFUNCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
