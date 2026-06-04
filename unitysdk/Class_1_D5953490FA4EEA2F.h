#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DF4B2E46FEC5823B;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_METHOD_1_3EACA5870CDCB012_OFFSET UNITYSDK_OFFSET(0x1422B450)
#define CLASS_1_D5953490FA4EEA2F_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1422B3F0)
#define CLASS_1_D5953490FA4EEA2F_METHOD_1_538009D0B11159B3_OFFSET UNITYSDK_OFFSET(0x1422B4E0)
#define CLASS_1_D5953490FA4EEA2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1422B460)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_TypeDefinitionIndex = 58557;

class Class_1_D5953490FA4EEA2F : public ::System::Object
{
public:
	::Class_1_DF4B2E46FEC5823B* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_DF4B2E46FEC5823B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF4B2E46FEC5823B*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_3EACA5870CDCB012()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_METHOD_1_3EACA5870CDCB012_OFFSET))(this);
	}

	::System::Void Method_1_538009D0B11159B3(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_METHOD_1_538009D0B11159B3_OFFSET))(this, a1);
	}
};
