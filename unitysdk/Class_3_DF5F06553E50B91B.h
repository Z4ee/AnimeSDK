#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;

#define CLASS_3_DF5F06553E50B91B_METHOD_3_850A1E8990DC3F3C_OFFSET UNITYSDK_OFFSET(0x125B5390)
#define CLASS_3_DF5F06553E50B91B_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x125B5740)
#define CLASS_3_DF5F06553E50B91B_ONEVENT_OFFSET UNITYSDK_OFFSET(0x125B52D0)
#define CLASS_3_DF5F06553E50B91B__CCTOR_OFFSET UNITYSDK_OFFSET(0x125B51D0)
#define CLASS_3_DF5F06553E50B91B__CTOR_OFFSET UNITYSDK_OFFSET(0x125B56B0)

inline static constexpr unsigned int Class_3_DF5F06553E50B91B_TypeDefinitionIndex = 79754;

class Class_3_DF5F06553E50B91B : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_DF5F06553E50B91B*>
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DF5F06553E50B91B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF5F06553E50B91B__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_DF5F06553E50B91B_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_DF5F06553E50B91B_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_850A1E8990DC3F3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_DF5F06553E50B91B_METHOD_3_850A1E8990DC3F3C_OFFSET))(this, a1);
	}
};
