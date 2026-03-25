#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PCKFILELIST_METHOD_2_8FFFB367162E3E69_OFFSET UNITYSDK_OFFSET(0x1748F970)
#define RPG_GAMECORE_PCKFILELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1748FA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckFileList_TypeDefinitionIndex = 15006;

	class PckFileList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PackFileList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8FFFB367162E3E69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PckFileList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PckFileList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST_METHOD_2_8FFFB367162E3E69_OFFSET))(a1, a2);
		}
	};
}
