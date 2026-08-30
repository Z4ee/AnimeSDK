#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_PossessionConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BatchAnimationClipGroup;
class Class_1_6DBA34B103B833EA;
class Class_1_B1E1C7B4D86C5025;
class Class_2_C26FCB07100301D1;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client::Subway { class AirlineSubwayWay_MemberConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_845DEA7341FE0085_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191B5850)
#define CLASS_1_845DEA7341FE0085_GET_NAME_OFFSET UNITYSDK_OFFSET(0x191B6560)
#define CLASS_1_845DEA7341FE0085_METHOD_1_1EBD2D0DB03F9F93_OFFSET UNITYSDK_OFFSET(0x191B6030)
#define CLASS_1_845DEA7341FE0085_METHOD_1_31B027CD9E814520_OFFSET UNITYSDK_OFFSET(0x191B5BE0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_3550F4B6813E2C4C_OFFSET UNITYSDK_OFFSET(0x191B62F0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_7C3D40820FAF9F39_OFFSET UNITYSDK_OFFSET(0x191B6440)
#define CLASS_1_845DEA7341FE0085_METHOD_1_93FF4A67C5480165_OFFSET UNITYSDK_OFFSET(0x191B6510)
#define CLASS_1_845DEA7341FE0085_METHOD_1_99F7B076250CED3D_OFFSET UNITYSDK_OFFSET(0x191B59D0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_A1AC9859169A3EA9_OFFSET UNITYSDK_OFFSET(0x191B60A0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_B185BCCE8956BC4D_OFFSET UNITYSDK_OFFSET(0x191B5940)
#define CLASS_1_845DEA7341FE0085_METHOD_1_E896B25A4DCD9F75_OFFSET UNITYSDK_OFFSET(0x191B6130)
#define CLASS_1_845DEA7341FE0085_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x191B6570)
#define CLASS_1_845DEA7341FE0085__CTOR_OFFSET UNITYSDK_OFFSET(0x191B5510)

inline static constexpr unsigned int Class_1_845DEA7341FE0085_TypeDefinitionIndex = 80834;

class Class_1_845DEA7341FE0085 : public ::System::Object
{
public:
	::BatchAnimationClipGroup* MGGDIMNIJBA; // 0x10
	::RPG::Client::BatchAnimationAttachPointMapping* KHOMKIPCJCL; // 0x18
	::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig>* FNHDMCJGKBK; // 0x20
	::Class_1_B1E1C7B4D86C5025* AAPNELELMGG; // 0x28
	::Class_1_6DBA34B103B833EA* KGCNPIEDOCA; // 0x30
	::System::String* KNLMEPAKCOJ; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* GMGLFMEEDAA; // 0x40
	::System::String* _Name_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MOONIKLHAFO; // 0x50
	::RPG::Client::Subway::AirlineSubwayWay_MemberConfig* LBIGFKPLLPN; // 0x58
	::System::Boolean OLEEMHJAJOI; // 0x60

	::System::Void _ctor(::Class_1_6DBA34B103B833EA* a1, ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DBA34B103B833EA*, ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_B185BCCE8956BC4D(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_B185BCCE8956BC4D_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_99F7B076250CED3D(::System::String* a1)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_99F7B076250CED3D_OFFSET))(this, a1);
	}

	::Class_2_C26FCB07100301D1* Method_1_31B027CD9E814520(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2)
	{
		return ((::Class_2_C26FCB07100301D1*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_31B027CD9E814520_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BAPartVariantRes* Method_1_1EBD2D0DB03F9F93(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_1EBD2D0DB03F9F93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1AC9859169A3EA9(::RPG::Client::BAPartVariantRes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_A1AC9859169A3EA9_OFFSET))(this, a1);
	}

	::RPG::Client::AssemNPC* Method_1_E896B25A4DCD9F75()
	{
		return ((::RPG::Client::AssemNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_E896B25A4DCD9F75_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3550F4B6813E2C4C(::System::String* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_3550F4B6813E2C4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C3D40820FAF9F39(::Class_1_B1E1C7B4D86C5025* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1E1C7B4D86C5025*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_7C3D40820FAF9F39_OFFSET))(this, a1);
	}

	::System::Void Method_1_93FF4A67C5480165(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_93FF4A67C5480165_OFFSET))(this, a1);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_GET_NAME_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
