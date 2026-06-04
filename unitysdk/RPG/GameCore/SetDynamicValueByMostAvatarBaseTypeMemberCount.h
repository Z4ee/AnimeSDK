#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C42880)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_METHOD_4_012B74C35A422E83_OFFSET UNITYSDK_OFFSET(0x19C42800)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_METHOD_4_BCF2CB6165DC4B5B_OFFSET UNITYSDK_OFFSET(0x19C3CBD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3CB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMostAvatarBaseTypeMemberCount_TypeDefinitionIndex = 22305;

	class SetDynamicValueByMostAvatarBaseTypeMemberCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_012B74C35A422E83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_METHOD_4_012B74C35A422E83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BCF2CB6165DC4B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_METHOD_4_BCF2CB6165DC4B5B_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
