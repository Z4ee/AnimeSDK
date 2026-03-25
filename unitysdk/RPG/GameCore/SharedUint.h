#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
#include "unitysdk/RPG/GameCore/SharedValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_SHAREDUINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x176EEBA0)
#define RPG_GAMECORE_SHAREDUINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x176EEBE0)
#define RPG_GAMECORE_SHAREDUINT_METHOD_3_3C21746C1F5C045E_OFFSET UNITYSDK_OFFSET(0x176EEA70)
#define RPG_GAMECORE_SHAREDUINT_METHOD_3_85D22C255258C41D_OFFSET UNITYSDK_OFFSET(0x176EEB90)
#define RPG_GAMECORE_SHAREDUINT_METHOD_3_85DECB076B86A2D9_OFFSET UNITYSDK_OFFSET(0x176EEAB0)
#define RPG_GAMECORE_SHAREDUINT__CTOR_OFFSET UNITYSDK_OFFSET(0x176EEAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedUint_TypeDefinitionIndex = 16799;

	class SharedUint : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::UInt32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C21746C1F5C045E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedUint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedUint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_METHOD_3_3C21746C1F5C045E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85DECB076B86A2D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SharedUint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SharedUint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_METHOD_3_85DECB076B86A2D9_OFFSET))(a1, a2);
		}

		::RPG::GameCore::SharedValueType Method_3_85D22C255258C41D()
		{
			return ((::RPG::GameCore::SharedValueType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_METHOD_3_85D22C255258C41D_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDUINT_GETHASHCODE_OFFSET))(this);
		}
	};
}
