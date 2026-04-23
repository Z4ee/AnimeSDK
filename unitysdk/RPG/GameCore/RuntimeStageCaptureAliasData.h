#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA_METHOD_2_459FA1A5F4C842C1_OFFSET UNITYSDK_OFFSET(0x18DDD090)
#define RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDD290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuntimeStageCaptureAliasData_TypeDefinitionIndex = 18189;

	class RuntimeStageCaptureAliasData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* Alias; // 0x18
		::System::Int32 ObjIndex; // 0x20
		::System::Boolean MarkDelete; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_459FA1A5F4C842C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuntimeStageCaptureAliasData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuntimeStageCaptureAliasData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMESTAGECAPTUREALIASDATA_METHOD_2_459FA1A5F4C842C1_OFFSET))(a1, a2);
		}
	};
}
