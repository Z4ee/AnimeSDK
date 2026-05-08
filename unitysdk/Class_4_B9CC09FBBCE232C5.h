#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_65C2BD0D1B91C740.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatIntensityNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x12C93580)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12C92FC0)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_729ABA6AA3B854F7_OFFSET UNITYSDK_OFFSET(0x12C92BC0)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0x12C93020)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x12C92B10)
#define CLASS_4_B9CC09FBBCE232C5__CTOR_OFFSET UNITYSDK_OFFSET(0x12C93570)

inline static constexpr unsigned int Class_4_B9CC09FBBCE232C5_TypeDefinitionIndex = 59076;

class Class_4_B9CC09FBBCE232C5 : public ::Class_3_65C2BD0D1B91C740
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_4_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* Field_4_5; // 0x50
	::System::String* Field_4_2; // 0x58
	::MoleMole::Config::ConfigCurveCtrlMatIntensityNode* Field_4_0; // 0x60
	::UnityEngine::Color Field_4_3; // 0x68
	::System::Boolean Field_4_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_729ABA6AA3B854F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_729ABA6AA3B854F7_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_4_924C62BE8591D2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_924C62BE8591D2FD_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_1_OFFSET))(this);
	}
};
