#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_LIGHTFADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B2CFA0)
#define MOLEMOLE_LIGHTFADER_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x19B2D690)
#define MOLEMOLE_LIGHTFADER_METHOD_1_2BD553CF28497D6D_OFFSET UNITYSDK_OFFSET(0x19B2D760)
#define MOLEMOLE_LIGHTFADER_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x19B2D6D0)
#define MOLEMOLE_LIGHTFADER_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x19B2D360)
#define MOLEMOLE_LIGHTFADER_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x19B2D510)
#define MOLEMOLE_LIGHTFADER_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x19B2D920)
#define MOLEMOLE_LIGHTFADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B2D0D0)
#define MOLEMOLE_LIGHTFADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2D350)

namespace MoleMole
{
	inline static constexpr unsigned int LightFader_TypeDefinitionIndex = 68353;

	class LightFader : public ::System::Object
	{
	public:
		::UnityEngine::Light* light; // 0x10
		::System::Int32 lightIndex; // 0x18
		::System::Single _origIntensity; // 0x1C
		::System::Single _startIntensity; // 0x20
		::System::Int32 lightInstanceId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_DISPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
		}

		::System::Void Method_1_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_1_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_479759059E440327_OFFSET))(this, a1);
		}

		::System::Void Method_1_2BD553CF28497D6D(::UnityEngine::Light* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_2BD553CF28497D6D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LIGHTFADER_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
		}
	};
}
