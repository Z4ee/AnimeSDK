#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8E10CE0)
#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x8E10700)
#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0x8E10C70)
#define CLASS_3_7723D43C6BC7FD6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8E107C0)
#define CLASS_3_7723D43C6BC7FD6B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8E10BD0)
#define CLASS_3_7723D43C6BC7FD6B__CTOR_OFFSET UNITYSDK_OFFSET(0x8E106F0)
#define CLASS_3_7723D43C6BC7FD6B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8E10D40)

inline static constexpr unsigned int Class_3_7723D43C6BC7FD6B_TypeDefinitionIndex = 43376;

class Class_3_7723D43C6BC7FD6B : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::RPG::GameCore::GridFightWaitDragRole* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
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
