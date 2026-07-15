#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3ED45B5689DB5816;
class Class_2_46FD925988407D1E;

#define CLASS_2_8393B6D5D9A6D35F_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x17087190)
#define CLASS_2_8393B6D5D9A6D35F_METHOD_2_52DCD0869ABE0AD5_OFFSET UNITYSDK_OFFSET(0x170870C0)
#define CLASS_2_8393B6D5D9A6D35F_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x170872A0)
#define CLASS_2_8393B6D5D9A6D35F__CTOR_OFFSET UNITYSDK_OFFSET(0x170875A0)

inline static constexpr unsigned int Class_2_8393B6D5D9A6D35F_TypeDefinitionIndex = 74040;

class Class_2_8393B6D5D9A6D35F : public ::Class_1_1FB256EC3633CF9E
{
public:
	::Class_1_3ED45B5689DB5816* Field_2_0; // 0x28
	::UnityEngine::Vector3 Field_2_1; // 0x30
	::System::UInt32 Field_2_2; // 0x3C
	::System::UInt32 Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8393B6D5D9A6D35F__CTOR_OFFSET))(this);
	}

	static ::Class_2_8393B6D5D9A6D35F* Method_2_52DCD0869ABE0AD5(::Class_2_46FD925988407D1E* a1, ::System::UInt64 a2)
	{
		return ((::Class_2_8393B6D5D9A6D35F*(*)(::Class_2_46FD925988407D1E*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_8393B6D5D9A6D35F_METHOD_2_52DCD0869ABE0AD5_OFFSET))(a1, a2);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8393B6D5D9A6D35F_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8393B6D5D9A6D35F_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}
};
