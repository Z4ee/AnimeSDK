#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoTravelShipController; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ED7576A0A144501C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E36BD0)
#define CLASS_1_ED7576A0A144501C_METHOD_1_0B6C3969A0985ADD_OFFSET UNITYSDK_OFFSET(0x16E36C20)
#define CLASS_1_ED7576A0A144501C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16E36E50)
#define CLASS_1_ED7576A0A144501C_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x16E36D60)
#define CLASS_1_ED7576A0A144501C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E36BC0)

inline static constexpr unsigned int Class_1_ED7576A0A144501C_TypeDefinitionIndex = 68751;

class Class_1_ED7576A0A144501C : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* APPFIKHLIOD; // 0x10
	::RPG::Client::MonoTravelShipController* CPIIOIPAAKK; // 0x18
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x20
	::System::Single BCGHNNBGMCM; // 0x28
	::System::Single PBKJKLAHGBP; // 0x2C
	::System::Single NMPFBLPKLBD; // 0x30
	::System::Single HHKHNECCBOF; // 0x34
	::System::Single IPOENGFPLJE; // 0x38
	::System::Single GECFMEFOBLA; // 0x3C

	::System::Void _ctor(::UnityEngine::Transform* a1, ::RPG::Client::MonoTravelShipController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::MonoTravelShipController*))((::PBYTE)hIl2Cpp + CLASS_1_ED7576A0A144501C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED7576A0A144501C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0B6C3969A0985ADD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED7576A0A144501C_METHOD_1_0B6C3969A0985ADD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED7576A0A144501C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED7576A0A144501C_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}
};
