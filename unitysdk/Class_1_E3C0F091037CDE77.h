#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_517;
class Class_1_4B703F2764047929;
class Class_1_80793F5E162C6353;
class Class_1_9CBC71DC5240DC00;
class Class_1_E05E7A6D9DE9138B;
class Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951;
class Class_1_E6906FDE536EFCD6;
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

#define CLASS_1_E3C0F091037CDE77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1095D640)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1095D7A0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_0C10FA1DF29251F5_OFFSET UNITYSDK_OFFSET(0x1095D550)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_1A1A223B50198530_OFFSET UNITYSDK_OFFSET(0x1095F590)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_1F41C03A8C3502E0_OFFSET UNITYSDK_OFFSET(0x1095ECF0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_29AF9EBBD301B25E_OFFSET UNITYSDK_OFFSET(0x1095F910)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_2A50A7EA4A6523A5_OFFSET UNITYSDK_OFFSET(0x1095F0E0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_39A5DB7FDFD75ACA_OFFSET UNITYSDK_OFFSET(0x1095EC90)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1095D690)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0x1095DB00)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4AF5D2CC76356D63_OFFSET UNITYSDK_OFFSET(0x1095E980)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x1095D700)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0x1095DDD0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x1095D5A0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x1095D320)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_613D7391D33C4C9B_1_OFFSET UNITYSDK_OFFSET(0x1095EF80)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_613D7391D33C4C9B_OFFSET UNITYSDK_OFFSET(0x1095ED60)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x1095DEB0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_7A8816166666F64D_OFFSET UNITYSDK_OFFSET(0x1095EED0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_7B477B687E9AF16D_OFFSET UNITYSDK_OFFSET(0x1095F150)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_818C193EE6DDF386_OFFSET UNITYSDK_OFFSET(0x1095E7B0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_94BBF7DECC3A5C24_OFFSET UNITYSDK_OFFSET(0x1095EA50)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1095E480)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1095D950)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_99BD3572EC5FF0A8_OFFSET UNITYSDK_OFFSET(0x1095F4E0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_A7836646989A4215_OFFSET UNITYSDK_OFFSET(0x1095E500)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_1_OFFSET UNITYSDK_OFFSET(0x1095F8C0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_OFFSET UNITYSDK_OFFSET(0x1095F880)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_DBA814410B69DBD5_OFFSET UNITYSDK_OFFSET(0x1095F7A0)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_E375A9E6D91AC702_OFFSET UNITYSDK_OFFSET(0x1095DF40)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FB5C3C31B0B6D610_OFFSET UNITYSDK_OFFSET(0x1095EB20)
#define CLASS_1_E3C0F091037CDE77_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x1095D9F0)
#define CLASS_1_E3C0F091037CDE77__CTOR_OFFSET UNITYSDK_OFFSET(0x1095D330)

inline static constexpr unsigned int Class_1_E3C0F091037CDE77_TypeDefinitionIndex = 49146;

class Class_1_E3C0F091037CDE77 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_17; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	::Class_1_E05E7A6D9DE9138B* Field_1_4; // 0x10
	::RPG::CustomRP::CRPVirtualCameraVolumn* Field_1_3; // 0x18
	::Class_1_E6906FDE536EFCD6* Field_1_16; // 0x20
	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Field_1_0; // 0x28
	::UnityEngine::GameObject* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* Field_1_10; // 0x38
	::Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951* Field_1_1; // 0x40
	::UnityEngine::GameObject* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_8; // 0x50
	::UnityEngine::GameObject* Field_1_12; // 0x58
	::System::String* Field_1_5; // 0x60
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_1_6; // 0x68
	::Class_1_80793F5E162C6353* Field_1_15; // 0x70
	::Class_0_16E4307DCC419505_517* Field_1_13; // 0x78
	::Class_1_4B703F2764047929* Field_1_14; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_9; // 0x88
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* Field_1_7; // 0x90

	::System::Void _ctor(::Class_1_4B703F2764047929* a1, ::Class_1_80793F5E162C6353* a2, ::Class_1_E6906FDE536EFCD6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*, ::Class_1_80793F5E162C6353*, ::Class_1_E6906FDE536EFCD6*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_517* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_517*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_0C10FA1DF29251F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_0C10FA1DF29251F5_OFFSET))(this);
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

	::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5AD297B90767E73A_OFFSET))(this, a1);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::Cinemachine::CinemachineCRPVirtualCamera* Method_1_818C193EE6DDF386(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_818C193EE6DDF386_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E375A9E6D91AC702(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_E375A9E6D91AC702_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_517* Method_1_4AF5D2CC76356D63(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_517*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_4AF5D2CC76356D63_OFFSET))(this, a1);
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

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_613D7391D33C4C9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_613D7391D33C4C9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_613D7391D33C4C9B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_613D7391D33C4C9B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B477B687E9AF16D(::RPG::CustomRP::VCMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_7B477B687E9AF16D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1A1A223B50198530(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_1A1A223B50198530_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBA814410B69DBD5(::RPG::CustomRP::VCMask a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_DBA814410B69DBD5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_D9F5533AF8E0F05B()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_D9F5533AF8E0F05B_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_D9F5533AF8E0F05B_1_OFFSET))(this);
	}

	::System::Void Method_1_7A8816166666F64D(::RPG::Client::MonoEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_7A8816166666F64D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A50A7EA4A6523A5(::RPGTools::MonoTimelineEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_2A50A7EA4A6523A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99BD3572EC5FF0A8(::UnityEngine::GameObject* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_99BD3572EC5FF0A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_29AF9EBBD301B25E(::Class_1_9CBC71DC5240DC00* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_29AF9EBBD301B25E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7836646989A4215()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_METHOD_1_A7836646989A4215_OFFSET))(this);
	}
};
