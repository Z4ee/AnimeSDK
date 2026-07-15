#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_SHAREDINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE33100)
#define RPG_GAMECORE_SHAREDINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE33140)
#define RPG_GAMECORE_SHAREDINT_METHOD_3_6298D73FAACC4622_OFFSET UNITYSDK_OFFSET(0x1BE32FE0)
#define RPG_GAMECORE_SHAREDINT_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x1BE330F0)
#define RPG_GAMECORE_SHAREDINT_METHOD_3_D606EE9005CB8215_OFFSET UNITYSDK_OFFSET(0x1BE32FA0)
#define RPG_GAMECORE_SHAREDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE32FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedInt_TypeDefinitionIndex = 17572;

	class SharedInt : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::Int32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D606EE9005CB8215(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_METHOD_3_D606EE9005CB8215_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6298D73FAACC4622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_METHOD_3_6298D73FAACC4622_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDINT_GETHASHCODE_OFFSET))(this);
		}
	};
}
