#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/FeixiaoSPPointState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7EE865CE35A3C84A_METHOD_2_04A81FA1DB9D4E37_OFFSET UNITYSDK_OFFSET(0x19917950)
#define CLASS_2_7EE865CE35A3C84A_METHOD_2_E30B6EB6F42B19F8_OFFSET UNITYSDK_OFFSET(0x199173A0)
#define CLASS_2_7EE865CE35A3C84A__CTOR_OFFSET UNITYSDK_OFFSET(0x19917A80)
#define CLASS_2_7EE865CE35A3C84A__ONBIND_OFFSET UNITYSDK_OFFSET(0x19917180)

inline static constexpr unsigned int Class_2_7EE865CE35A3C84A_TypeDefinitionIndex = 71857;

class Class_2_7EE865CE35A3C84A : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* OCMKGDHIOOP; // 0x0
	// static const ::System::String* JIHALFPCDEK; // 0x0
	// static const ::System::String* EDONMHIMPIL; // 0x0
	// static const ::System::String* HKGLKDDHOON; // 0x0
	// static const ::System::String* GIFBJODAKAK; // 0x0
	// static const ::System::String* FFIHGHKBPDC; // 0x0
	// static const ::System::String* FKLLNMOHINI; // 0x0
	// static const ::System::String* IEKOOHKCHPB; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x60
	::UnityEngine::Transform* BHCJFANHLNL; // 0x68
	::UnityEngine::Transform* OLBMACDBDPC; // 0x70
	::UnityEngine::Transform* HNALEMBOBFE; // 0x78
	::UnityEngine::Transform* FJIBCEKMCBP; // 0x80
	::RPG::Client::FeixiaoSPPointState DLNIGFGLPLJ; // 0x88

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
