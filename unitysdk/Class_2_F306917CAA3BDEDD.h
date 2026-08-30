#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropRewardPreview; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_F306917CAA3BDEDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AA9080)
#define CLASS_2_F306917CAA3BDEDD_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x19AA9790)
#define CLASS_2_F306917CAA3BDEDD_METHOD_2_B22F10819A4B15A6_OFFSET UNITYSDK_OFFSET(0x19AA93F0)
#define CLASS_2_F306917CAA3BDEDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AA9140)
#define CLASS_2_F306917CAA3BDEDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19AA96E0)
#define CLASS_2_F306917CAA3BDEDD_TICK_OFFSET UNITYSDK_OFFSET(0x19AA9730)
#define CLASS_2_F306917CAA3BDEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA9070)

inline static constexpr unsigned int Class_2_F306917CAA3BDEDD_TypeDefinitionIndex = 53438;

class Class_2_F306917CAA3BDEDD : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* BIJFBJEJAEN; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PropRewardPreview* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRewardPreview* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRewardPreview*))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B22F10819A4B15A6(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_METHOD_2_B22F10819A4B15A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F306917CAA3BDEDD_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
