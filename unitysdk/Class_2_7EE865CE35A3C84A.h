#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/FeixiaoSPPointState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7EE865CE35A3C84A_METHOD_2_04A81FA1DB9D4E37_OFFSET UNITYSDK_OFFSET(0x1646CD90)
#define CLASS_2_7EE865CE35A3C84A_METHOD_2_E30B6EB6F42B19F8_OFFSET UNITYSDK_OFFSET(0x1646C7E0)
#define CLASS_2_7EE865CE35A3C84A__CTOR_OFFSET UNITYSDK_OFFSET(0x1646CEC0)
#define CLASS_2_7EE865CE35A3C84A__ONBIND_OFFSET UNITYSDK_OFFSET(0x1646C5C0)

inline static constexpr unsigned int Class_2_7EE865CE35A3C84A_TypeDefinitionIndex = 68659;

class Class_2_7EE865CE35A3C84A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::UnityEngine::Transform* Field_2_8; // 0x60
	::UnityEngine::Animation* Field_2_9; // 0x68
	::UnityEngine::Transform* Field_2_10; // 0x70
	::UnityEngine::Transform* Field_2_11; // 0x78
	::UnityEngine::Transform* Field_2_12; // 0x80
	::RPG::Client::FeixiaoSPPointState Field_2_13; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE865CE35A3C84A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EE865CE35A3C84A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E30B6EB6F42B19F8(::RPG::Client::FeixiaoSPPointState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FeixiaoSPPointState))((::PBYTE)hIl2Cpp + CLASS_2_7EE865CE35A3C84A_METHOD_2_E30B6EB6F42B19F8_OFFSET))(this, a1);
	}

	::System::String* Method_2_04A81FA1DB9D4E37(::RPG::Client::FeixiaoSPPointState a1, ::RPG::Client::FeixiaoSPPointState a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::FeixiaoSPPointState, ::RPG::Client::FeixiaoSPPointState))((::PBYTE)hIl2Cpp + CLASS_2_7EE865CE35A3C84A_METHOD_2_04A81FA1DB9D4E37_OFFSET))(this, a1, a2);
	}
};
