#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RecordRefreshType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECORDREFRESHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB7CB30)
#define RPG_GAMECORE_RECORDREFRESHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7D1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordRefreshRow_TypeDefinitionIndex = 14275;

	class RecordRefreshRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RefreshTime; // 0x10
		::RPG::GameCore::RecordRefreshType RefreshType; // 0x18
		::System::Boolean IsInteract; // 0x1C
		::System::UInt32 RefreshID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordRefreshRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordRefreshRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
