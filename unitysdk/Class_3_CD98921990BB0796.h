#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class RefreshMapRotationVolumeUsable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CD98921990BB0796_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACEA620)
#define CLASS_3_CD98921990BB0796_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACEA690)
#define CLASS_3_CD98921990BB0796__CTOR_OFFSET UNITYSDK_OFFSET(0xACEA5F0)
#define CLASS_3_CD98921990BB0796___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACEA810)

inline static constexpr unsigned int Class_3_CD98921990BB0796_TypeDefinitionIndex = 48873;

class Class_3_CD98921990BB0796 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshMapRotationVolumeUsable*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*))((::PBYTE)hIl2Cpp + CLASS_3_CD98921990BB0796__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD98921990BB0796_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD98921990BB0796_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD98921990BB0796___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
