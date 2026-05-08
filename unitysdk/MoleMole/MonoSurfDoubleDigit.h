#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoSurfSingleDigit; }

#define MOLEMOLE_MONOSURFDOUBLEDIGIT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1605F020)
#define MOLEMOLE_MONOSURFDOUBLEDIGIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1605F130)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfDoubleDigit_TypeDefinitionIndex = 78535;

	class MonoSurfDoubleDigit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoSurfSingleDigit* high; // 0x18
		::MoleMole::MonoSurfSingleDigit* low; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFDOUBLEDIGIT__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 a1, ::Class_2_A9A857AD270B9CE1* a2, ::Il2CppArray<::Foundation::AssetPath>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_A9A857AD270B9CE1*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFDOUBLEDIGIT_SETVALUE_OFFSET))(this, a1, a2, a3);
		}
	};
}
