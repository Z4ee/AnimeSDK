#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class MonoInControlTip; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_7492251C5D304310_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xB3D62E0)
#define CLASS_2_7492251C5D304310_METHOD_2_753CC0976D6F224C_OFFSET UNITYSDK_OFFSET(0xB3D6480)
#define CLASS_2_7492251C5D304310_METHOD_2_9A7071D23F340B6D_OFFSET UNITYSDK_OFFSET(0xB3D63A0)
#define CLASS_2_7492251C5D304310_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0xB3D61A0)
#define CLASS_2_7492251C5D304310_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3D6240)
#define CLASS_2_7492251C5D304310__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D6570)
#define CLASS_2_7492251C5D304310__ONBIND_OFFSET UNITYSDK_OFFSET(0xB3D6120)
#define CLASS_2_7492251C5D304310__ONTICK_OFFSET UNITYSDK_OFFSET(0xB3D6280)

inline static constexpr unsigned int Class_2_7492251C5D304310_TypeDefinitionIndex = 71483;

class Class_2_7492251C5D304310 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Button* KJIOINOOIHP; // 0x60
	::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A7071D23F340B6D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310_METHOD_2_9A7071D23F340B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_753CC0976D6F224C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7492251C5D304310_METHOD_2_753CC0976D6F224C_OFFSET))(this, a1);
	}
};
