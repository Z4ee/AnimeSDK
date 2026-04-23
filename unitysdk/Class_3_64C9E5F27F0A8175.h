#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class GridFightWaitDragConsumable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_64C9E5F27F0A8175_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11BEFFE0)
#define CLASS_3_64C9E5F27F0A8175_METHOD_3_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x11BEF690)
#define CLASS_3_64C9E5F27F0A8175_METHOD_3_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0x11BEFF70)
#define CLASS_3_64C9E5F27F0A8175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11BEF780)
#define CLASS_3_64C9E5F27F0A8175_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BEFED0)
#define CLASS_3_64C9E5F27F0A8175__CTOR_OFFSET UNITYSDK_OFFSET(0x11BEF680)
#define CLASS_3_64C9E5F27F0A8175___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11BF0040)

inline static constexpr unsigned int Class_3_64C9E5F27F0A8175_TypeDefinitionIndex = 49373;

class Class_3_64C9E5F27F0A8175 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::GridFightWaitDragConsumable* Field_3_1; // 0x28
	::RPG::GameCore::TaskContext* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragConsumable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_METHOD_3_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CE962969F77540FC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_METHOD_3_CE962969F77540FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
