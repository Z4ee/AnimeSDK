#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_71ECD705C8627A9D;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimContainerDynamicValueChange; }

#define CLASS_3_597B025373E86F6F_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xBF0D3F0)
#define CLASS_3_597B025373E86F6F_METHOD_3_7C1B988661980EFC_OFFSET UNITYSDK_OFFSET(0xBF0D1D0)
#define CLASS_3_597B025373E86F6F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF0CA70)
#define CLASS_3_597B025373E86F6F__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0C830)
#define CLASS_3_597B025373E86F6F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBF0CF10)
#define CLASS_3_597B025373E86F6F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF0CAF0)
#define CLASS_3_597B025373E86F6F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF0CD00)

inline static constexpr unsigned int Class_3_597B025373E86F6F_TypeDefinitionIndex = 53169;

class Class_3_597B025373E86F6F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*>
{
public:
	::Class_2_71ECD705C8627A9D* HIJOAMLICNE; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void Method_3_7C1B988661980EFC(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F_METHOD_3_7C1B988661980EFC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_597B025373E86F6F_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}
};
