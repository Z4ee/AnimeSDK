#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D0757B0CB855E47.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define CLASS_1_C7E6991E78CB1409_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1576CFD0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_84D0D8206680C04C_OFFSET UNITYSDK_OFFSET(0x1576CFF0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1576CED0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1576CFB0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1576CFE0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1576CFC0)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1576CF60)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1576CE90)
#define CLASS_1_C7E6991E78CB1409_METHOD_1_E4D16F178EB4AFF2_OFFSET UNITYSDK_OFFSET(0x1576CE40)
#define CLASS_1_C7E6991E78CB1409__CTOR_OFFSET UNITYSDK_OFFSET(0x1576CE30)

inline static constexpr unsigned int Class_1_C7E6991E78CB1409_TypeDefinitionIndex = 72763;

class Class_1_C7E6991E78CB1409 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* Field_1_6; // 0x10
	::UnityEngine::Timeline::INapNotifyData* Field_1_3; // 0x18
	::Enum_3_5D0757B0CB855E47 Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Double Field_1_0; // 0x28
	::System::Double Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E4D16F178EB4AFF2(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_E4D16F178EB4AFF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Enum_3_5D0757B0CB855E47 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_5D0757B0CB855E47(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_5D0757B0CB855E47 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_5D0757B0CB855E47))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_84D0D8206680C04C(::UnityEngine::Timeline::INapNotifyData* a1, ::Enum_3_5D0757B0CB855E47 a2, ::System::Double a3, ::System::Double a4, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::INapNotifyData*, ::Enum_3_5D0757B0CB855E47, ::System::Double, ::System::Double, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7E6991E78CB1409_METHOD_1_84D0D8206680C04C_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
