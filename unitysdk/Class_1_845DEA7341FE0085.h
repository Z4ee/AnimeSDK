#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_PossessionConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BatchAnimationClipGroup;
class Class_1_142F37181E3E9CC1;
class Class_1_72E008EEEC426B7A;
class Class_2_C26FCB07100301D1;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client::Subway { class AirlineSubwayWay_MemberConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_845DEA7341FE0085_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9209170)
#define CLASS_1_845DEA7341FE0085_GET_NAME_OFFSET UNITYSDK_OFFSET(0x920A020)
#define CLASS_1_845DEA7341FE0085_METHOD_1_0D6B4040319D9F4D_OFFSET UNITYSDK_OFFSET(0x92092A0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_1EBD2D0DB03F9F93_OFFSET UNITYSDK_OFFSET(0x9209B60)
#define CLASS_1_845DEA7341FE0085_METHOD_1_3550F4B6813E2C4C_OFFSET UNITYSDK_OFFSET(0x9209DD0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_7C3D40820FAF9F39_OFFSET UNITYSDK_OFFSET(0x9209F30)
#define CLASS_1_845DEA7341FE0085_METHOD_1_93FF4A67C5480165_OFFSET UNITYSDK_OFFSET(0x9209FD0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_A1AC9859169A3EA9_OFFSET UNITYSDK_OFFSET(0x9209BD0)
#define CLASS_1_845DEA7341FE0085_METHOD_1_B185BCCE8956BC4D_OFFSET UNITYSDK_OFFSET(0x9209210)
#define CLASS_1_845DEA7341FE0085_METHOD_1_D54C3A61DD6B125C_OFFSET UNITYSDK_OFFSET(0x9209C60)
#define CLASS_1_845DEA7341FE0085_METHOD_1_DEF2E6F32935EDBB_OFFSET UNITYSDK_OFFSET(0x9209440)
#define CLASS_1_845DEA7341FE0085_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x920A030)
#define CLASS_1_845DEA7341FE0085__CTOR_OFFSET UNITYSDK_OFFSET(0x9208E40)

inline static constexpr unsigned int Class_1_845DEA7341FE0085_TypeDefinitionIndex = 72581;

class Class_1_845DEA7341FE0085 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_1_9; // 0x10
	::RPG::Client::Subway::AirlineSubwayWay_MemberConfig* Field_1_2; // 0x18
	::System::String* _Name_k__BackingField; // 0x20
	::RPG::Client::BatchAnimationAttachPointMapping* Field_1_4; // 0x28
	::BatchAnimationClipGroup* Field_1_6; // 0x30
	::Class_1_72E008EEEC426B7A* Field_1_1; // 0x38
	::Class_1_142F37181E3E9CC1* Field_1_3; // 0x40
	::Il2CppArray<::RPG::Client::Subway::AirlineSubwayWay_PossessionConfig>* Field_1_10; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_8; // 0x50
	::System::String* Field_1_5; // 0x58
	::System::Boolean Field_1_7; // 0x60

	::System::Void _ctor(::Class_1_72E008EEEC426B7A* a1, ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72E008EEEC426B7A*, ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_B185BCCE8956BC4D(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_B185BCCE8956BC4D_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_0D6B4040319D9F4D(::System::String* a1)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_0D6B4040319D9F4D_OFFSET))(this, a1);
	}

	::Class_2_C26FCB07100301D1* Method_1_DEF2E6F32935EDBB(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2)
	{
		return ((::Class_2_C26FCB07100301D1*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_DEF2E6F32935EDBB_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BAPartVariantRes* Method_1_1EBD2D0DB03F9F93(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_1EBD2D0DB03F9F93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1AC9859169A3EA9(::RPG::Client::BAPartVariantRes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_A1AC9859169A3EA9_OFFSET))(this, a1);
	}

	::RPG::Client::AssemNPC* Method_1_D54C3A61DD6B125C()
	{
		return ((::RPG::Client::AssemNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_D54C3A61DD6B125C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3550F4B6813E2C4C(::System::String* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_3550F4B6813E2C4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C3D40820FAF9F39(::Class_1_142F37181E3E9CC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_142F37181E3E9CC1*))((::PBYTE)hIl2Cpp + CLASS_1_845DEA7341FE0085_METHOD_1_7C3D40820FAF9F39_OFFSET))(this, a1);
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
