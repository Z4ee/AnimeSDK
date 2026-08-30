#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoProgramMatrixTransferAnim_PCGUnit;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xBBC4090)
#define MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xBBC4500)
#define MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0xBBC3D30)
#define MONOPROGRAMMATRIXTRANSFERANIM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBBC4E50)
#define MONOPROGRAMMATRIXTRANSFERANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0xBBC4EA0)
#define MONOPROGRAMMATRIXTRANSFERANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC4EF0)

inline static constexpr unsigned int MonoProgramMatrixTransferAnim_TypeDefinitionIndex = 47970;

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
	::System::Single FJNMBEPPOCO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_5_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_5_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOPROGRAMMATRIXTRANSFERANIM_METHOD_5_33E2FA8E6403B93D_OFFSET))(this);
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
