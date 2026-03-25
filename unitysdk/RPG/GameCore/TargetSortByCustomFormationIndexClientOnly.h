#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_2AAC9B45CD6D0201_OFFSET UNITYSDK_OFFSET(0x177D3170)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_951E33194107454D_OFFSET UNITYSDK_OFFSET(0x177D1330)
#define RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x177D1310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByCustomFormationIndexClientOnly_TypeDefinitionIndex = 22259;

	class TargetSortByCustomFormationIndexClientOnly : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* CustomFormationName; // 0x10
		::Il2CppArray<::System::UInt32>* SortIndexList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AAC9B45CD6D0201(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_2AAC9B45CD6D0201_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_951E33194107454D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYCUSTOMFORMATIONINDEXCLIENTONLY_METHOD_3_951E33194107454D_OFFSET))(a1, a2);
		}
	};
}
