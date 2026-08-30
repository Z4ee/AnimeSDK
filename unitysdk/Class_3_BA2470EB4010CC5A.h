#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

class Class_1_9E350A19BBA25CA5;

#define CLASS_3_BA2470EB4010CC5A_METHOD_3_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x159D54B0)
#define CLASS_3_BA2470EB4010CC5A_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x159D53B0)
#define CLASS_3_BA2470EB4010CC5A__CTOR_OFFSET UNITYSDK_OFFSET(0x159D5500)

inline static constexpr unsigned int Class_3_BA2470EB4010CC5A_TypeDefinitionIndex = 61165;

class Class_3_BA2470EB4010CC5A : public ::RPG::Client::WorkNode_1<::Class_1_9E350A19BBA25CA5*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2470EB4010CC5A__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2470EB4010CC5A_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void Method_3_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA2470EB4010CC5A_METHOD_3_F5447CD65612575D_OFFSET))(this);
	}
};
