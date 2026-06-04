#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193C5300)
#define RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x193C5260)
#define RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x193C5190)
#define RPG_GAMECORE_AIVARIABLEFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193C5450)
#define RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_2742D7137C9CCDB6_OFFSET UNITYSDK_OFFSET(0x193C4310)
#define RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_36FA82E9CA56D7A1_OFFSET UNITYSDK_OFFSET(0x193C5160)
#define RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_F51FEF81E82409C8_1_OFFSET UNITYSDK_OFFSET(0x193C5560)
#define RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_F51FEF81E82409C8_OFFSET UNITYSDK_OFFSET(0x193C5520)
#define RPG_GAMECORE_AIVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x193C4300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableFloat_TypeDefinitionIndex = 14839;

	class AIVariableFloat : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36FA82E9CA56D7A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_36FA82E9CA56D7A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2742D7137C9CCDB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_2742D7137C9CCDB6_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableFloat* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_3_F51FEF81E82409C8(::RPG::GameCore::AIVariableFloat* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFloat*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_F51FEF81E82409C8_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_F51FEF81E82409C8_1(::RPG::GameCore::AIVariableFloat* a1, ::RPG::GameCore::AIVariableFloat* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableFloat*, ::RPG::GameCore::AIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEFLOAT_METHOD_3_F51FEF81E82409C8_1_OFFSET))(a1, a2);
		}
	};
}
