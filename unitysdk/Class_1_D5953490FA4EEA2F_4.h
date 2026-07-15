#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_158C3D5AE415448F_1;
class Class_1_ED80D3EC77F13F93;
namespace System { class Type; }

#define CLASS_1_D5953490FA4EEA2F_4_METHOD_1_0511A783D9C569B6_OFFSET UNITYSDK_OFFSET(0x186BC6D0)
#define CLASS_1_D5953490FA4EEA2F_4_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x186BC770)
#define CLASS_1_D5953490FA4EEA2F_4_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x186BC670)
#define CLASS_1_D5953490FA4EEA2F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x186BC720)

inline static constexpr unsigned int Class_1_D5953490FA4EEA2F_4_TypeDefinitionIndex = 59834;

class Class_1_D5953490FA4EEA2F_4 : public ::System::Object
{
public:
	::Class_1_158C3D5AE415448F_1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_158C3D5AE415448F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_158C3D5AE415448F_1*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_0511A783D9C569B6()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4_METHOD_1_0511A783D9C569B6_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_ED80D3EC77F13F93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED80D3EC77F13F93*))((::PBYTE)hIl2Cpp + CLASS_1_D5953490FA4EEA2F_4_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}
};
