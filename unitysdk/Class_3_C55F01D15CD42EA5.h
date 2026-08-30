#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BindPropsCablelines; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_C55F01D15CD42EA5_METHOD_3_C237F448E0A876F0_OFFSET UNITYSDK_OFFSET(0x157463F0)
#define CLASS_3_C55F01D15CD42EA5_METHOD_3_E99C4967A0D3080D_OFFSET UNITYSDK_OFFSET(0x157467D0)
#define CLASS_3_C55F01D15CD42EA5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157461F0)
#define CLASS_3_C55F01D15CD42EA5__CTOR_OFFSET UNITYSDK_OFFSET(0x157461C0)

inline static constexpr unsigned int Class_3_C55F01D15CD42EA5_TypeDefinitionIndex = 58111;

class Class_3_C55F01D15CD42EA5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BindPropsCablelines*>
{
public:
	::System::UInt32 PEEFHNHDBMF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindPropsCablelines* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindPropsCablelines*))((::PBYTE)hIl2Cpp + CLASS_3_C55F01D15CD42EA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C55F01D15CD42EA5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_C237F448E0A876F0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C55F01D15CD42EA5_METHOD_3_C237F448E0A876F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_E99C4967A0D3080D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C55F01D15CD42EA5_METHOD_3_E99C4967A0D3080D_OFFSET))(this, a1);
	}
};
