#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_11A94C28E8E3ACC1_METHOD_2_4CB6FD4D059CB7FF_OFFSET UNITYSDK_OFFSET(0x11426620)
#define CLASS_2_11A94C28E8E3ACC1_METHOD_2_C575FF31A82D2229_OFFSET UNITYSDK_OFFSET(0x114267C0)
#define CLASS_2_11A94C28E8E3ACC1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114265D0)
#define CLASS_2_11A94C28E8E3ACC1_ONSTART_OFFSET UNITYSDK_OFFSET(0x11426590)
#define CLASS_2_11A94C28E8E3ACC1__CTOR_OFFSET UNITYSDK_OFFSET(0x11426610)

inline static constexpr unsigned int Class_2_11A94C28E8E3ACC1_TypeDefinitionIndex = 78315;

class Class_2_11A94C28E8E3ACC1 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4CB6FD4D059CB7FF(::System::UInt32 a1, ::System::Action_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_METHOD_2_4CB6FD4D059CB7FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C575FF31A82D2229(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action_3<::System::Boolean, ::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Action_3<::System::Boolean, ::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_11A94C28E8E3ACC1_METHOD_2_C575FF31A82D2229_OFFSET))(this, a1, a2, a3, a4);
	}
};
