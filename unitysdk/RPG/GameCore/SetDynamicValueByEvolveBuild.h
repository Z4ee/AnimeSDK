#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C410C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_METHOD_4_17ABB5A258C74744_OFFSET UNITYSDK_OFFSET(0x19C39850)
#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_METHOD_4_43382F01158545B4_OFFSET UNITYSDK_OFFSET(0x19C41040)
#define RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD__CTOR_OFFSET UNITYSDK_OFFSET(0x19C39800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByEvolveBuild_TypeDefinitionIndex = 21843;

	class SetDynamicValueByEvolveBuild : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::EvolveBuildPropertyType ValueType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_43382F01158545B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByEvolveBuild*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByEvolveBuild*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_METHOD_4_43382F01158545B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17ABB5A258C74744(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByEvolveBuild* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByEvolveBuild*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_METHOD_4_17ABB5A258C74744_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYEVOLVEBUILD_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
