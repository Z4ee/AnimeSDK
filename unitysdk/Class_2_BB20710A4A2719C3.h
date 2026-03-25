#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRandomOffsetScale; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_BB20710A4A2719C3_METHOD_2_1BC539462B1DCAB4_OFFSET UNITYSDK_OFFSET(0x10536050)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x105369A0)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x10535FB0)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_D17608F426766AB8_OFFSET UNITYSDK_OFFSET(0x10536160)
#define CLASS_2_BB20710A4A2719C3_METHOD_2_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x105361D0)
#define CLASS_2_BB20710A4A2719C3__CTOR_OFFSET UNITYSDK_OFFSET(0x10536990)

inline static constexpr unsigned int Class_2_BB20710A4A2719C3_TypeDefinitionIndex = 57615;

class Class_2_BB20710A4A2719C3 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BC539462B1DCAB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_1BC539462B1DCAB4_OFFSET))(this);
	}

	::System::Void Method_2_FAADEE08E4E52BA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_FAADEE08E4E52BA5_OFFSET))(this);
	}

	::RPG::Client::MonoRandomOffsetScale* Method_2_D17608F426766AB8()
	{
		return ((::RPG::Client::MonoRandomOffsetScale*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_D17608F426766AB8_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BB20710A4A2719C3_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
