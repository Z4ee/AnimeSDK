#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

namespace RPG::GameCore { class GridFightWaitDragEquip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E57E9F7EA24A828_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A2FEA0)
#define CLASS_3_9E57E9F7EA24A828_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x10A2F8D0)
#define CLASS_3_9E57E9F7EA24A828_METHOD_3_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0x10A2FE30)
#define CLASS_3_9E57E9F7EA24A828_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A2F990)
#define CLASS_3_9E57E9F7EA24A828_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A2FD90)
#define CLASS_3_9E57E9F7EA24A828__CTOR_OFFSET UNITYSDK_OFFSET(0x10A2F8C0)
#define CLASS_3_9E57E9F7EA24A828___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A2FF00)

inline static constexpr unsigned int Class_3_9E57E9F7EA24A828_TypeDefinitionIndex = 43375;

class Class_3_9E57E9F7EA24A828 : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::GridFightWaitDragEquip* Field_3_1; // 0x28
	::RPG::GameCore::TaskContext* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CE962969F77540FC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_METHOD_3_CE962969F77540FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
