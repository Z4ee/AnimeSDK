#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2768AF8030FDF1BC;
class Class_1_6AE08EF87FF0FFCC;
namespace System { class Type; }

#define CLASS_1_D1F0FBA4F47CCBB9_METHOD_1_18A14F961AC502D9_OFFSET UNITYSDK_OFFSET(0xD1AF570)
#define CLASS_1_D1F0FBA4F47CCBB9_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xD1AF140)
#define CLASS_1_D1F0FBA4F47CCBB9_METHOD_1_77DF5DA6F37BF810_OFFSET UNITYSDK_OFFSET(0xD1AF1B0)
#define CLASS_1_D1F0FBA4F47CCBB9__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AF520)

inline static constexpr unsigned int Class_1_D1F0FBA4F47CCBB9_TypeDefinitionIndex = 50864;

class Class_1_D1F0FBA4F47CCBB9 : public ::System::Object
{
public:
	::Class_1_2768AF8030FDF1BC* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_2768AF8030FDF1BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2768AF8030FDF1BC*))((::PBYTE)hIl2Cpp + CLASS_1_D1F0FBA4F47CCBB9__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F0FBA4F47CCBB9_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_77DF5DA6F37BF810()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1F0FBA4F47CCBB9_METHOD_1_77DF5DA6F37BF810_OFFSET))(this);
	}

	::System::Void Method_1_18A14F961AC502D9(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_D1F0FBA4F47CCBB9_METHOD_1_18A14F961AC502D9_OFFSET))(this, a1);
	}
};
