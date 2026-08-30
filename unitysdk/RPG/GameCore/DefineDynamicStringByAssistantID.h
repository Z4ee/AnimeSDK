#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_METHOD_3_49CF5D5453E630BE_OFFSET UNITYSDK_OFFSET(0x1D8151F0)
#define RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_METHOD_3_7CB3375162D174AF_OFFSET UNITYSDK_OFFSET(0x1D815230)
#define RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D815220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefineDynamicStringByAssistantID_TypeDefinitionIndex = 20646;

	class DefineDynamicStringByAssistantID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicStringKey; // 0x18
		::RPG::GameCore::DynamicFloat* AssistantID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49CF5D5453E630BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineDynamicStringByAssistantID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineDynamicStringByAssistantID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_METHOD_3_49CF5D5453E630BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7CB3375162D174AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineDynamicStringByAssistantID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineDynamicStringByAssistantID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRINGBYASSISTANTID_METHOD_3_7CB3375162D174AF_OFFSET))(a1, a2);
		}
	};
}
