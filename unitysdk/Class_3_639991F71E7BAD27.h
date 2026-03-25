#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_155E45DE622FEC05_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_639991F71E7BAD27_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE470C10)
#define CLASS_3_639991F71E7BAD27_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE4712C0)
#define CLASS_3_639991F71E7BAD27__CTOR_OFFSET UNITYSDK_OFFSET(0xE470BE0)
#define CLASS_3_639991F71E7BAD27___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE471310)

inline static constexpr unsigned int Class_3_639991F71E7BAD27_TypeDefinitionIndex = 44183;

class Class_3_639991F71E7BAD27 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_155E45DE622FEC05_1*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_155E45DE622FEC05_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_155E45DE622FEC05_1*))((::PBYTE)hIl2Cpp + CLASS_3_639991F71E7BAD27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_639991F71E7BAD27_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_639991F71E7BAD27_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_639991F71E7BAD27___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
