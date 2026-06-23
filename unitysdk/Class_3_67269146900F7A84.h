#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace MoleMole::Config { class ConfigPatrolPointSet; }
namespace MoleMole::Config { class StreamingGamePatrolMoveTrait; }
namespace System { class String; }

#define CLASS_3_67269146900F7A84_METHOD_3_4B8F9BAAE863CACF_OFFSET UNITYSDK_OFFSET(0x1A23BF60)
#define CLASS_3_67269146900F7A84_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A23BF40)
#define CLASS_3_67269146900F7A84_METHOD_3_BF06AEBE10D52DDA_OFFSET UNITYSDK_OFFSET(0x1A23BF70)
#define CLASS_3_67269146900F7A84_METHOD_3_FB3E0D846CB2B340_OFFSET UNITYSDK_OFFSET(0x1A23BF50)
#define CLASS_3_67269146900F7A84_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A23BE60)
#define CLASS_3_67269146900F7A84__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23BEB0)

inline static constexpr unsigned int Class_3_67269146900F7A84_TypeDefinitionIndex = 80101;

class Class_3_67269146900F7A84 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_67269146900F7A84*>
{
public:
	::MoleMole::Config::StreamingGamePatrolMoveTrait* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67269146900F7A84__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67269146900F7A84_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67269146900F7A84_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::MoleMole::Config::StreamingGamePatrolMoveTrait* Method_3_FB3E0D846CB2B340()
	{
		return ((::MoleMole::Config::StreamingGamePatrolMoveTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67269146900F7A84_METHOD_3_FB3E0D846CB2B340_OFFSET))(this);
	}

	::System::Void Method_3_4B8F9BAAE863CACF(::MoleMole::Config::StreamingGamePatrolMoveTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StreamingGamePatrolMoveTrait*))((::PBYTE)hIl2Cpp + CLASS_3_67269146900F7A84_METHOD_3_4B8F9BAAE863CACF_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigPatrolPointSet* Method_3_BF06AEBE10D52DDA(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigPatrolPointSet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_67269146900F7A84_METHOD_3_BF06AEBE10D52DDA_OFFSET))(this, a1);
	}
};
