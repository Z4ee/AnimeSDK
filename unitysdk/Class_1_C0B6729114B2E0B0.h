#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/RPGTools/Timeline/CRPCameraSmallWindowMeshUI_MeshUIOutlineType.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_696;
class Class_1_1342B57709FD7AC5;
class Class_1_4A90D78D94DB1347;
class Class_1_4B703F2764047929;
class Class_1_80793F5E162C6353;
class Class_1_989C330149193C2C;
class Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951;
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class SplitScreenDepthOverlay; }
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

#define CLASS_1_C0B6729114B2E0B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA2ECB0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_08470114E930933A_OFFSET UNITYSDK_OFFSET(0xBA31590)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0xBA30800)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0xBA2F430)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_1F41C03A8C3502E0_OFFSET UNITYSDK_OFFSET(0xBA30F80)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_2A50A7EA4A6523A5_OFFSET UNITYSDK_OFFSET(0xBA313F0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_2B17F8256B27E984_OFFSET UNITYSDK_OFFSET(0xBA31D30)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBA2EF80)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_36B57F7112356614_OFFSET UNITYSDK_OFFSET(0xBA2F940)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_39A5DB7FDFD75ACA_OFFSET UNITYSDK_OFFSET(0xBA30F20)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBA2ED00)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_4A111163FD8F1931_OFFSET UNITYSDK_OFFSET(0xBA2F590)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0xBA2F860)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xBA2E8F0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0xBA30B10)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xBA2EB90)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_818C193EE6DDF386_OFFSET UNITYSDK_OFFSET(0xBA30480)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_94BBF7DECC3A5C24_OFFSET UNITYSDK_OFFSET(0xBA30720)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xBA30170)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBA2F380)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_99BD3572EC5FF0A8_OFFSET UNITYSDK_OFFSET(0xBA30A60)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_A071FE0B8C719CF1_OFFSET UNITYSDK_OFFSET(0xBA31F00)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_A8CA007F2DC52A31_OFFSET UNITYSDK_OFFSET(0xBA31910)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_ABD6C60E1C36A4F4_OFFSET UNITYSDK_OFFSET(0xBA301F0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_B8191F51803FCDAE_OFFSET UNITYSDK_OFFSET(0xBA30650)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_C9A2C482B1A6C625_OFFSET UNITYSDK_OFFSET(0xBA30C00)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xBA2F010)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_D0DC629DBCEE03C4_OFFSET UNITYSDK_OFFSET(0xBA311C0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_D9F5533AF8E0F05B_1_OFFSET UNITYSDK_OFFSET(0xBA31EC0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_D9F5533AF8E0F05B_OFFSET UNITYSDK_OFFSET(0xBA31E80)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_DCABA64F5C6EAEA5_OFFSET UNITYSDK_OFFSET(0xBA31B50)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_E375A9E6D91AC702_OFFSET UNITYSDK_OFFSET(0xBA2FBE0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_E82836E5213A70A5_OFFSET UNITYSDK_OFFSET(0xBA31270)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FB5C3C31B0B6D610_OFFSET UNITYSDK_OFFSET(0xBA30DB0)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FB69A6556583B023_OFFSET UNITYSDK_OFFSET(0xBA2EB40)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FC2DAECA3EC175A5_OFFSET UNITYSDK_OFFSET(0xBA31460)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xBA2EE60)
#define CLASS_1_C0B6729114B2E0B0_METHOD_1_FFA0A7BCB2745416_OFFSET UNITYSDK_OFFSET(0xBA30FF0)
#define CLASS_1_C0B6729114B2E0B0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA2E900)

inline static constexpr unsigned int Class_1_C0B6729114B2E0B0_TypeDefinitionIndex = 60766;

class Class_1_C0B6729114B2E0B0 : public ::System::Object
{
public:
	// static const ::System::String* HGEFDOIBNIM; // 0x0
	// static const ::System::String* JHGJBJNAMGH; // 0x0
	// static const ::System::String* HNPLLNHCDCJ; // 0x0
	// static const ::System::String* FMEEBDCKGDA; // 0x0
	// static const ::System::String* BKJMINOJFND; // 0x0
	// static const ::System::String* BEOKLOHDMBI; // 0x0
	::Class_1_80793F5E162C6353* EOCBOHKGEGE; // 0x10
	::UnityEngine::GameObject* GKCMAGFNMNM; // 0x18
	::RPG::Client::SplitScreenDepthOverlay* GDJCIFJEDCD; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask>* KOPOIIPADNA; // 0x28
	::Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951* DFECLCDMPHE; // 0x30
	::UnityEngine::GameObject* CNOKJBEOHNF; // 0x38
	::UnityEngine::GameObject* DCCFDPFMLCB; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ECCDGLBAHAN; // 0x48
	::Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951* MLJNEGJBLAB; // 0x50
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* AOPGNJBDICO; // 0x58
	::Class_1_4B703F2764047929* AEEKINDJLDO; // 0x60
	::RPG::CustomRP::CRPVirtualCameraVolumn* NBHNGBGNFIP; // 0x68
	::Class_1_989C330149193C2C* AELCAPALAOE; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DHBPEACMFND; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::VCMask>* PGADBAAGKJI; // 0x80
	::Class_1_4A90D78D94DB1347* MGBABGFLKHN; // 0x88
	::UnityEngine::GameObject* KPEHDFILIFE; // 0x90
	::UnityEngine::GameObject* OCBNEPCJOKD; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OFHKINCKPIN; // 0xA0
	::System::String* DNHELGBHLBA; // 0xA8
	::Class_0_16E4307DCC419505_696* PEHLNBGDMAG; // 0xB0

	::System::Void _ctor(::Class_1_4B703F2764047929* a1, ::Class_1_80793F5E162C6353* a2, ::Class_1_989C330149193C2C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*, ::Class_1_80793F5E162C6353*, ::Class_1_989C330149193C2C*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_696* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_696*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_FB69A6556583B023()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_FB69A6556583B023_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_5AD297B90767E73A_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B57F7112356614(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_36B57F7112356614_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_CEA32FF190776922_OFFSET))(this);
	}

	::Cinemachine::CinemachineCRPVirtualCamera* Method_1_818C193EE6DDF386(::System::Int32 a1, ::UnityEngine::Transform* a2)
	{
		return ((::Cinemachine::CinemachineCRPVirtualCamera*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_818C193EE6DDF386_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E375A9E6D91AC702(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_E375A9E6D91AC702_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_696* Method_1_B8191F51803FCDAE(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_696*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_B8191F51803FCDAE_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_94BBF7DECC3A5C24(::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::CRPCameraSmallWindowMeshUI_MeshUIOutlineType))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_94BBF7DECC3A5C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9A2C482B1A6C625(::Struct_2_B76C9DBDAECC6C19_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B76C9DBDAECC6C19_1))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_C9A2C482B1A6C625_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_30D1209326FA87FC_OFFSET))(this);
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

	::System::Void Method_1_A8CA007F2DC52A31(::RPG::GameCore::GameEntity* a1, ::RPG::CustomRP::VCMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_METHOD_1_A8CA007F2DC52A31_OFFSET))(this, a1, a2);
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
