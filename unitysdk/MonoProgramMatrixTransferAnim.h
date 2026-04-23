#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoProgramMatrixTransferAnim_PCGUnit;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x9339B60)
#define MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x93393B0)
#define MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x93396E0)
#define MONOPROGRAMMATRIXTRANSFERANIM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x933A520)
#define MONOPROGRAMMATRIXTRANSFERANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x933A570)
#define MONOPROGRAMMATRIXTRANSFERANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x933A5C0)

inline static constexpr unsigned int MonoProgramMatrixTransferAnim_TypeDefinitionIndex = 44255;

class MonoProgramMatrixTransferAnim : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MonoProgramMatrixTransferAnim_PCGUnit*>* UnitList; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PaddingList; // 0x20
	::UnityEngine::GameObject* TargetGO; // 0x28
	::System::Single TickTime; // 0x30
	::System::Single UnitSize; // 0x34
	::System::Int32 BackdropThickness; // 0x38
	::System::Single CrossDistance; // 0x3C
	::System::Single Field_5_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_5_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_5_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_UPDATE_OFFSET))(this);
	}
};
