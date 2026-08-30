#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoPerformanceCRPCameraSplitScreenLineUIMarker; }
namespace RPG::Client { class SplitScreenVCControl; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_DC965EE082DEB32F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FFE4F0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_0DDA4DE2896B5A04_1_OFFSET UNITYSDK_OFFSET(0x19FFE9E0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_0DDA4DE2896B5A04_OFFSET UNITYSDK_OFFSET(0x19FFE7B0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x19FFE5E0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_479759059E440327_2_OFFSET UNITYSDK_OFFSET(0x19FFEAB0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x19FFE570)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_941C404C800CB723_1_OFFSET UNITYSDK_OFFSET(0x19FFE970)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x19FFE740)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x19FFE290)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0x19FFE1F0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x19FFE480)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_BD486D5C6E7D68DB_1_OFFSET UNITYSDK_OFFSET(0x19FFE8F0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_BD486D5C6E7D68DB_OFFSET UNITYSDK_OFFSET(0x19FFE6C0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_D520AC3FAE621CCC_OFFSET UNITYSDK_OFFSET(0x19FFE1E0)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_FDE09C8D62639E3E_1_OFFSET UNITYSDK_OFFSET(0x19FFE880)
#define CLASS_1_DC965EE082DEB32F_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x19FFE650)
#define CLASS_1_DC965EE082DEB32F__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFEB20)

inline static constexpr unsigned int Class_1_DC965EE082DEB32F_TypeDefinitionIndex = 60769;

class Class_1_DC965EE082DEB32F : public ::System::Object
{
public:
	// static const ::System::String* IDFMIHMADLI; // 0x0
	// static const ::System::String* AACJFBGOMAO; // 0x0
	// static const ::System::String* MCOHEPHLMPP; // 0x0
	::UnityEngine::GameObject* BFNGLBKMHMK; // 0x10
	::RPG::Client::MonoPerformanceCRPCameraSplitScreenLineUIMarker* BMGOEDKDLDI; // 0x18
	::RPG::Client::SplitScreenVCControl* DGLBFCMGINF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F__CTOR_OFFSET))(this);
	}

	::RPG::Client::SplitScreenVCControl* Method_1_D520AC3FAE621CCC()
	{
		return ((::RPG::Client::SplitScreenVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_D520AC3FAE621CCC_OFFSET))(this);
	}

	::System::Void Method_1_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_A15EF7939F75CCED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_97BE07E876064FAC_OFFSET))(this);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD486D5C6E7D68DB(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_BD486D5C6E7D68DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DDA4DE2896B5A04(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_0DDA4DE2896B5A04_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FDE09C8D62639E3E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_FDE09C8D62639E3E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD486D5C6E7D68DB_1(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_BD486D5C6E7D68DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_941C404C800CB723_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DDA4DE2896B5A04_1(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_0DDA4DE2896B5A04_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_479759059E440327_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC965EE082DEB32F_METHOD_1_479759059E440327_2_OFFSET))(this, a1);
	}
};
