#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_PCKFILELIST_METHOD_2_9D9649DD36BC0A05_OFFSET UNITYSDK_OFFSET(0x1D310B90)
#define RPG_GAMECORE_PCKFILELIST_METHOD_2_EB3AD391AB11E254_OFFSET UNITYSDK_OFFSET(0x1D310A90)
#define RPG_GAMECORE_PCKFILELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D310B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckFileList_TypeDefinitionIndex = 16221;

	class PckFileList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PackFileList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EB3AD391AB11E254(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PckFileList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PckFileList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST_METHOD_2_EB3AD391AB11E254_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9D9649DD36BC0A05(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckFileList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckFileList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKFILELIST_METHOD_2_9D9649DD36BC0A05_OFFSET))(a1, a2);
		}
	};
}
