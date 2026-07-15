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

#define CLASS_1_78FBE34BADCAF595_METHOD_1_0C3D2F5AB276F311_OFFSET UNITYSDK_OFFSET(0x17AF53C0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_0D679A59A10441FD_OFFSET UNITYSDK_OFFSET(0x17AF5260)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x152E48B0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x152E47B0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_15A44F4C16628BFF_OFFSET UNITYSDK_OFFSET(0x152E43C0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_29DAE34D979AD312_OFFSET UNITYSDK_OFFSET(0x17AF5480)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17AF5610)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_3C42BCE5FC592EA3_OFFSET UNITYSDK_OFFSET(0x17AF4DA0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17AF56D0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_5F45BC503811CA89_OFFSET UNITYSDK_OFFSET(0x17AF5420)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_673DF5ECC0F21210_OFFSET UNITYSDK_OFFSET(0x152E4270)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_790E3622E78EC61C_OFFSET UNITYSDK_OFFSET(0x152E40C0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_7CB9C71E2C2A0739_OFFSET UNITYSDK_OFFSET(0x152E48E0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_8C627D641C4810C9_OFFSET UNITYSDK_OFFSET(0x152E45E0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x152E4890)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_9ED4DF385B9D99B1_OFFSET UNITYSDK_OFFSET(0x17AF4D40)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_A6ABD71BB75A0790_OFFSET UNITYSDK_OFFSET(0x152E48C0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x152E4340)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x152E48A0)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x152E4530)
#define CLASS_1_78FBE34BADCAF595_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x152E48D0)
#define CLASS_1_78FBE34BADCAF595__CTOR_OFFSET UNITYSDK_OFFSET(0x152E4930)

inline static constexpr unsigned int Class_1_78FBE34BADCAF595_TypeDefinitionIndex = 54767;

class Class_1_78FBE34BADCAF595 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_5; // 0x38
	::RPG::GameCore::EntityLodLoadingData* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_8; // 0x50
	::RPG::GameCore::EntityLodModelConfig* Field_1_9; // 0x58
	::RPG::GameCore::EntityLodModelConfig* Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x68
	::System::Int32 Field_1_12; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9ED4DF385B9D99B1(::RPG::GameCore::EntityLodLoadingData* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodLoadingData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_9ED4DF385B9D99B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3C42BCE5FC592EA3(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_3C42BCE5FC592EA3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0C3D2F5AB276F311(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_0C3D2F5AB276F311_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5F45BC503811CA89(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_5F45BC503811CA89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29DAE34D979AD312(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_29DAE34D979AD312_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_0D679A59A10441FD(::System::Int32 a1, ::RPG::GameCore::EntityLodModelConfig*& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodModelConfig*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_0D679A59A10441FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_790E3622E78EC61C(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_790E3622E78EC61C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15A44F4C16628BFF(::UnityEngine::GameObject* a1, ::RPG::GameCore::EntityLodModelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::EntityLodModelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_15A44F4C16628BFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_673DF5ECC0F21210(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_673DF5ECC0F21210_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_8C627D641C4810C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_8C627D641C4810C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::RPG::GameCore::EntityLodModelConfig* Method_1_A6ABD71BB75A0790()
	{
		return ((::RPG::GameCore::EntityLodModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_A6ABD71BB75A0790_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::EntityLodTemplateName Method_1_7CB9C71E2C2A0739()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595_METHOD_1_7CB9C71E2C2A0739_OFFSET))(this);
	}
};
