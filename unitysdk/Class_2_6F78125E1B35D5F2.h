#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6F78125E1B35D5F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0D82E0)
#define CLASS_2_6F78125E1B35D5F2_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC0D84B0)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xC0D8970)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xC0D8330)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xC0D8E00)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xC0D8660)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC0D8620)
#define CLASS_2_6F78125E1B35D5F2_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xC0D8EB0)
#define CLASS_2_6F78125E1B35D5F2_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC0D8DB0)
#define CLASS_2_6F78125E1B35D5F2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0D84C0)
#define CLASS_2_6F78125E1B35D5F2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0D8D00)
#define CLASS_2_6F78125E1B35D5F2_TICK_OFFSET UNITYSDK_OFFSET(0xC0D8D50)
#define CLASS_2_6F78125E1B35D5F2__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D82D0)

inline static constexpr unsigned int Class_2_6F78125E1B35D5F2_TypeDefinitionIndex = 58418;

class Class_2_6F78125E1B35D5F2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* ENEFLIPMBOK; // 0x0
	// static const ::System::String* PFDEFDGCFEB; // 0x0
	::RPG::GameCore::PlayMissionTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* BMDHEPMLBGJ; // 0x28

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
