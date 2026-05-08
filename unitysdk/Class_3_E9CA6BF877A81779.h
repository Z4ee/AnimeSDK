#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F3ED31AAEDA15B0;
class Class_1_B56AEEA9EF6A2890;
class Class_4_DA19DD65175B97CF;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E9CA6BF877A81779_METHOD_3_0B9873702AAF54CB_OFFSET UNITYSDK_OFFSET(0x18EA3460)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_102F0330C791FBB8_OFFSET UNITYSDK_OFFSET(0x18EA3CE0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_1832FA2ECF2B8B19_OFFSET UNITYSDK_OFFSET(0x18EA6120)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_2F6B39CFFD11B5C8_OFFSET UNITYSDK_OFFSET(0x18EA4C60)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18EA38F0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x18EA3FF0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_3AF977ABBC8283D6_OFFSET UNITYSDK_OFFSET(0x18EA5540)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_59D381F476BCC9C6_OFFSET UNITYSDK_OFFSET(0x18EA51C0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_65736AD7B729F7DE_OFFSET UNITYSDK_OFFSET(0x18EA5A10)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_8139402DBB4CC472_OFFSET UNITYSDK_OFFSET(0x18EA3E80)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_89ACC0CD3A3AFD3F_OFFSET UNITYSDK_OFFSET(0x18EA4F60)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_8A594F69DEE6A9FA_OFFSET UNITYSDK_OFFSET(0x18EA5D80)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x18EA4190)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_1_OFFSET UNITYSDK_OFFSET(0x18EA58A0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_OFFSET UNITYSDK_OFFSET(0x18EA4AF0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x18EA5BE0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_AADADE2E7E712CBF_OFFSET UNITYSDK_OFFSET(0x18EA4330)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_AF5E3F766FB77A8F_OFFSET UNITYSDK_OFFSET(0x18EA56F0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_C5A6990AFE5F2266_OFFSET UNITYSDK_OFFSET(0x18EA4820)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x18EA62C0)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_CEC21AA00737347E_OFFSET UNITYSDK_OFFSET(0x18EA3990)
#define CLASS_3_E9CA6BF877A81779_METHOD_3_F890EAECC1AF6123_OFFSET UNITYSDK_OFFSET(0x18EA5F70)
#define CLASS_3_E9CA6BF877A81779__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA3280)

inline static constexpr unsigned int Class_3_E9CA6BF877A81779_TypeDefinitionIndex = 38477;

class Class_3_E9CA6BF877A81779 : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHollowChessPieceParticle*>* Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::UIHollowChessPieceParticle*>* Field_3_3; // 0x38
	::Class_1_B56AEEA9EF6A2890* Field_3_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* Field_3_2; // 0x48

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_0B9873702AAF54CB(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_0B9873702AAF54CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_3_CEC21AA00737347E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_CEC21AA00737347E_OFFSET))(this, a1);
	}

	::System::String* Method_3_102F0330C791FBB8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_102F0330C791FBB8_OFFSET))(this);
	}

	::System::Void Method_3_8139402DBB4CC472(::Class_4_DA19DD65175B97CF* a1, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a2, ::MoleMole::UIHollowChessPieceParticle_TransformType a3, ::System::Nullable_1<::Foundation::Unreal::FTransform> a4, ::MoleMole::UIHollowChessPieceParticle* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>, ::MoleMole::UIHollowChessPieceParticle*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_8139402DBB4CC472_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_3_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Void Method_3_932BC234D35144E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_932BC234D35144E8_OFFSET))(this);
	}

	::System::Void Method_3_AADADE2E7E712CBF(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_AADADE2E7E712CBF_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_2F6B39CFFD11B5C8(::System::String* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2, ::Class_4_DA19DD65175B97CF* a3, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a4, ::MoleMole::UIHollowChessPieceParticle_TransformType a5, ::System::Nullable_1<::Foundation::Unreal::FTransform> a6)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::MoleMole::Config::HollowChessboardParticleConfig*, ::Class_4_DA19DD65175B97CF*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_2F6B39CFFD11B5C8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_89ACC0CD3A3AFD3F(::System::String* a1, ::Class_4_DA19DD65175B97CF* a2, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a3, ::MoleMole::UIHollowChessPieceParticle_TransformType a4, ::System::Nullable_1<::Foundation::Unreal::FTransform> a5)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::Class_4_DA19DD65175B97CF*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_89ACC0CD3A3AFD3F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_59D381F476BCC9C6(::System::Boolean a1, ::Class_4_DA19DD65175B97CF* a2, ::System::Boolean a3, ::MoleMole::UIHollowChessPieceParticle* a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_4_DA19DD65175B97CF*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_59D381F476BCC9C6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_3_C5A6990AFE5F2266(::MoleMole::HollowChessPieceSizeType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::HollowChessPieceSizeType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_C5A6990AFE5F2266_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_3AF977ABBC8283D6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_3AF977ABBC8283D6_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_9CD4C99A95D56585(::System::String* a1, ::System::Boolean a2, ::Class_4_DA19DD65175B97CF* a3, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_TransformType a6, ::System::Nullable_1<::Foundation::Unreal::FTransform> a7, ::System::Single a8, ::System::Boolean a9)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::System::Boolean, ::Class_4_DA19DD65175B97CF*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_AF5E3F766FB77A8F(::Class_1_B56AEEA9EF6A2890* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B56AEEA9EF6A2890*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_AF5E3F766FB77A8F_OFFSET))(this, a1);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_9CD4C99A95D56585_1(::System::String* a1, ::System::Boolean a2, ::Class_4_DA19DD65175B97CF* a3, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_TransformType a6, ::System::Nullable_1<::Foundation::Unreal::FTransform> a7, ::System::Single a8, ::System::Boolean a9)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::System::Boolean, ::Class_4_DA19DD65175B97CF*, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_9CD4C99A95D56585_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_3_65736AD7B729F7DE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_65736AD7B729F7DE_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::MoleMole::UIHollowChessPieceParticle* Method_3_8A594F69DEE6A9FA(::System::String* a1, ::System::Boolean a2, ::Class_4_DA19DD65175B97CF* a3, ::System::Boolean a4, ::MoleMole::UIHollowChessPieceParticle_TransformType a5, ::System::Nullable_1<::Foundation::Unreal::FTransform> a6)
	{
		return ((::MoleMole::UIHollowChessPieceParticle*(*)(::PVOID, ::System::String*, ::System::Boolean, ::Class_4_DA19DD65175B97CF*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_8A594F69DEE6A9FA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_F890EAECC1AF6123(::Class_1_5F3ED31AAEDA15B0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F3ED31AAEDA15B0*))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_F890EAECC1AF6123_OFFSET))(this, a1);
	}

	::System::Void Method_3_1832FA2ECF2B8B19(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_1832FA2ECF2B8B19_OFFSET))(this, a1);
	}

	::System::Void Method_3_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CA6BF877A81779_METHOD_3_C8E2469222842786_OFFSET))(this);
	}
};
