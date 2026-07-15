#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28031E019EB5D020;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_1_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x1604C380)
#define CLASS_1_D5953490FA4EEA2F_1_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1604C420)
#define CLASS_1_D5953490FA4EEA2F_1_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1604C320)
#define CLASS_1_D5953490FA4EEA2F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1604C3D0)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_1_TypeDefinitionIndex = 59837;

class Class_1_D5953490FA4EEA2F_1 : public ::System::Object
{
public:
	::Class_1_28031E019EB5D020* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_28031E019EB5D020* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28031E019EB5D020*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_1__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_1_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_1_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_1_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
