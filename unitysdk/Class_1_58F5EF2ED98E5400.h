#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_58F5EF2ED98E5400_METHOD_1_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0xBADED50)
#define CLASS_1_58F5EF2ED98E5400_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xBADEFA0)
#define CLASS_1_58F5EF2ED98E5400_METHOD_1_3FA3BEBE945D9197_OFFSET UNITYSDK_OFFSET(0xBADEEB0)
#define CLASS_1_58F5EF2ED98E5400_METHOD_1_425AA12430920EA1_OFFSET UNITYSDK_OFFSET(0xBADEC60)
#define CLASS_1_58F5EF2ED98E5400_METHOD_1_9B887D36E05B5B1F_OFFSET UNITYSDK_OFFSET(0xBADE8D0)
#define CLASS_1_58F5EF2ED98E5400_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBADEBD0)
#define CLASS_1_58F5EF2ED98E5400_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xBADEF40)
#define CLASS_1_58F5EF2ED98E5400_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBADE460)
#define CLASS_1_58F5EF2ED98E5400_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBADE6E0)
#define CLASS_1_58F5EF2ED98E5400__CCTOR_OFFSET UNITYSDK_OFFSET(0xBADF140)
#define CLASS_1_58F5EF2ED98E5400__CTOR_OFFSET UNITYSDK_OFFSET(0xBADF070)

inline static constexpr unsigned int Class_1_58F5EF2ED98E5400_TypeDefinitionIndex = 73155;

class Class_1_58F5EF2ED98E5400 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_MHEAIOMEGCA()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_58F5EF2ED98E5400_TypeDefinitionIndex)->GetStaticField(0x127A0);
	}
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KNLPBDKAGLP; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* AANLJOIGLLE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400__CCTOR_OFFSET))();
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_9B887D36E05B5B1F(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_9B887D36E05B5B1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_425AA12430920EA1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_425AA12430920EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FA3BEBE945D9197(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_3FA3BEBE945D9197_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_58F5EF2ED98E5400_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
	}
};
