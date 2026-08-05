#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Video { class VideoClip; }

#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_03DD62B4DD933B9F_OFFSET UNITYSDK_OFFSET(0x114412F0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11441290)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_21E4F3F0CC7951AC_OFFSET UNITYSDK_OFFSET(0x1143FBE0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_29AF7E51FCF74CA6_OFFSET UNITYSDK_OFFSET(0x11440070)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11441230)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_690941B144B48369_OFFSET UNITYSDK_OFFSET(0x11440D00)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x11440F00)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_8E517889CD7E9A7E_OFFSET UNITYSDK_OFFSET(0x1143FD70)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_8EB005698683FF0E_OFFSET UNITYSDK_OFFSET(0x11440B10)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_A3C258244348E0B6_1_OFFSET UNITYSDK_OFFSET(0x11440AB0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_A3C258244348E0B6_OFFSET UNITYSDK_OFFSET(0x11440010)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x114404B0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x114411A0)
#define CLASS_1_A02EEEDBDD11A4F9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1143FBA0)
#define CLASS_1_A02EEEDBDD11A4F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1143FA00)

inline static constexpr unsigned int Class_1_A02EEEDBDD11A4F9_TypeDefinitionIndex = 49553;

class Class_1_A02EEEDBDD11A4F9 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02EEEDBDD11A4F9_TypeDefinitionIndex)->GetStaticField(0x10690);
	}
	::UnityEngine::Events::UnityEvent* Field_1_0; // 0x10
	::UnityEngine::Events::UnityEvent* Field_1_1; // 0x18
	::UnityEngine::Material* Field_1_5; // 0x20
	::UnityEngine::Events::UnityEvent* Field_1_2; // 0x28
	::MoleMole::IVideoPlayer* Field_1_7; // 0x30
	::Foundation::AssetRequestHandle Field_1_6; // 0x38

	::System::Void _ctor(::MoleMole::IVideoPlayer* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_21E4F3F0CC7951AC(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_21E4F3F0CC7951AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3C258244348E0B6(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_A3C258244348E0B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_29AF7E51FCF74CA6(::System::String* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action_1<::MoleMole::IVideoPlayer*>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_29AF7E51FCF74CA6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A3C258244348E0B6_1(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_A3C258244348E0B6_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E517889CD7E9A7E(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_8E517889CD7E9A7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_1_8EB005698683FF0E(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_8EB005698683FF0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_690941B144B48369(::UnityEngine::Video::VideoClip* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_690941B144B48369_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_03DD62B4DD933B9F(::MoleMole::IVideoPlayer* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_03DD62B4DD933B9F_OFFSET))(this, a1, a2);
	}
};
