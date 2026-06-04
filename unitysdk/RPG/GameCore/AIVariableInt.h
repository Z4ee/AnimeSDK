#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193C5710)
#define RPG_GAMECORE_AIVARIABLEINT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x193C5680)
#define RPG_GAMECORE_AIVARIABLEINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x193C55D0)
#define RPG_GAMECORE_AIVARIABLEINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193C5840)
#define RPG_GAMECORE_AIVARIABLEINT_METHOD_3_4A36F66A17625501_1_OFFSET UNITYSDK_OFFSET(0x193C5930)
#define RPG_GAMECORE_AIVARIABLEINT_METHOD_3_4A36F66A17625501_OFFSET UNITYSDK_OFFSET(0x193C58F0)
#define RPG_GAMECORE_AIVARIABLEINT_METHOD_3_8CA41CC098D6F426_OFFSET UNITYSDK_OFFSET(0x193C4480)
#define RPG_GAMECORE_AIVARIABLEINT_METHOD_3_9A3D7F22E23EA6A3_OFFSET UNITYSDK_OFFSET(0x193C55A0)
#define RPG_GAMECORE_AIVARIABLEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x193C4470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableInt_TypeDefinitionIndex = 14838;

	class AIVariableInt : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A3D7F22E23EA6A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_METHOD_3_9A3D7F22E23EA6A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CA41CC098D6F426(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_METHOD_3_8CA41CC098D6F426_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableInt* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_3_4A36F66A17625501(::RPG::GameCore::AIVariableInt* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableInt*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_METHOD_3_4A36F66A17625501_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_4A36F66A17625501_1(::RPG::GameCore::AIVariableInt* a1, ::RPG::GameCore::AIVariableInt* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableInt*, ::RPG::GameCore::AIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEINT_METHOD_3_4A36F66A17625501_1_OFFSET))(a1, a2);
		}
	};
}
