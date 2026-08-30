#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCERECALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D31C0B0)
#define RPG_GAMECORE_PERFORMANCERECALLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31D9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallRow_TypeDefinitionIndex = 14228;

	class PerformanceRecallRow : public ::System::Object
	{
	public:
		::System::String* ImgPathWall; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x18
		::System::String* ImgPathWall_F; // 0x20
		::System::String* ImgPath; // 0x28
		::System::String* ImgPath_F; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 ImgHeightSize; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 PerformanceID; // 0x50
		::System::UInt32 SubCategoryID; // 0x54
		::System::UInt32 CategoryID; // 0x58
		::System::UInt32 WorldID; // 0x5C
		::System::Boolean ShowInPlayerRoom; // 0x60
		::System::Boolean isVideo; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRecallRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRecallRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
