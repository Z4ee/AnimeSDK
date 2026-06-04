#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE45A7F0)
#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xE459E10)
#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0xE45A780)
#define CLASS_3_7723D43C6BC7FD6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE459F00)
#define CLASS_3_7723D43C6BC7FD6B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE45A6E0)
#define CLASS_3_7723D43C6BC7FD6B__CTOR_OFFSET UNITYSDK_OFFSET(0xE459E00)
#define CLASS_3_7723D43C6BC7FD6B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE45A850)

inline static constexpr unsigned int Class_3_7723D43C6BC7FD6B_TypeDefinitionIndex = 50042;

class Class_3_7723D43C6BC7FD6B : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::GridFightWaitDragRole* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_METHOD_3_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CE962969F77540FC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_METHOD_3_CE962969F77540FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
