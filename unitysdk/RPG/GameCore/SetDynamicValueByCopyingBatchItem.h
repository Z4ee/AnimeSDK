#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM_METHOD_2_23962C9CB970A44B_OFFSET UNITYSDK_OFFSET(0x1C2E08C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E09F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCopyingBatchItem_TypeDefinitionIndex = 22972;

	class SetDynamicValueByCopyingBatchItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FromDynamicKey; // 0x10
		::System::String* ToDynamicKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23962C9CB970A44B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCopyingBatchItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCopyingBatchItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM_METHOD_2_23962C9CB970A44B_OFFSET))(a1, a2);
		}
	};
}
