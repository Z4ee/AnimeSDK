#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SHAREDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C6E230)
#define RPG_GAMECORE_SHAREDSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C6E290)
#define RPG_GAMECORE_SHAREDSTRING_METHOD_3_1313316A5B8C7FBD_OFFSET UNITYSDK_OFFSET(0x19C6E0F0)
#define RPG_GAMECORE_SHAREDSTRING_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x19C6E220)
#define RPG_GAMECORE_SHAREDSTRING_METHOD_3_CB9B8324D70328E2_OFFSET UNITYSDK_OFFSET(0x19C6E130)
#define RPG_GAMECORE_SHAREDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6E120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedString_TypeDefinitionIndex = 17400;

	class SharedString : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::String* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1313316A5B8C7FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_METHOD_3_1313316A5B8C7FBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB9B8324D70328E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_METHOD_3_CB9B8324D70328E2_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDSTRING_GETHASHCODE_OFFSET))(this);
		}
	};
}
