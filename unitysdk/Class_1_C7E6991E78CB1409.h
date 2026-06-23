#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D0757B0CB855E47.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define CLASS_1_C7E6991E78CB1409_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x133F0240)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_84D0D8206680C04C_OFFSET UNITYSDK_OFFSET(0x133F01A0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x133F0100)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x133F0050)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x133F0190)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x133F00F0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x133F00A0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x133F0060)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_E4D16F178EB4AFF2_OFFSET UNITYSDK_OFFSET(0x133F0000)
#define CLASS_1_C7E6991E78CB1409__CTOR_OFFSET UNITYSDK_OFFSET(0x133EFFF0)

inline static constexpr unsigned int Class_1_C7E6991E78CB1409_TypeDefinitionIndex = 47723;

class Class_1_C7E6991E78CB1409 : public ::System::Object
{
public:
	::UnityEngine::Timeline::INapNotifyData* Field_1_0; // 0x10
	::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* Field_1_5; // 0x18
	::System::Double Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::Enum_3_5D0757B0CB855E47 Field_1_1; // 0x2C
	::System::Double Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E4D16F178EB4AFF2(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_E4D16F178EB4AFF2_OFFSET))(this, a1, a2);
	}

	::Enum_3_5D0757B0CB855E47 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_5D0757B0CB855E47(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_84D0D8206680C04C(::UnityEngine::Timeline::INapNotifyData* a1, ::Enum_3_5D0757B0CB855E47 a2, ::System::Double a3, ::System::Double a4, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*, ::Enum_3_5D0757B0CB855E47, ::System::Double, ::System::Double, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_84D0D8206680C04C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_5D0757B0CB855E47 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_5D0757B0CB855E47))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}
};
