#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCERECALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1749AAD0)
#define RPG_GAMECORE_PERFORMANCERECALLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1749C1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallRow_TypeDefinitionIndex = 13131;

	class PerformanceRecallRow : public ::System::Object
	{
	public:
		::System::String* ImgPath_F; // 0x10
		::System::String* ImgPathWall; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x20
		::System::String* ImgPath; // 0x28
		::System::String* ImgPathWall_F; // 0x30
		::System::UInt32 SubCategoryID; // 0x38
		::System::UInt32 ImgHeightSize; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::System::Boolean isVideo; // 0x50
		::System::UInt32 PerformanceID; // 0x54
		::System::UInt32 CategoryID; // 0x58
		::System::UInt32 ID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceRecallRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRecallRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
