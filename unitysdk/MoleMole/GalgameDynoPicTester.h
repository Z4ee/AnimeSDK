#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_GALGAMEDYNOPICTESTER_METHOD_5_50B0C51E91B23365_OFFSET UNITYSDK_OFFSET(0x16857160)
#define MOLEMOLE_GALGAMEDYNOPICTESTER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168572D0)
#define MOLEMOLE_GALGAMEDYNOPICTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16857110)

namespace MoleMole
{
	inline static constexpr unsigned int GalgameDynoPicTester_TypeDefinitionIndex = 84040;

	class GalgameDynoPicTester : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEDYNOPICTESTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Method_5_50B0C51E91B23365()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEDYNOPICTESTER_METHOD_5_50B0C51E91B23365_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEDYNOPICTESTER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
