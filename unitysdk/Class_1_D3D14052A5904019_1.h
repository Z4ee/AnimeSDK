#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E75A6F37EAB58DE_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3D14052A5904019_1_GET_LONGTERMREWARDS_OFFSET UNITYSDK_OFFSET(0x11763300)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x11763110)
#define CLASS_1_D3D14052A5904019_1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11763290)
#define CLASS_1_D3D14052A5904019_1_SET_LONGTERMREWARDS_OFFSET UNITYSDK_OFFSET(0x11763310)
#define CLASS_1_D3D14052A5904019_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11763320)

inline static constexpr unsigned int Class_1_D3D14052A5904019_1_TypeDefinitionIndex = 61680;

class Class_1_D3D14052A5904019_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>* _LongTermRewards_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>* get_LongTermRewards()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_GET_LONGTERMREWARDS_OFFSET))(this);
	}

	::System::Void set_LongTermRewards(::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1_SET_LONGTERMREWARDS_OFFSET))(this, value);
	}
};
