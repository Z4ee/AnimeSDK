#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHAREDSERIALIZATIONDATAIDXLIST_METHOD_2_D87F96ED570F6182_OFFSET UNITYSDK_OFFSET(0x18E51B40)
#define RPG_GAMECORE_SHAREDSERIALIZATIONDATAIDXLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18E51C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedSerializationDataIdxList_TypeDefinitionIndex = 18132;

	class SharedSerializationDataIdxList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* IndexList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSERIALIZATIONDATAIDXLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D87F96ED570F6182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedSerializationDataIdxList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedSerializationDataIdxList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSERIALIZATIONDATAIDXLIST_METHOD_2_D87F96ED570F6182_OFFSET))(a1, a2);
		}
	};
}
