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

#define CLASS_2_324F041932E38026_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1557A030)
#define CLASS_2_324F041932E38026_METHOD_2_18DF2A148937B9C4_OFFSET UNITYSDK_OFFSET(0x1557A1C0)
#define CLASS_2_324F041932E38026_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1557A160)
#define CLASS_2_324F041932E38026_METHOD_2_D0C92BE0C8551027_OFFSET UNITYSDK_OFFSET(0x1557A3B0)
#define CLASS_2_324F041932E38026_METHOD_2_DCC8A1446163134F_OFFSET UNITYSDK_OFFSET(0x1557A5F0)
#define CLASS_2_324F041932E38026__CTOR_OFFSET UNITYSDK_OFFSET(0x1557A040)

inline static constexpr unsigned int Class_2_324F041932E38026_TypeDefinitionIndex = 74123;

class Class_2_324F041932E38026 : public ::Class_1_3ED45B5689DB5816
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::RPG::Client::UIPrefabLoader* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2, ::Class_3_FA020C2C23A72B3F* a3, ::System::UInt32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*, ::Class_3_FA020C2C23A72B3F*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_324F041932E38026__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_324F041932E38026_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_324F041932E38026_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_18DF2A148937B9C4(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_324F041932E38026_METHOD_2_18DF2A148937B9C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D0C92BE0C8551027(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_324F041932E38026_METHOD_2_D0C92BE0C8551027_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DCC8A1446163134F(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_324F041932E38026_METHOD_2_DCC8A1446163134F_OFFSET))(this, a1, a2, a3);
	}
};
