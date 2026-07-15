#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_657;
class Class_1_1342B57709FD7AC5;
class Class_1_4A90D78D94DB1347;
class Class_1_4B703F2764047929;
class Class_1_80793F5E162C6353;
class Class_1_989C330149193C2C;
class Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951;
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E3C0F091037CDE77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1522D8B0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x1522DD70)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_1F41C03A8C3502E0_OFFSET UNITYSDK_OFFSET(0x1522F170)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_2B17F8256B27E984_OFFSET UNITYSDK_OFFSET(0x1522FCF0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_2C5A03E0F3A58E1D_OFFSET UNITYSDK_OFFSET(0x1522EDD0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_39A5DB7FDFD75ACA_OFFSET UNITYSDK_OFFSET(0x1522F110)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0x1522DED0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5095D0294B5CA708_OFFSET UNITYSDK_OFFSET(0x1522FA90)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5867ECAE979F18DC_OFFSET UNITYSDK_OFFSET(0x1522F5D0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x1522D550)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x1522D7D0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_7138107740B93685_OFFSET UNITYSDK_OFFSET(0x1522F1E0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x1522E2B0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1522DAC0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x1522D9E0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_8FCE85961ADD72D8_OFFSET UNITYSDK_OFFSET(0x1522F9E0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_94BBF7DECC3A5C24_OFFSET UNITYSDK_OFFSET(0x1522EED0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1522E8F0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1522DCD0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_A071FE0B8C719CF1_OFFSET UNITYSDK_OFFSET(0x1522FEE0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1522D900)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0x1522E970)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_CB15442998B4BFD1_OFFSET UNITYSDK_OFFSET(0x1522E1A0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D0DC629DBCEE03C4_OFFSET UNITYSDK_OFFSET(0x1522F3B0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D42FC13CE803F719_OFFSET UNITYSDK_OFFSET(0x1522F640)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_1_OFFSET UNITYSDK_OFFSET(0x1522FE90)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_OFFSET UNITYSDK_OFFSET(0x1522FE50)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_E375A9E6D91AC702_OFFSET UNITYSDK_OFFSET(0x1522E340)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_E82836E5213A70A5_OFFSET UNITYSDK_OFFSET(0x1522F460)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FB5C3C31B0B6D610_OFFSET UNITYSDK_OFFSET(0x1522EFA0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FB69A6556583B023_OFFSET UNITYSDK_OFFSET(0x1522D780)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FEF5536D5E911E6F_OFFSET UNITYSDK_OFFSET(0x1522EBD0)
#define CLASS_1_E3C0F091037CDE77__CTOR_OFFSET UNITYSDK_OFFSET(0x1522D560)

inline static constexpr unsigned int Class_1_E3C0F091037CDE77_TypeDefinitionIndex = 57945;

class Class_1_E3C0F091037CDE77 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::RPG::CustomRP::CRPVirtualCameraVolumn* Field_1_5; // 0x10
	::UnityEngine::GameObject* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* Field_1_7; // 0x20
	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Field_1_8; // 0x28
	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Field_1_9; // 0x30
	::Class_1_80793F5E162C6353* Field_1_10; // 0x38
	::Class_0_16E4307DCC419505_657* Field_1_11; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_12; // 0x48
	::UnityEngine::GameObject* Field_1_13; // 0x50
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_1_14; // 0x58
	::Class_1_4A90D78D94DB1347* Field_1_15; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* Field_1_16; // 0x68
	::UnityEngine::GameObject* Field_1_17; // 0x70
	::Class_1_989C330149193C2C* Field_1_18; // 0x78
	::Class_1_4B703F2764047929* Field_1_19; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_20; // 0x88
	::System::String* Field_1_21; // 0x90

	::System::Void _ctor(::Class_1_4B703F2764047929* a1, ::Class_1_80793F5E162C6353* a2, ::Class_1_989C330149193C2C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*, ::Class_1_80793F5E162C6353*, ::Class_1_989C330149193C2C*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_657* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_657*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_FB69A6556583B023()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FB69A6556583B023_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB15442998B4BFD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_CB15442998B4BFD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::Cinemachine::CinemachineCRPVirtualCamera* Method_1_FEF5536D5E911E6F(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FEF5536D5E911E6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E375A9E6D91AC702(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_E375A9E6D91AC702_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_657* Method_1_2C5A03E0F3A58E1D(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_657*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_2C5A03E0F3A58E1D_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_94BBF7DECC3A5C24(::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_94BBF7DECC3A5C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_FB5C3C31B0B6D610(::System::UInt32 a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FB5C3C31B0B6D610_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F41C03A8C3502E0(::System::UInt32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_1F41C03A8C3502E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_4A111163FD8F1931(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_4A111163FD8F1931_OFFSET))(this, a1, a2);
	}

	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Method_1_39A5DB7FDFD75ACA(::System::UInt32 a1)
	{
		return ((::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_39A5DB7FDFD75ACA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_7138107740B93685(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_7138107740B93685_OFFSET))(this, a1);
	}

	::System::Void Method_1_E82836E5213A70A5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_E82836E5213A70A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_D42FC13CE803F719(::RPG::CustomRP::VCMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D42FC13CE803F719_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5095D0294B5CA708(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5095D0294B5CA708_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B17F8256B27E984(::RPG::CustomRP::VCMask a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_2B17F8256B27E984_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_D9F5533AF8E0F05B()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_D9F5533AF8E0F05B_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_1_OFFSET))(this);
	}

	::System::Void Method_1_D0DC629DBCEE03C4(::RPG::Client::MonoEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D0DC629DBCEE03C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5867ECAE979F18DC(::RPGTools::MonoTimelineEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5867ECAE979F18DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FCE85961ADD72D8(::UnityEngine::GameObject* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_8FCE85961ADD72D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A071FE0B8C719CF1(::Class_1_1342B57709FD7AC5* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_A071FE0B8C719CF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABD6C60E1C36A4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_ABD6C60E1C36A4F4_OFFSET))(this);
	}
};
