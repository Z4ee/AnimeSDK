#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GOODSCLASS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197D1F20)
#define RPG_GAMECORE_GOODSCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x197D2010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GoodsClass_TypeDefinitionIndex = 12009;

	class GoodsClass : public ::System::Object
	{
	public:
		::System::UInt32 GoodsCnt; // 0x10
		::System::UInt32 GoodsID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOODSCLASS__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GoodsClass*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GoodsClass*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOODSCLASS_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
