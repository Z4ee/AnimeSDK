#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_22A16748E7A22389_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA85A30)
#define CLASS_3_22A16748E7A22389_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA85B90)
#define CLASS_3_22A16748E7A22389__CTOR_OFFSET UNITYSDK_OFFSET(0xAA85A10)
#define CLASS_3_22A16748E7A22389___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA85F50)

inline static constexpr unsigned int Class_3_22A16748E7A22389_TypeDefinitionIndex = 48505;

class Class_3_22A16748E7A22389 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*>
{
public:
	::RPG::GameCore::PropComponent* Field_3_1; // 0x28
	::System::Int32 Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_3_22A16748E7A22389__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22A16748E7A22389_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22A16748E7A22389_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22A16748E7A22389___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
