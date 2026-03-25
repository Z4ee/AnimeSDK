#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C6C90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_METHOD_4_A8197B7D0DA20EF5_OFFSET UNITYSDK_OFFSET(0x176C6A60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_METHOD_4_C308C45409B3B076_OFFSET UNITYSDK_OFFSET(0x176C6B30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x176C6AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTournFloorType_TypeDefinitionIndex = 21333;

	class SetDynamicValueByTournFloorType : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x18
		::System::String* DynamicKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A8197B7D0DA20EF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTournFloorType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTournFloorType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_METHOD_4_A8197B7D0DA20EF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C308C45409B3B076(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTournFloorType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_METHOD_4_C308C45409B3B076_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
