#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIVariable.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD69420)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1CD69360)
#define RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD69310)
#define RPG_GAMECORE_AIVARIABLEBOOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD69510)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_3B0FEA62A777480E_OFFSET UNITYSDK_OFFSET(0x1CD69710)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_56950E5F6703F137_OFFSET UNITYSDK_OFFSET(0x1CD692E0)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_AAB430F0C614C608_OFFSET UNITYSDK_OFFSET(0x1CD684D0)
#define RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_C620B405B25D520F_OFFSET UNITYSDK_OFFSET(0x1CD695C0)
#define RPG_GAMECORE_AIVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD684C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableBool_TypeDefinitionIndex = 15435;

	class AIVariableBool : public ::RPG::GameCore::AIVariable
	{
	public:
		::System::Boolean Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56950E5F6703F137(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_56950E5F6703F137_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAB430F0C614C608(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_AAB430F0C614C608_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::RPG::GameCore::AIVariableBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_3_C620B405B25D520F(::RPG::GameCore::AIVariableBool* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableBool*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_C620B405B25D520F_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_3B0FEA62A777480E(::RPG::GameCore::AIVariableBool* a1, ::RPG::GameCore::AIVariableBool* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariableBool*, ::RPG::GameCore::AIVariableBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEBOOL_METHOD_3_3B0FEA62A777480E_OFFSET))(a1, a2);
		}
	};
}
