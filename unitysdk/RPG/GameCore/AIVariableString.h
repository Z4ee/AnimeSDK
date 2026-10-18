#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D310A10)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D310960)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D310910)
#define RPG_GAMECORE_AIVARIABLESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D310AD0)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_137C60875DC60289_OFFSET UNITYSDK_OFFSET(0x1D30EA60)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_48224D7DE21A8BB0_OFFSET UNITYSDK_OFFSET(0x1D310C20)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_6ED46C6A6D4D2AC6_OFFSET UNITYSDK_OFFSET(0x1D3108E0)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_777B33BFEB21C149_OFFSET UNITYSDK_OFFSET(0x1D310D70)
#define RPG_GAMECORE_AIVARIABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30EA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableString_TypeDefinitionIndex = 15610;

	class AIVariableString : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::String* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6ED46C6A6D4D2AC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_6ED46C6A6D4D2AC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_137C60875DC60289(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_137C60875DC60289_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableString* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_3_48224D7DE21A8BB0(::RPG::GameCore::AIVariableString* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableString*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_48224D7DE21A8BB0_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_777B33BFEB21C149(::RPG::GameCore::AIVariableString* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableString*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_777B33BFEB21C149_OFFSET))(a1, a2);
		}
	};
}
