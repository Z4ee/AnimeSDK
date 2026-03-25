#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HPSharedGroupPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C1F10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_METHOD_4_59071DADB7721540_OFFSET UNITYSDK_OFFSET(0x176C1E90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_METHOD_4_E703BA93BF8D05D4_OFFSET UNITYSDK_OFFSET(0x176BC610)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x176BC5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPSharedGroup_TypeDefinitionIndex = 21838;

	class SetDynamicValueByHPSharedGroup : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::HPSharedGroupPropertyType Property; // 0x24
		::RPG::GameCore::TargetEvaluator* AnyTargetInThisGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_59071DADB7721540(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_METHOD_4_59071DADB7721540_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E703BA93BF8D05D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_METHOD_4_E703BA93BF8D05D4_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPSHAREDGROUP_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
