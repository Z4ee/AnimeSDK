#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_793;
class Class_1_1342B57709FD7AC5;
class Class_1_4A90D78D94DB1347;
class Class_1_4B703F2764047929;
class Class_1_80793F5E162C6353;
class Class_1_989C330149193C2C;
class Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951;
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

#define CLASS_1_C0B6729114B2E0B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8F1D00)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_08470114E930933A_OFFSET UNITYSDK_OFFSET(0xB8F3CD0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0xB8F22A0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_1F41C03A8C3502E0_OFFSET UNITYSDK_OFFSET(0xB8F3610)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_2A50A7EA4A6523A5_OFFSET UNITYSDK_OFFSET(0xB8F3A80)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_2B17F8256B27E984_OFFSET UNITYSDK_OFFSET(0xB8F4480)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_39A5DB7FDFD75ACA_OFFSET UNITYSDK_OFFSET(0xB8F35B0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0xB8F2400)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_4CF625B597C0473C_OFFSET UNITYSDK_OFFSET(0xB8DFC80)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_5095D0294B5CA708_OFFSET UNITYSDK_OFFSET(0xB8F4050)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0xB8F26D0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xB8F1940)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xB8F1BE0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xB8F27B0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_818C193EE6DDF386_OFFSET UNITYSDK_OFFSET(0xB8F30D0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xB8F1F90)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB8F1D50)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_94BBF7DECC3A5C24_OFFSET UNITYSDK_OFFSET(0xB8F3370)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xB8F2DC0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB8F2200)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_99BD3572EC5FF0A8_OFFSET UNITYSDK_OFFSET(0xB8F3C20)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_A071FE0B8C719CF1_OFFSET UNITYSDK_OFFSET(0xB8F4670)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0xB8F2E40)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_B8191F51803FCDAE_OFFSET UNITYSDK_OFFSET(0xB8F32A0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8DF4A0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_D0DC629DBCEE03C4_OFFSET UNITYSDK_OFFSET(0xB8F3850)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_D9F5533AF8E0F05B_1_OFFSET UNITYSDK_OFFSET(0xB8F4630)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_D9F5533AF8E0F05B_OFFSET UNITYSDK_OFFSET(0xB8F45E0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_DCABA64F5C6EAEA5_OFFSET UNITYSDK_OFFSET(0xB8F42B0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_E375A9E6D91AC702_OFFSET UNITYSDK_OFFSET(0xB8F2840)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_E82836E5213A70A5_OFFSET UNITYSDK_OFFSET(0xB8F3900)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FB5C3C31B0B6D610_OFFSET UNITYSDK_OFFSET(0xB8F3440)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FB69A6556583B023_OFFSET UNITYSDK_OFFSET(0xB8F1B90)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FC2DAECA3EC175A5_OFFSET UNITYSDK_OFFSET(0xB8F3AF0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xB8F1E70)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FFA0A7BCB2745416_OFFSET UNITYSDK_OFFSET(0xB8F3680)
#define CLASS_1_C0B6729114B2E0B0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F1950)

inline static constexpr unsigned int Class_1_C0B6729114B2E0B0_TypeDefinitionIndex = 60667;

class Class_1_C0B6729114B2E0B0 : public ::System::Object
{
public:
	// static const ::System::String* HGEFDOIBNIM; // 0x0
	// static const ::System::String* JHGJBJNAMGH; // 0x0
	// static const ::System::String* HNPLLNHCDCJ; // 0x0
	// static const ::System::String* FMEEBDCKGDA; // 0x0
	// static const ::System::String* BKJMINOJFND; // 0x0
	::Class_1_4B703F2764047929* AEEKINDJLDO; // 0x10
	::RPG::CustomRP::CRPVirtualCameraVolumn* NBHNGBGNFIP; // 0x18
	::Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951* MLJNEGJBLAB; // 0x20
	::UnityEngine::GameObject* DCCFDPFMLCB; // 0x28
	::Class_0_16E4307DCC419505_793* PEHLNBGDMAG; // 0x30
	::System::String* DNHELGBHLBA; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OFHKINCKPIN; // 0x40
	::UnityEngine::GameObject* GKCMAGFNMNM; // 0x48
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* AOPGNJBDICO; // 0x50
	::UnityEngine::GameObject* OCBNEPCJOKD; // 0x58
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ECCDGLBAHAN; // 0x60
	::Class_1_4A90D78D94DB1347* MGBABGFLKHN; // 0x68
	::Class_1_80793F5E162C6353* EOCBOHKGEGE; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* KOPOIIPADNA; // 0x78
	::Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951* DFECLCDMPHE; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* PGADBAAGKJI; // 0x88
	::Class_1_989C330149193C2C* AELCAPALAOE; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DHBPEACMFND; // 0x98

	::System::Void _ctor(::Class_1_4B703F2764047929* a1, ::Class_1_80793F5E162C6353* a2, ::Class_1_989C330149193C2C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*, ::Class_1_80793F5E162C6353*, ::Class_1_989C330149193C2C*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_793* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_793*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_FB69A6556583B023()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_FB69A6556583B023_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_5AD297B90767E73A_OFFSET))(this, a1);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::Cinemachine::CinemachineCRPVirtualCamera* Method_1_818C193EE6DDF386(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_818C193EE6DDF386_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E375A9E6D91AC702(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_E375A9E6D91AC702_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_793* Method_1_B8191F51803FCDAE(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_793*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_B8191F51803FCDAE_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_94BBF7DECC3A5C24(::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_94BBF7DECC3A5C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4CF625B597C0473C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_4CF625B597C0473C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_FB5C3C31B0B6D610(::System::UInt32 a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_FB5C3C31B0B6D610_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F41C03A8C3502E0(::System::UInt32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_1F41C03A8C3502E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_4A111163FD8F1931(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_4A111163FD8F1931_OFFSET))(this, a1, a2);
	}

	::Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951* Method_1_39A5DB7FDFD75ACA(::System::UInt32 a1)
	{
		return ((::Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_39A5DB7FDFD75ACA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Method_1_FFA0A7BCB2745416(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_FFA0A7BCB2745416_OFFSET))(this, a1);
	}

	::System::Void Method_1_E82836E5213A70A5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_E82836E5213A70A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_FC2DAECA3EC175A5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_FC2DAECA3EC175A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_08470114E930933A(::RPG::CustomRP::VCMask a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_08470114E930933A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5095D0294B5CA708(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_5095D0294B5CA708_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCABA64F5C6EAEA5(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_DCABA64F5C6EAEA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B17F8256B27E984(::RPG::CustomRP::VCMask a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_2B17F8256B27E984_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_D9F5533AF8E0F05B()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_D9F5533AF8E0F05B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_D9F5533AF8E0F05B_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_D9F5533AF8E0F05B_1_OFFSET))(this);
	}

	::System::Void Method_1_D0DC629DBCEE03C4(::RPG::Client::MonoEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_D0DC629DBCEE03C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A50A7EA4A6523A5(::RPGTools::MonoTimelineEffect* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::MonoTimelineEffect*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_2A50A7EA4A6523A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99BD3572EC5FF0A8(::UnityEngine::GameObject* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_99BD3572EC5FF0A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A071FE0B8C719CF1(::Class_1_1342B57709FD7AC5* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_A071FE0B8C719CF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABD6C60E1C36A4F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_ABD6C60E1C36A4F4_OFFSET))(this);
	}
};
