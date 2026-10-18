#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_526;
class Class_1_34489C07F511839D;

#define CLASS_1_D0AA327C7E91A511_GET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB607300)
#define CLASS_1_D0AA327C7E91A511_GET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0xB6072E0)
#define CLASS_1_D0AA327C7E91A511_SET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB607310)
#define CLASS_1_D0AA327C7E91A511_SET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0xB6072F0)
#define CLASS_1_D0AA327C7E91A511__CTOR_OFFSET UNITYSDK_OFFSET(0xB607320)

inline static constexpr unsigned int Class_1_D0AA327C7E91A511_TypeDefinitionIndex = 51924;

class Class_1_D0AA327C7E91A511 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_526* _AvatarRowDataProvider_k__BackingField; // 0x10
	::Class_1_34489C07F511839D* _Prototype_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AA327C7E91A511__CTOR_OFFSET))(this);
	}

	::Class_1_34489C07F511839D* get_Prototype()
	{
		return ((::Class_1_34489C07F511839D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AA327C7E91A511_GET_PROTOTYPE_OFFSET))(this);
	}

	::System::Void set_Prototype(::Class_1_34489C07F511839D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34489C07F511839D*))((::PBYTE)hIl2Cpp + CLASS_1_D0AA327C7E91A511_SET_PROTOTYPE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_526* get_AvatarRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_526*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0AA327C7E91A511_GET_AVATARROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_AvatarRowDataProvider(::Class_0_16E4307DCC419505_526* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_526*))((::PBYTE)hIl2Cpp + CLASS_1_D0AA327C7E91A511_SET_AVATARROWDATAPROVIDER_OFFSET))(this, a1);
	}
};
