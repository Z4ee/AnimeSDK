#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_MahJongAutoLayout; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace RPG::Client::Promises { class Promise; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_C754764E80A7E657_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9FA4A0)
#define CLASS_2_C754764E80A7E657_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0xB9FAA50)
#define CLASS_2_C754764E80A7E657_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0xB9FBAE0)
#define CLASS_2_C754764E80A7E657_METHOD_2_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xB9FB190)
#define CLASS_2_C754764E80A7E657_METHOD_2_2C246413EAA713DE_OFFSET UNITYSDK_OFFSET(0xB9FC330)
#define CLASS_2_C754764E80A7E657_METHOD_2_2FDC69A366F3E642_OFFSET UNITYSDK_OFFSET(0xB9FE0A0)
#define CLASS_2_C754764E80A7E657_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9FA510)
#define CLASS_2_C754764E80A7E657_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0xB9FDC30)
#define CLASS_2_C754764E80A7E657_METHOD_2_526462B26CBD1709_OFFSET UNITYSDK_OFFSET(0xB9FDE10)
#define CLASS_2_C754764E80A7E657_METHOD_2_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0xB9FD040)
#define CLASS_2_C754764E80A7E657_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xB9FE710)
#define CLASS_2_C754764E80A7E657_METHOD_2_8B1A1F1BBD08B924_OFFSET UNITYSDK_OFFSET(0xB9FD6A0)
#define CLASS_2_C754764E80A7E657_METHOD_2_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0xB9FC3D0)
#define CLASS_2_C754764E80A7E657_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0xB9FC420)
#define CLASS_2_C754764E80A7E657_METHOD_2_9B0B200A9F0A3A53_OFFSET UNITYSDK_OFFSET(0xB9FF4C0)
#define CLASS_2_C754764E80A7E657_METHOD_2_9C05ABC9E776C74C_OFFSET UNITYSDK_OFFSET(0xB9FAE20)
#define CLASS_2_C754764E80A7E657_METHOD_2_9DB2BA66EF5C398B_OFFSET UNITYSDK_OFFSET(0xB9FAB00)
#define CLASS_2_C754764E80A7E657_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB9FD660)
#define CLASS_2_C754764E80A7E657_METHOD_2_A4F126E1D8DD44E9_OFFSET UNITYSDK_OFFSET(0xB9FF2A0)
#define CLASS_2_C754764E80A7E657_METHOD_2_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0xB9FE3A0)
#define CLASS_2_C754764E80A7E657_METHOD_2_B13172C1552B211F_1_OFFSET UNITYSDK_OFFSET(0xB9FD7E0)
#define CLASS_2_C754764E80A7E657_METHOD_2_B13172C1552B211F_2_OFFSET UNITYSDK_OFFSET(0xB9FD8B0)
#define CLASS_2_C754764E80A7E657_METHOD_2_B13172C1552B211F_OFFSET UNITYSDK_OFFSET(0xB9FD710)
#define CLASS_2_C754764E80A7E657_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xB9FA430)
#define CLASS_2_C754764E80A7E657_METHOD_2_BB2F919992ED96EA_OFFSET UNITYSDK_OFFSET(0xB9FD350)
#define CLASS_2_C754764E80A7E657_METHOD_2_BC17691AD818C776_OFFSET UNITYSDK_OFFSET(0xB9FA580)
#define CLASS_2_C754764E80A7E657_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0xB9FB6F0)
#define CLASS_2_C754764E80A7E657_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0xB9FB430)
#define CLASS_2_C754764E80A7E657_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xB9FE040)
#define CLASS_2_C754764E80A7E657_METHOD_2_D0D828ED30757AA6_OFFSET UNITYSDK_OFFSET(0xB9FF6D0)
#define CLASS_2_C754764E80A7E657_METHOD_2_D715EE144EE71A8C_OFFSET UNITYSDK_OFFSET(0xB9FCBC0)
#define CLASS_2_C754764E80A7E657_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xB9FD290)
#define CLASS_2_C754764E80A7E657_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0xB9FBDB0)
#define CLASS_2_C754764E80A7E657_METHOD_2_DE28CABA6796577D_OFFSET UNITYSDK_OFFSET(0xB9FD990)
#define CLASS_2_C754764E80A7E657_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xB9FF960)
#define CLASS_2_C754764E80A7E657_METHOD_2_F35BEF6AB354FAAA_OFFSET UNITYSDK_OFFSET(0xB9FAA00)
#define CLASS_2_C754764E80A7E657__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FF7E0)
#define CLASS_2_C754764E80A7E657___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9FF9C0)

inline static constexpr unsigned int Class_2_C754764E80A7E657_TypeDefinitionIndex = 65315;

class Class_2_C754764E80A7E657 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::Promises::Promise* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x20
	::RPG::Client::MonoEffectManager* Field_2_2; // 0x28
	::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC17691AD818C776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_BC17691AD818C776_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_8C945585B4A8C17B_OFFSET))(this);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_2_D715EE144EE71A8C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_D715EE144EE71A8C_OFFSET))(this, a1);
	}

	::System::Void Method_2_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_BB2F919992ED96EA(::RPG::Client::MonoEffectPluginMahJongItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_BB2F919992ED96EA_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_8B1A1F1BBD08B924()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_8B1A1F1BBD08B924_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Method_2_B13172C1552B211F()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_B13172C1552B211F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Method_2_B13172C1552B211F_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_B13172C1552B211F_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Method_2_B13172C1552B211F_2()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_B13172C1552B211F_2_OFFSET))(this);
	}

	::System::Void Method_2_DE28CABA6796577D(::RPG::Client::Effect_MahJongAutoLayout* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_MahJongAutoLayout*))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_DE28CABA6796577D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_526462B26CBD1709(::RPG::Client::MonoEffectPluginMahJongItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_526462B26CBD1709_OFFSET))(this, a1);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_2FDC69A366F3E642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_2FDC69A366F3E642_OFFSET))(this);
	}

	::System::Void Method_2_9DB2BA66EF5C398B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_9DB2BA66EF5C398B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C246413EAA713DE(::RPG::Client::MonoEffectPluginMahJongItem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_2C246413EAA713DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9C05ABC9E776C74C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_9C05ABC9E776C74C_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_1E1FFD875CA8014A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_A4F126E1D8DD44E9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_A4F126E1D8DD44E9_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_9B0B200A9F0A3A53(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_9B0B200A9F0A3A53_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_AB0E32D900C7A89E_OFFSET))(this);
	}

	::System::Int32 Method_2_D0D828ED30757AA6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_D0D828ED30757AA6_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::RPG::Client::Effect_MahJongAutoLayout* Method_2_F35BEF6AB354FAAA()
	{
		return ((::RPG::Client::Effect_MahJongAutoLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_F35BEF6AB354FAAA_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
