#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E81BC30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_METHOD_4_081408ADB076708B_OFFSET UNITYSDK_OFFSET(0x1E81B950)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_METHOD_4_90CADB2D5538FE09_OFFSET UNITYSDK_OFFSET(0x1E81B8F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81B930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCountOfBaseType_TypeDefinitionIndex = 23320;

	class SetDynamicValueByCountOfBaseType : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x30
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x38
		::RPG::GameCore::TargetEvaluator* BaseTypeSourceTarget; // 0x40
		::RPG::GameCore::AvatarBaseTypeKind SourceBaseTypeKind; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90CADB2D5538FE09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_METHOD_4_90CADB2D5538FE09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_081408ADB076708B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_METHOD_4_081408ADB076708B_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
