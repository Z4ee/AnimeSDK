#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3ED45B5689DB5816.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_FA020C2C23A72B3F;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6168682EAAD56705_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xC0DB5F0)
#define CLASS_2_6168682EAAD56705_METHOD_2_1B8253A6853F6D19_OFFSET UNITYSDK_OFFSET(0xC0DBBF0)
#define CLASS_2_6168682EAAD56705_METHOD_2_20B98AAB2B3070D0_OFFSET UNITYSDK_OFFSET(0xC0DB980)
#define CLASS_2_6168682EAAD56705_METHOD_2_253D0D738B16BE67_OFFSET UNITYSDK_OFFSET(0xC0DBA90)
#define CLASS_2_6168682EAAD56705_METHOD_2_3D4D884A0EF0D65A_OFFSET UNITYSDK_OFFSET(0xC0DB780)
#define CLASS_2_6168682EAAD56705_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC0DB920)
#define CLASS_2_6168682EAAD56705_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC0DB8A0)
#define CLASS_2_6168682EAAD56705_METHOD_2_DCC8A1446163134F_OFFSET UNITYSDK_OFFSET(0xC0DBD20)
#define CLASS_2_6168682EAAD56705__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DB600)

inline static constexpr unsigned int Class_2_6168682EAAD56705_TypeDefinitionIndex = 77609;

class Class_2_6168682EAAD56705 : public ::Class_1_3ED45B5689DB5816
{
public:
	// static const ::System::String* LHMEGMLGNBD; // 0x0
	// static const ::System::String* OJKLNGPKPBB; // 0x0
	::UnityEngine::GameObject* OPKJNAJAGHD; // 0x18
	::UnityEngine::Transform* CEDODCLEPBC; // 0x20
	::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x28
	::System::Single COAELIHGAHH; // 0x30

	::System::Void _ctor(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2, ::Class_3_FA020C2C23A72B3F* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*, ::Class_3_FA020C2C23A72B3F*))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_2_20B98AAB2B3070D0(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_20B98AAB2B3070D0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1B8253A6853F6D19(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_1B8253A6853F6D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DCC8A1446163134F(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_DCC8A1446163134F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_253D0D738B16BE67(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_253D0D738B16BE67_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_3D4D884A0EF0D65A(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_3D4D884A0EF0D65A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6168682EAAD56705_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
