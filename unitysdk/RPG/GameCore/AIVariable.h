#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_AIVARIABLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B9F7630)
#define RPG_GAMECORE_AIVARIABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B9F7540)
#define RPG_GAMECORE_AIVARIABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B9F76B0)
#define RPG_GAMECORE_AIVARIABLE_METHOD_2_5082A76794C3F7FF_OFFSET UNITYSDK_OFFSET(0x1B9F6AF0)
#define RPG_GAMECORE_AIVARIABLE_METHOD_2_B4D40AFEF159D9B5_OFFSET UNITYSDK_OFFSET(0x1B9F7760)
#define RPG_GAMECORE_AIVARIABLE_METHOD_2_D63B41A7B3D7BAFC_OFFSET UNITYSDK_OFFSET(0x1B9F78B0)
#define RPG_GAMECORE_AIVARIABLE_METHOD_2_EAF0FEF732F0BB8E_OFFSET UNITYSDK_OFFSET(0x1B9F67E0)
#define RPG_GAMECORE_AIVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F6AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariable_TypeDefinitionIndex = 14998;

	class AIVariable : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsPrivate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EAF0FEF732F0BB8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_METHOD_2_EAF0FEF732F0BB8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5082A76794C3F7FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_METHOD_2_5082A76794C3F7FF_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::GameCore::AIVariable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean Method_2_B4D40AFEF159D9B5(::RPG::GameCore::AIVariable* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariable*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_METHOD_2_B4D40AFEF159D9B5_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_D63B41A7B3D7BAFC(::RPG::GameCore::AIVariable* a1, ::RPG::GameCore::AIVariable* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AIVariable*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLE_METHOD_2_D63B41A7B3D7BAFC_OFFSET))(a1, a2);
		}
	};
}
