#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class UIParticleClippable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_3E954775CE333A0E_METHOD_3_095EE1C579FF4D07_OFFSET UNITYSDK_OFFSET(0x15FA2C40)
#define CLASS_3_3E954775CE333A0E_METHOD_3_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x15FA20D0)
#define CLASS_3_3E954775CE333A0E_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15FA2010)
#define CLASS_3_3E954775CE333A0E_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x15FA25D0)
#define CLASS_3_3E954775CE333A0E_METHOD_3_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0x15FA23C0)
#define CLASS_3_3E954775CE333A0E_METHOD_3_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x15FA2080)
#define CLASS_3_3E954775CE333A0E_METHOD_3_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x15FA2370)
#define CLASS_3_3E954775CE333A0E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FA2330)
#define CLASS_3_3E954775CE333A0E_TICK_OFFSET UNITYSDK_OFFSET(0x15FA2570)
#define CLASS_3_3E954775CE333A0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FA2CC0)
#define CLASS_3_3E954775CE333A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA2C80)

inline static constexpr unsigned int Class_3_3E954775CE333A0E_TypeDefinitionIndex = 45760;

class Class_3_3E954775CE333A0E : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3E954775CE333A0E_TypeDefinitionIndex)->GetStaticField(0x9F50);
	}
	static ::System::Int32* StaticGet_Field_3_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3E954775CE333A0E_TypeDefinitionIndex)->GetStaticField(0x9F54);
	}
	::UnityEngine::RectTransform* Field_3_2; // 0x38
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_3; // 0x40
	::Il2CppArray<::UnityEngine::Vector3>* Field_3_4; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_5; // 0x50
	::UnityEngine::Vector4 Field_3_6; // 0x58
	::UnityEngine::Rect Field_3_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E__CCTOR_OFFSET))();
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_3_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_3_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_A61A196E6AD5766D_OFFSET))(this);
	}

	::RPG::Client::UIParticleClippable* Method_3_095EE1C579FF4D07()
	{
		return ((::RPG::Client::UIParticleClippable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E954775CE333A0E_METHOD_3_095EE1C579FF4D07_OFFSET))(this);
	}
};
