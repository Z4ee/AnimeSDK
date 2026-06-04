#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199F5AC0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199F67C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallCategoryRow_TypeDefinitionIndex = 13665;

	class PerformanceRecallCategoryRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Category; // 0x18
		::System::Boolean isSubCategory; // 0x28
		::System::UInt32 CategoryID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRecallCategoryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRecallCategoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
