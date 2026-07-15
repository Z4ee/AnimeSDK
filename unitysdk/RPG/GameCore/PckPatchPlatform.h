#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PckFileList; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PCKPATCHPLATFORM_METHOD_2_1F2012A705C089EC_OFFSET UNITYSDK_OFFSET(0x1BB14020)
#define RPG_GAMECORE_PCKPATCHPLATFORM_METHOD_2_8EF9B783B4B43DA6_OFFSET UNITYSDK_OFFSET(0x1BB13DB0)
#define RPG_GAMECORE_PCKPATCHPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB14010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckPatchPlatform_TypeDefinitionIndex = 15743;

	class PckPatchPlatform : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* SfxFiles; // 0x10
		::Il2CppArray<::System::String*>* MusicFiles; // 0x18
		::Il2CppArray<::System::String*>* VoFiles; // 0x20
		::Il2CppArray<::System::String*>* CommonFiles; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PckFileList*>* PackFileMap; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHPLATFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8EF9B783B4B43DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PckPatchPlatform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PckPatchPlatform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHPLATFORM_METHOD_2_8EF9B783B4B43DA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1F2012A705C089EC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchPlatform*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchPlatform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHPLATFORM_METHOD_2_1F2012A705C089EC_OFFSET))(a1, a2);
		}
	};
}
