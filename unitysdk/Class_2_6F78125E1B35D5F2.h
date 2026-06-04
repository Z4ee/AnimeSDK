#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6F78125E1B35D5F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACF89E0)
#define CLASS_2_6F78125E1B35D5F2_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xACF8BB0)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xACF9070)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xACF8A30)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xACF9500)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xACF8D60)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xACF8D20)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xACF95B0)
#define CLASS_2_6F78125E1B35D5F2_ONSKIP_OFFSET UNITYSDK_OFFSET(0xACF94B0)
#define CLASS_2_6F78125E1B35D5F2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACF8BC0)
#define CLASS_2_6F78125E1B35D5F2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACF9400)
#define CLASS_2_6F78125E1B35D5F2_TICK_OFFSET UNITYSDK_OFFSET(0xACF9450)
#define CLASS_2_6F78125E1B35D5F2__CTOR_OFFSET UNITYSDK_OFFSET(0xACF89D0)

inline static constexpr unsigned int Class_2_6F78125E1B35D5F2_TypeDefinitionIndex = 54463;

class Class_2_6F78125E1B35D5F2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_3; // 0x20
	::RPG::GameCore::PlayMissionTalk* Field_2_4; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMissionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F78125E1B35D5F2_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}
};
