#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EntityLodLoadingData; }
namespace RPG::GameCore { class EntityLodModelConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_090304344AE646C8_OFFSET UNITYSDK_OFFSET(0xA549A50)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_0D679A59A10441FD_OFFSET UNITYSDK_OFFSET(0xA549F50)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xA54AE70)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_15A44F4C16628BFF_OFFSET UNITYSDK_OFFSET(0xA54A160)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_29DAE34D979AD312_OFFSET UNITYSDK_OFFSET(0xA54A5F0)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA54A950)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_371B021CD74A58C0_OFFSET UNITYSDK_OFFSET(0xA54A590)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA54AA10)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_5E54832D785EF7E8_OFFSET UNITYSDK_OFFSET(0xA54A530)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_7CB9C71E2C2A0739_OFFSET UNITYSDK_OFFSET(0xA54AEA0)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_8C627D641C4810C9_OFFSET UNITYSDK_OFFSET(0xA54A780)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xA54AE50)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_9CF8A968901654EB_OFFSET UNITYSDK_OFFSET(0xA54ACB0)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_9ED4DF385B9D99B1_OFFSET UNITYSDK_OFFSET(0xA5499F0)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_A6ABD71BB75A0790_OFFSET UNITYSDK_OFFSET(0xA54AE80)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA54A2D0)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_C28929053D7BC7D3_OFFSET UNITYSDK_OFFSET(0xA54A350)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xA54AE60)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA54A0B0)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA54AE90)
#define CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA54AAF0)
#define CLASS_1_EFCBA1FD97ED5FE9__CTOR_OFFSET UNITYSDK_OFFSET(0xA54AEF0)

inline static constexpr unsigned int Class_1_EFCBA1FD97ED5FE9_TypeDefinitionIndex = 53551;

class Class_1_EFCBA1FD97ED5FE9 : public ::System::Object
{
public:
	::RPG::GameCore::EntityLodLoadingData* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::GameCore::EntityLodModelConfig* Field_1_2; // 0x20
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_3; // 0x28
	::RPG::GameCore::GameEntity* Field_1_4; // 0x30
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_5; // 0x38
	::RPG::GameCore::EntityLodModelConfig* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_8; // 0x50
	::System::String* Field_1_9; // 0x58
	::System::String* Field_1_10; // 0x60
	::System::Int32 Field_1_11; // 0x68
	::System::Boolean Field_1_12; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9ED4DF385B9D99B1(::RPG::GameCore::EntityLodLoadingData* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodLoadingData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_9ED4DF385B9D99B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_090304344AE646C8(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_090304344AE646C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_5E54832D785EF7E8(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_5E54832D785EF7E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_371B021CD74A58C0(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_371B021CD74A58C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29DAE34D979AD312(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_29DAE34D979AD312_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_0D679A59A10441FD(::System::Int32 a1, ::RPG::GameCore::EntityLodModelConfig*& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodModelConfig*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_0D679A59A10441FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C28929053D7BC7D3(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_C28929053D7BC7D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15A44F4C16628BFF(::UnityEngine::GameObject* a1, ::RPG::GameCore::EntityLodModelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::EntityLodModelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_15A44F4C16628BFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_9CF8A968901654EB(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_9CF8A968901654EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_8C627D641C4810C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_8C627D641C4810C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::RPG::GameCore::EntityLodModelConfig* Method_1_A6ABD71BB75A0790()
	{
		return ((::RPG::GameCore::EntityLodModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_A6ABD71BB75A0790_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::EntityLodTemplateName Method_1_7CB9C71E2C2A0739()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFCBA1FD97ED5FE9_METHOD_1_7CB9C71E2C2A0739_OFFSET))(this);
	}
};
