#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoSurfDoubleDigit; }

#define MOLEMOLE_MONOSURFTIME_SETVALUE_OFFSET UNITYSDK_OFFSET(0x12BD42A0)
#define MOLEMOLE_MONOSURFTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD43B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfTime_TypeDefinitionIndex = 65945;

	class MonoSurfTime : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoSurfDoubleDigit* hour; // 0x18
		::MoleMole::MonoSurfDoubleDigit* minute; // 0x20
		::MoleMole::MonoSurfDoubleDigit* second; // 0x28
		::Il2CppArray<::Foundation::AssetPath>* digits; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFTIME__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 a1, ::Class_2_A9A857AD270B9CE1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFTIME_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
