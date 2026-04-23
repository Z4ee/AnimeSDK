#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_08DBFC9B3812777F.h"
#include "unitysdk/Struct_2_203A76DC77D7F043.h"
#include "unitysdk/System/Object.h"

class Class_1_1D8DBED385F55542;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_2F02D0D2C192BA56_CLEAR_OFFSET UNITYSDK_OFFSET(0xA527330)
#define CLASS_1_2F02D0D2C192BA56_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0xA527560)
#define CLASS_1_2F02D0D2C192BA56_METHOD_1_D7C1CE883C1642FE_OFFSET UNITYSDK_OFFSET(0xA5275B0)
#define CLASS_1_2F02D0D2C192BA56_METHOD_1_DD9F163EE1838416_OFFSET UNITYSDK_OFFSET(0xA527450)
#define CLASS_1_2F02D0D2C192BA56__CTOR_OFFSET UNITYSDK_OFFSET(0xA5275C0)

inline static constexpr unsigned int Class_1_2F02D0D2C192BA56_TypeDefinitionIndex = 64376;

class Class_1_2F02D0D2C192BA56 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_203A76DC77D7F043, ::Class_1_1D8DBED385F55542*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F02D0D2C192BA56__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F02D0D2C192BA56_CLEAR_OFFSET))(this);
	}

	::Struct_2_08DBFC9B3812777F Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_08DBFC9B3812777F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F02D0D2C192BA56_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* Method_1_D7C1CE883C1642FE()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F02D0D2C192BA56_METHOD_1_D7C1CE883C1642FE_OFFSET))(this);
	}

	::System::Void Method_1_DD9F163EE1838416(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F02D0D2C192BA56_METHOD_1_DD9F163EE1838416_OFFSET))(this, a1);
	}
};
