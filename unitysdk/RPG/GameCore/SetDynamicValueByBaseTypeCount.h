#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C0570)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_METHOD_4_92B3DB5CEC1DCA23_OFFSET UNITYSDK_OFFSET(0x176B7AE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_METHOD_4_F6D4F2B6B61BBC8B_OFFSET UNITYSDK_OFFSET(0x176C04F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x176B7A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBaseTypeCount_TypeDefinitionIndex = 21824;

	class SetDynamicValueByBaseTypeCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F6D4F2B6B61BBC8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_METHOD_4_F6D4F2B6B61BBC8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92B3DB5CEC1DCA23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_METHOD_4_92B3DB5CEC1DCA23_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
