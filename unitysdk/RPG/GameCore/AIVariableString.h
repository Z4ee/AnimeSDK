#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16E94500)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x16E94440)
#define RPG_GAMECORE_AIVARIABLESTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x16E943F0)
#define RPG_GAMECORE_AIVARIABLESTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16E945C0)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_137C60875DC60289_OFFSET UNITYSDK_OFFSET(0x16E932A0)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_6ED46C6A6D4D2AC6_OFFSET UNITYSDK_OFFSET(0x16E943C0)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_9970F33A5835AE4F_1_OFFSET UNITYSDK_OFFSET(0x16E94750)
#define RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_9970F33A5835AE4F_OFFSET UNITYSDK_OFFSET(0x16E94710)
#define RPG_GAMECORE_AIVARIABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x16E93290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableString_TypeDefinitionIndex = 14307;

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

		static ::System::Boolean Method_3_9970F33A5835AE4F(::RPG::GameCore::AIVariableString* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableString*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_9970F33A5835AE4F_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_9970F33A5835AE4F_1(::RPG::GameCore::AIVariableString* a1, ::RPG::GameCore::AIVariableString* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableString*, ::RPG::GameCore::AIVariableString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLESTRING_METHOD_3_9970F33A5835AE4F_1_OFFSET))(a1, a2);
		}
	};
}
