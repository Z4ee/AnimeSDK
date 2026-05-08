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

#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_0F8A719D2C36857A_OFFSET UNITYSDK_OFFSET(0x108F15E0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x108F1840)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_20F6C988523A3532_OFFSET UNITYSDK_OFFSET(0x108F1150)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_29AF7E51FCF74CA6_OFFSET UNITYSDK_OFFSET(0x108F0130)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x108F1090)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_690941B144B48369_OFFSET UNITYSDK_OFFSET(0x108F1640)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x108F1340)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x108F0570)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_C57CEF9DCCFF0ABB_OFFSET UNITYSDK_OFFSET(0x108F0BD0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_DFAA8DABC60B5905_1_OFFSET UNITYSDK_OFFSET(0x108F10F0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_DFAA8DABC60B5905_OFFSET UNITYSDK_OFFSET(0x108F0B70)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FD3EA56F76A158AD_OFFSET UNITYSDK_OFFSET(0x108F0D60)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x108F1000)
#define CLASS_1_A02EEEDBDD11A4F9__CCTOR_OFFSET UNITYSDK_OFFSET(0x108F00F0)
#define CLASS_1_A02EEEDBDD11A4F9__CTOR_OFFSET UNITYSDK_OFFSET(0x108EFF50)

inline static constexpr unsigned int Class_1_A02EEEDBDD11A4F9_TypeDefinitionIndex = 81268;

class Class_1_A02EEEDBDD11A4F9 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02EEEDBDD11A4F9_TypeDefinitionIndex)->GetStaticField(0xA210);
	}
	::UnityEngine::Events::UnityEvent* Field_1_2; // 0x10
	::UnityEngine::Events::UnityEvent* Field_1_1; // 0x18
	::Foundation::AssetRequestHandle Field_1_4; // 0x20
	::MoleMole::IVideoPlayer* Field_1_3; // 0x40
	::UnityEngine::Events::UnityEvent* Field_1_0; // 0x48
	::UnityEngine::Material* Field_1_5; // 0x50

	::System::Void _ctor(::MoleMole::IVideoPlayer* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_29AF7E51FCF74CA6(::System::String* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action_1<::MoleMole::IVideoPlayer*>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_29AF7E51FCF74CA6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_DFAA8DABC60B5905(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_DFAA8DABC60B5905_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C57CEF9DCCFF0ABB(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_C57CEF9DCCFF0ABB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_DFAA8DABC60B5905_1(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_DFAA8DABC60B5905_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD3EA56F76A158AD(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FD3EA56F76A158AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20F6C988523A3532(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_20F6C988523A3532_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_0F8A719D2C36857A(::MoleMole::IVideoPlayer* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_0F8A719D2C36857A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_690941B144B48369(::UnityEngine::Video::VideoClip* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_690941B144B48369_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
