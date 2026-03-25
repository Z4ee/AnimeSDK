#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHAREDVALUE_METHOD_2_1E4EDFC3378184A7_OFFSET UNITYSDK_OFFSET(0x176EEBF0)
#define RPG_GAMECORE_SHAREDVALUE_METHOD_2_5B507F4CDFBF1081_OFFSET UNITYSDK_OFFSET(0x176EF130)
#define RPG_GAMECORE_SHAREDVALUE_METHOD_2_C57401C2E9180C0A_OFFSET UNITYSDK_OFFSET(0x176EF090)
#define RPG_GAMECORE_SHAREDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x176EDCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedValue_TypeDefinitionIndex = 16797;

	class SharedValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E4EDFC3378184A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_METHOD_2_1E4EDFC3378184A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C57401C2E9180C0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_METHOD_2_C57401C2E9180C0A_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_2_5B507F4CDFBF1081()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDVALUE_METHOD_2_5B507F4CDFBF1081_OFFSET))(this);
		}
	};
}
