#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class MonoInControlTip; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_7492251C5D304310_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x16F3D860)
#define CLASS_2_7492251C5D304310_METHOD_2_753CC0976D6F224C_OFFSET UNITYSDK_OFFSET(0x16F3DA00)
#define CLASS_2_7492251C5D304310_METHOD_2_9A7071D23F340B6D_OFFSET UNITYSDK_OFFSET(0x16F3D920)
#define CLASS_2_7492251C5D304310_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x16F3D720)
#define CLASS_2_7492251C5D304310_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F3D7C0)
#define CLASS_2_7492251C5D304310__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3DAF0)
#define CLASS_2_7492251C5D304310__ONBIND_OFFSET UNITYSDK_OFFSET(0x16F3D6A0)
#define CLASS_2_7492251C5D304310__ONTICK_OFFSET UNITYSDK_OFFSET(0x16F3D800)

inline static constexpr unsigned int Class_2_7492251C5D304310_TypeDefinitionIndex = 68260;

class Class_2_7492251C5D304310 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::MonoInControlTip* Field_2_0; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68

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
