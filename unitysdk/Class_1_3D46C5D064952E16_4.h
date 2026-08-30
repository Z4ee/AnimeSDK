#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E10154A6F87051D0;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_3D46C5D064952E16_4_METHOD_1_BB93C69D78C65A48_OFFSET UNITYSDK_OFFSET(0xBD5B070)
#define CLASS_1_3D46C5D064952E16_4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD5AD70)
#define CLASS_1_3D46C5D064952E16_4_METHOD_1_F73BF1E388CA097B_OFFSET UNITYSDK_OFFSET(0xBD5ADC0)
#define CLASS_1_3D46C5D064952E16_4__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5AD60)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_4_TypeDefinitionIndex = 77257;

class Class_1_3D46C5D064952E16_4 : public ::System::Object
{
public:
	::Class_2_E10154A6F87051D0* FGHLCBFGPEE; // 0x10

	::System::Void _ctor(::Class_2_E10154A6F87051D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E10154A6F87051D0*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_F73BF1E388CA097B(::System::Object* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_4_METHOD_1_F73BF1E388CA097B_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_BB93C69D78C65A48()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_4_METHOD_1_BB93C69D78C65A48_OFFSET))(this);
	}
};
