#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_03001B7AE75F9E95_OFFSET UNITYSDK_OFFSET(0x10D38250)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_5E2ED209E5609484_OFFSET UNITYSDK_OFFSET(0x10D38020)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_91A89515A72CE7DE_OFFSET UNITYSDK_OFFSET(0x10D38270)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_A8BFB9159C439880_OFFSET UNITYSDK_OFFSET(0x10D38260)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54__CTOR_OFFSET UNITYSDK_OFFSET(0x10D38010)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_0B1DD13CC3CE9A54_TypeDefinitionIndex = 74563;

class Class_3_22FDC730CC26B7BA_Class_1_0B1DD13CC3CE9A54 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Enum_3_0A3761FE34514D6C_1 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E2ED209E5609484(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_5E2ED209E5609484_OFFSET))(this, a1);
	}

	::System::Void Method_1_03001B7AE75F9E95(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_03001B7AE75F9E95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8BFB9159C439880(::UnityEngine::Collider* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_A8BFB9159C439880_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_91A89515A72CE7DE(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_0B1DD13CC3CE9A54_METHOD_1_91A89515A72CE7DE_OFFSET))(this, a1);
	}
};
