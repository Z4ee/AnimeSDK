#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5D1EBFEDD35C45FC_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x173BF1E0)
#define CLASS_2_5D1EBFEDD35C45FC_METHOD_2_37F4556F1574C3C9_OFFSET UNITYSDK_OFFSET(0x173BF170)
#define CLASS_2_5D1EBFEDD35C45FC_METHOD_2_DDCA8161F84E5029_OFFSET UNITYSDK_OFFSET(0x173BF110)
#define CLASS_2_5D1EBFEDD35C45FC__CTOR_OFFSET UNITYSDK_OFFSET(0x173BF0B0)
#define CLASS_2_5D1EBFEDD35C45FC__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x173BF270)
#define CLASS_2_5D1EBFEDD35C45FC__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x173BF2C0)

inline static constexpr unsigned int Class_2_5D1EBFEDD35C45FC_TypeDefinitionIndex = 70446;

class Class_2_5D1EBFEDD35C45FC : public ::Class_1_E7175D70942CF05A
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_DDCA8161F84E5029(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_METHOD_2_DDCA8161F84E5029_OFFSET))(this, a1);
	}

	::System::Void Method_2_37F4556F1574C3C9(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_METHOD_2_37F4556F1574C3C9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}
};
