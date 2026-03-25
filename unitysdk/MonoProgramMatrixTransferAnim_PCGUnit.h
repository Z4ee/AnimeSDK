#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGAction_ActionType.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeDrp.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeFace.h"
#include "unitysdk/MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeLR.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MonoProgramMatrixTransferAnim_PCGAction;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_18D3A646DDD61291_OFFSET UNITYSDK_OFFSET(0x88BD8A0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_2AD04807B794EEB6_OFFSET UNITYSDK_OFFSET(0x88BE0F0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x88BD460)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x88BE4D0)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x88BD750)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_FDC478E941B91C50_OFFSET UNITYSDK_OFFSET(0x88BE520)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x88BE780)
#define MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x88BE770)

inline static constexpr unsigned int MonoProgramMatrixTransferAnim_PCGUnit_TypeDefinitionIndex = 38374;

class MonoProgramMatrixTransferAnim_PCGUnit : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_PosLUT()
	{
		return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MonoProgramMatrixTransferAnim_PCGUnit_TypeDefinitionIndex)->GetStaticField(0x48F70);
	}
	::MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeLR StartPosLR; // 0x10
	::MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeFace StartPosFace; // 0x14
	::MonoProgramMatrixTransferAnim_PCGUnit_StartPosTypeDrp StartPosDrop; // 0x18
	::System::Collections::Generic::List_1<::MonoProgramMatrixTransferAnim_PCGAction*>* Actions; // 0x20
	::MonoProgramMatrixTransferAnim_PCGAction_ActionType _LastAction; // 0x28
	::System::Int32 _LastTickDuringAction; // 0x2C
	::System::Int32 _SelfTickID; // 0x30
	::System::Int32 _SelfActionID; // 0x34
	::UnityEngine::Vector4 _LastPos; // 0x38
	::UnityEngine::Vector4 _CurrentPos; // 0x48
	::UnityEngine::GameObject* TargetGO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2AD04807B794EEB6(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_2AD04807B794EEB6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_1_FDC478E941B91C50(::System::Single a1, ::UnityEngine::Vector4 a2, ::MonoProgramMatrixTransferAnim_PCGAction_ActionType a3)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4, ::MonoProgramMatrixTransferAnim_PCGAction_ActionType))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_FDC478E941B91C50_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_1_18D3A646DDD61291(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_PCGUNIT_METHOD_1_18D3A646DDD61291_OFFSET))(this, a1, a2, a3, a4);
	}
};
