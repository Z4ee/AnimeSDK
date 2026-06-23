#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasScaler.h"

#define MOLEMOLE_NAPCANVASSCALER_CALLHANDLE_OFFSET UNITYSDK_OFFSET(0x1419F030)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1419F150)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1419F100)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1419F110)
#define MOLEMOLE_NAPCANVASSCALER_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1419F1A0)
#define MOLEMOLE_NAPCANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x1419F080)

namespace MoleMole
{
	inline static constexpr unsigned int NapCanvasScaler_TypeDefinitionIndex = 77407;

	class NapCanvasScaler : public ::UnityEngine::UI::CanvasScaler
	{
	public:
		::System::Boolean Field_7_0; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER__CTOR_OFFSET))(this);
		}

		::System::Void CallHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_CALLHANDLE_OFFSET))(this);
		}

		::System::Void Method_7_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Method_7_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_7_41AA181104E03F2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_41AA181104E03F2C_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCANVASSCALER_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
