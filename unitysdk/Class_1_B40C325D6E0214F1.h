#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AE08EF87FF0FFCC;
class Class_1_C59A342B94671D37;
namespace System { class Type; }

#define CLASS_1_B40C325D6E0214F1_METHOD_1_47F0EBB6C71B8457_OFFSET UNITYSDK_OFFSET(0x11A01E40)
#define CLASS_1_B40C325D6E0214F1_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x11A01DD0)
#define CLASS_1_B40C325D6E0214F1_METHOD_1_76BE4CFCDF7FD7CF_OFFSET UNITYSDK_OFFSET(0x11A020C0)
#define CLASS_1_B40C325D6E0214F1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A02070)

inline static constexpr unsigned int Class_1_B40C325D6E0214F1_TypeDefinitionIndex = 57751;

class Class_1_B40C325D6E0214F1 : public ::System::Object
{
public:
	::Class_1_C59A342B94671D37* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_C59A342B94671D37* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C59A342B94671D37*))((::PBYTE)hIl2Cpp + CLASS_1_B40C325D6E0214F1__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B40C325D6E0214F1_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_47F0EBB6C71B8457()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B40C325D6E0214F1_METHOD_1_47F0EBB6C71B8457_OFFSET))(this);
	}

	::System::Void Method_1_76BE4CFCDF7FD7CF(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_B40C325D6E0214F1_METHOD_1_76BE4CFCDF7FD7CF_OFFSET))(this, a1);
	}
};
