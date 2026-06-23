#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_02366CE86AF04A0E_Enum_3_731FB3089889A6AE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class VideoPlayerMono; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Graphic; }

#define CLASS_1_02366CE86AF04A0E_METHOD_1_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x1269A000)
#define CLASS_1_02366CE86AF04A0E_METHOD_1_2A60BEDEFC76DA03_OFFSET UNITYSDK_OFFSET(0x12699990)
#define CLASS_1_02366CE86AF04A0E_METHOD_1_5ECA73179DE76F34_OFFSET UNITYSDK_OFFSET(0x12699AA0)
#define CLASS_1_02366CE86AF04A0E_METHOD_1_62445485D361C798_OFFSET UNITYSDK_OFFSET(0x12699E30)
#define CLASS_1_02366CE86AF04A0E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x12699DD0)
#define CLASS_1_02366CE86AF04A0E_METHOD_1_EFE74FD03C1E19A2_OFFSET UNITYSDK_OFFSET(0x12699D10)
#define CLASS_1_02366CE86AF04A0E_METHOD_1_F37E7430AB382DC3_OFFSET UNITYSDK_OFFSET(0x12699F40)
#define CLASS_1_02366CE86AF04A0E__CCTOR_OFFSET UNITYSDK_OFFSET(0x12699980)

inline static constexpr unsigned int Class_1_02366CE86AF04A0E_TypeDefinitionIndex = 63489;

class Class_1_02366CE86AF04A0E : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02366CE86AF04A0E_TypeDefinitionIndex)->GetStaticField(0xF010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E__CCTOR_OFFSET))();
	}

	static ::MoleMole::IVideoPlayer* Method_1_2A60BEDEFC76DA03(::MoleMole::VideoPlayerMono* a1)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::MoleMole::VideoPlayerMono*))((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_2A60BEDEFC76DA03_OFFSET))(a1);
	}

	static ::MoleMole::IVideoPlayer* Method_1_EFE74FD03C1E19A2(::UnityEngine::GameObject* a1)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_EFE74FD03C1E19A2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_62445485D361C798()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_62445485D361C798_OFFSET))();
	}

	static ::MoleMole::IVideoPlayer* Method_1_F37E7430AB382DC3(::UnityEngine::GameObject* a1, ::UnityEngine::UI::Graphic* a2)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_F37E7430AB382DC3_OFFSET))(a1, a2);
	}

	static ::MoleMole::IVideoPlayer* Method_1_5ECA73179DE76F34(::MoleMole::VideoPlayerMono* a1, ::Class_1_02366CE86AF04A0E_Enum_3_731FB3089889A6AE a2)
	{
		return ((::MoleMole::IVideoPlayer*(*)(::MoleMole::VideoPlayerMono*, ::Class_1_02366CE86AF04A0E_Enum_3_731FB3089889A6AE))((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_5ECA73179DE76F34_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02366CE86AF04A0E_METHOD_1_1DA89DF9585853CF_OFFSET))(a1);
	}
};
