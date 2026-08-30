#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28031E019EB5D020;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_3_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x190F78F0)
#define CLASS_1_D5953490FA4EEA2F_3_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x190F7990)
#define CLASS_1_D5953490FA4EEA2F_3_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x190F7890)
#define CLASS_1_D5953490FA4EEA2F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x190F7940)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_3_TypeDefinitionIndex = 62683;

class Class_1_D5953490FA4EEA2F_3 : public ::System::Object
{
public:
	::Class_1_28031E019EB5D020* GFJOBPEKAPA; // 0x10

	::System::Void _ctor(::Class_1_28031E019EB5D020* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28031E019EB5D020*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_3_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
