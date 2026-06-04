#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_622;
class Class_1_1342B57709FD7AC5;
class Class_1_4B703F2764047929;
class Class_1_80793F5E162C6353;
class Class_1_989C330149193C2C;
class Class_1_E05E7A6D9DE9138B;
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

#define CLASS_1_E3C0F091037CDE77_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7356C0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xA735860)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_1F41C03A8C3502E0_OFFSET UNITYSDK_OFFSET(0xA736E30)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_2A50A7EA4A6523A5_OFFSET UNITYSDK_OFFSET(0xA7372A0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_2C5A03E0F3A58E1D_OFFSET UNITYSDK_OFFSET(0xA736A90)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_39A5DB7FDFD75ACA_OFFSET UNITYSDK_OFFSET(0xA736DD0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA735710)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0xA735BD0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xA735360)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xA7355E0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_73D6A37ECF8C9A77_OFFSET UNITYSDK_OFFSET(0xA7379A0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xA735FB0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_94BBF7DECC3A5C24_OFFSET UNITYSDK_OFFSET(0xA736B90)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xA7365B0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA735A20)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_99BD3572EC5FF0A8_OFFSET UNITYSDK_OFFSET(0xA7376B0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_A071FE0B8C719CF1_OFFSET UNITYSDK_OFFSET(0xA737C70)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_A8CA007F2DC52A31_OFFSET UNITYSDK_OFFSET(0xA737760)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0xA736630)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0xA735780)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_CB15442998B4BFD1_OFFSET UNITYSDK_OFFSET(0xA735EA0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D0DC629DBCEE03C4_OFFSET UNITYSDK_OFFSET(0xA737070)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D42FC13CE803F719_OFFSET UNITYSDK_OFFSET(0xA737310)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_1_OFFSET UNITYSDK_OFFSET(0xA737C30)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_OFFSET UNITYSDK_OFFSET(0xA737BF0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_E375A9E6D91AC702_OFFSET UNITYSDK_OFFSET(0xA736040)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_E82836E5213A70A5_OFFSET UNITYSDK_OFFSET(0xA737120)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FB5C3C31B0B6D610_OFFSET UNITYSDK_OFFSET(0xA736C60)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FB69A6556583B023_OFFSET UNITYSDK_OFFSET(0xA735590)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0xA735AC0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FEF5536D5E911E6F_OFFSET UNITYSDK_OFFSET(0xA736890)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FFA0A7BCB2745416_OFFSET UNITYSDK_OFFSET(0xA736EA0)
#define CLASS_1_E3C0F091037CDE77__CTOR_OFFSET UNITYSDK_OFFSET(0xA735370)

inline static constexpr unsigned int Class_1_E3C0F091037CDE77_TypeDefinitionIndex = 56699;

class Class_1_E3C0F091037CDE77 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	::Class_1_4B703F2764047929* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_7; // 0x20
	::Class_1_989C330149193C2C* Field_1_8; // 0x28
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_10; // 0x38
	::System::String* Field_1_11; // 0x40
	::RPG::CustomRP::CRPVirtualCameraVolumn* Field_1_12; // 0x48
	::Class_1_E05E7A6D9DE9138B* Field_1_13; // 0x50
	::UnityEngine::GameObject* Field_1_14; // 0x58
	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Field_1_15; // 0x60
	::UnityEngine::GameObject* Field_1_16; // 0x68
	::Class_1_80793F5E162C6353* Field_1_17; // 0x70
	::Class_0_16E4307DCC419505_622* Field_1_18; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* Field_1_19; // 0x80
	::UnityEngine::GameObject* Field_1_20; // 0x88
	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Field_1_21; // 0x90

	::System::Void _ctor(::Class_1_4B703F2764047929* a1, ::Class_1_80793F5E162C6353* a2, ::Class_1_989C330149193C2C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*, ::Class_1_80793F5E162C6353*, ::Class_1_989C330149193C2C*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_622* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_622*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_FB69A6556583B023()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FB69A6556583B023_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB15442998B4BFD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_CB15442998B4BFD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::Cinemachine::CinemachineCRPVirtualCamera* Method_1_FEF5536D5E911E6F(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FEF5536D5E911E6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E375A9E6D91AC702(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_E375A9E6D91AC702_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_622* Method_1_2C5A03E0F3A58E1D(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_622*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_2C5A03E0F3A58E1D_OFFSET))(this, a1);
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

	::System::Void Method_1_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_B036E5806AE655F4_OFFSET))(this);
	}

	::System::Void Method_1_FFA0A7BCB2745416(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_FFA0A7BCB2745416_OFFSET))(this, a1);
	}

	::System::Void Method_1_E82836E5213A70A5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_E82836E5213A70A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_D42FC13CE803F719(::RPG::CustomRP::VCMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D42FC13CE803F719_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A8CA007F2DC52A31(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_A8CA007F2DC52A31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73D6A37ECF8C9A77(::RPG::CustomRP::VCMask a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_73D6A37ECF8C9A77_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_2A50A7EA4A6523A5(::RPGTools::MonoTimelineEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_2A50A7EA4A6523A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99BD3572EC5FF0A8(::UnityEngine::GameObject* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_99BD3572EC5FF0A8_OFFSET))(this, a1, a2);
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
